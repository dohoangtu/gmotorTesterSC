#include "panelcontrolmotor.h"
#include "ui_panelcontrolmotor.h"
#include <QMessageBox>
#include <QDebug>
#include <QTimer>

panelControlMotor::panelControlMotor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::panelControlMotor)
{
    ui->setupUi(this);
    // set status begining -----------------------------------------------------------------------
    ui->gbControl->setEnabled(false);
    ui->gbDisplay->setEnabled(false);
    ui->ValueSpeed->setEnabled(false);

    timeProcess = new QTimer(this);
    timeMotor = new QTimer(this);
    timeDisplayMotor = new QTimer(this);

    //bt connect function ------------------------------------------------------------------------
    connect(ui->btPower,SIGNAL(clicked(bool)),this,SLOT(btPowerClicked(bool)));
    connect(ui->btRun,SIGNAL(clicked(bool)),this,SLOT(btRunClicked(bool)));
    connect(ui->btPause,SIGNAL(clicked(bool)),this,SLOT(btPauseClicked(bool)));
    connect(ui->btDir,SIGNAL(clicked(bool)),this,SLOT(btDirClicked(bool)));
    //timeOut ------------------------------------------------------------------------------------
    connect(timeProcess,SIGNAL(timeout()),this,SLOT(timeProcessOut()));
    connect(timeMotor, SIGNAL(timeout()),this,SLOT(timeMotorOut()));
    connect(ui->ValueSpeed,SIGNAL(valueChanged(int)),this,SLOT(VSpeedChange(int)));
    connect(timeDisplayMotor,SIGNAL(timeout()),this,SLOT(timeDisplayMotorOut()));
}

panelControlMotor::~panelControlMotor()
{
    delete ui;
}

void panelControlMotor::closeProgram()
{
    qDebug()<<"close panel control motor";
}

void panelControlMotor::btPowerClicked(bool status)
{
    qDebug()<<"button power pannel click!";
    if(status == true)
    {
        ui->gbControl->setEnabled(true);
        ui->gbDisplay->setEnabled(true);
    }
    else
    {
        ui->gbControl->setEnabled(false);
        ui->gbDisplay->setEnabled(false);

        timeMotor->stop();
        timeProcess->stop();
        ui->btRun->setChecked(false);
        ui->btPause->setChecked(false);
    }
}

void panelControlMotor::btRunClicked(bool status)
{
    qDebug()<<"button run pannel click!";
    if(status == true)
    {
        QTime hous = ui->timeSet->time();
        int msec = hous.second()*1000 + hous.minute()*60*1000 + hous.hour()*60*60*1000;
        qDebug()<<tr("msec: %1").arg(msec);

        if(msec != 0)
        {
            ui->gbDisplay->setEnabled(false);
            if(msec != timeMotorSetOld || timeRemainingMotor == 0)
            {
               timeMotorSetOld = msec;
               timeMotor->start(timeMotorSetOld);
            }
            else
            {
                timeMotor->start(timeRemainingMotor);
            }
            timeProcess->start(1000);
            ui->ValueSpeed->setEnabled(true);

        }
        else
        {
            ui->btRun->setChecked(false);
            QMessageBox::critical(this,"Lỗi","khoảng thời gian kiểm tra chưa được cài đặt");
        }
    }
    else
    {
        if(timeRemainingMotor != 0)
        {
            int ret = QMessageBox::critical(this,tr("Thông Báo"),tr("Vẫn đang còn trong quá trình kiểm tra\n bạn muốn dưng lại?\n Có: nhấn OK, Không: nhấn YES"),QMessageBox::Ok,QMessageBox::Cancel);
            if(ret ==  QMessageBox::Cancel)
            {
                    ui->btRun->setChecked(true);
                    goto END;
            }
        }

        ui->ValueSpeed->setEnabled(false);
        ui->gbDisplay->setEnabled(true);
        timeProcess->stop();
        timeMotor->stop();
        timeDisplayMotor->stop();
END:;
    }
}

void panelControlMotor::btPauseClicked(bool status)
{
    qDebug()<<"button pause pannel click!";
    if(status == true)
    {

    }
    else
    {

    }
}

void panelControlMotor::btDirClicked(bool status)
{
    qDebug()<<"button Dir pannel click!";
    if(status == true)
    {

    }
    else
    {

    }
}

void panelControlMotor::VSpeedChange(int speed)
{
    ui->lcdSpeed->display(speed);
    if(speed == 11){
        timeDisplayMotor->stop();
    }
    else{
        timeDisplayMotor->start(speed);
    }
}

int cnt;
void panelControlMotor::timeProcessOut()
{
    timeRemainingMotor = timeMotor->remainingTime();
    int hour = timeRemainingMotor/(1000*60*60);
    int min  =(timeRemainingMotor - hour*60*60*1000)/(60*1000);
    int sec  =(timeRemainingMotor - hour*60*60*1000 - min*60*1000)/1000;

    ui->pbTimeProcess->setValue((int)((timeMotorSetOld - timeRemainingMotor)*100/timeMotorSetOld));
    ui->remainingHour->display(hour);
    ui->remainingMinute->display(min);
    ui->remainingSecond->display(sec);
}

void panelControlMotor::timeMotorOut()
{
    qDebug()<<"time Motor tick";
}

void panelControlMotor::timeDisplayMotorOut()
{
//    qDebug()<<"time display Motor tick";
    cnt++;
    if(cnt>99) cnt = 0;
    ui->Motor->setValue(cnt);
}
