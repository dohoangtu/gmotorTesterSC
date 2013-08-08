#include "panelcontrolmotor.h"
#include "ui_panelcontrolmotor.h"
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

bool flagTest;

panelControlMotor::panelControlMotor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::panelControlMotor)
{
    ui->setupUi(this);
    // set status begining -----------------------------------------------------------------------
    ui->gbControl->setEnabled(false);
    ui->gbDisplay->setEnabled(false);
    ui->ValueSpeed->setEnabled(false);
    ui->valuePower->setEnabled(false);

    timeProcess = new QTimer(this);
    timeMotor = new QTimer(this);
    timeDisplayMotor = new QTimer(this);

    ui->lbPower->setText(tr("POWER: %1%").arg(ui->valuePower->value()));
    ui->lbSpeed->setText(tr("SPEED: %1ms").arg(ui->ValueSpeed->value()));
    ui->btDir->setEnabled(false);
    ui->btPause->setEnabled(false);

    //bt connect function ------------------------------------------------------------------------
    connect(ui->btPower,SIGNAL(clicked(bool)),this,SLOT(btPowerClicked(bool)));
    connect(ui->btRun,SIGNAL(clicked(bool)),this,SLOT(btRunClicked(bool)));
    connect(ui->btPause,SIGNAL(clicked(bool)),this,SLOT(btPauseClicked(bool)));
    connect(ui->btDir,SIGNAL(clicked(bool)),this,SLOT(btDirClicked(bool)));
    connect(ui->valuePower,SIGNAL(valueChanged(int)),this,SLOT(VPowerChange(int)));
    //timeOut ------------------------------------------------------------------------------------
    connect(timeProcess,SIGNAL(timeout()),this,SLOT(timeProcessOut()));
    connect(timeMotor, SIGNAL(timeout()),this,SLOT(timeMotorOut()));
    connect(ui->ValueSpeed,SIGNAL(valueChanged(int)),this,SLOT(VSpeedChange(int)));
    connect(timeDisplayMotor,SIGNAL(timeout()),this,SLOT(timeDisplayMotorOut()));

    connect(this,SIGNAL(showEvent(QShowEvent*)),this,SLOT(loadForm()));
    connect(this,SIGNAL(closeEvent(QCloseEvent*)),this,SLOT(closeForm()));
}

panelControlMotor::~panelControlMotor()
{
    delete ui;
}

panelControlMotor::panelParameter panelControlMotor::getDataControlMotor()
{
    return controlMotor;
}

void panelControlMotor::stopTester()
{
    ui->fMotor->setEnabled(false);
    ui->btRun->setChecked(false);
    ui->ValueSpeed->setEnabled(false);
    ui->gbDisplay->setEnabled(true);
    timeProcess->stop();
    timeMotor->stop();
    timeDisplayMotor->stop();
    controlMotor.power = 0;
}

void panelControlMotor::statTester()
{
     ui->fMotor->setEnabled(true);
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
        timeDisplayMotor->stop();
        controlMotor.power = 0;
        ui->btRun->setChecked(false);
        ui->btPause->setChecked(false);
    }
}

int msec;
int msecSystem;
int msecStart;
void panelControlMotor::btRunClicked(bool status)
{
    qDebug()<<"button run pannel click!";
    if(status == true)
    {
        QTime hous = ui->timeSet->time();
        QTime housSystem = QTime::currentTime();

        msec = hous.second()*1000 + hous.minute()*60*1000 + hous.hour()*60*60*1000;
        msecSystem = housSystem.second()*1000 + housSystem.minute()*60*1000 + housSystem.hour()*60*60*1000;


        if(msec != 0)
        {
            ui->gbDisplay->setEnabled(false);
            qDebug()<<tr("timremain: %1").arg(timeRemainingMotor);

            if(msec != timeMotorSetOld || timeRemainingMotor == 0)
            {
                msecStart = msecSystem;
                ui->pbTimeProcess->setValue(0);
                timeMotorSetOld = msec;
                timeMotor->start(timeMotorSetOld);
            }
            else
            {
                timeMotor->start(timeRemainingMotor);
            }
            timeProcess->start(1000);
            ui->btDir->setEnabled(true);
            ui->btPause->setEnabled(true);
            ui->ValueSpeed->setEnabled(true);
            ui->valuePower->setEnabled(true);

            controlMotor.speed = ui->ValueSpeed->value();
            controlMotor.power = ui->valuePower->value();
            timeDisplayMotor->start(ui->ValueSpeed->value());
            if(controlMotor.dir == 4) controlMotor.dir = dirOld;
            controlMotor.timeStop = msecSystem + timeRemainingMotor;

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

        controlMotor.status = "Stop testing";
        ui->btPause->setChecked(false);
        ui->btDir->setEnabled(false);
        ui->btPause->setEnabled(false);
        ui->ValueSpeed->setEnabled(false);
        ui->valuePower->setEnabled(false);

        ui->gbDisplay->setEnabled(true);
        timeProcess->stop();
        timeMotor->stop();
        timeDisplayMotor->stop();
        controlMotor.power = 0;
END:;
    }
}

void panelControlMotor::btPauseClicked(bool status)
{
    qDebug()<<"button pause pannel click!";
    if(status == true)
    {
        dirOld = controlMotor.dir;
        controlMotor.dir = 4;
        timeDisplayMotor->stop();
        ui->btDir->setEnabled(false);
    }
    else
    {
        controlMotor.dir = dirOld;
        timeDisplayMotor->start(ui->ValueSpeed->value());
        ui->btDir->setEnabled(true);
    }
}

void panelControlMotor::btDirClicked(bool status)
{
    qDebug()<<"button Dir pannel click!";
    if(status == true)
    {
        controlMotor.dir = 1;
    }
    else
    {
        controlMotor.dir = 0;
    }
}

void panelControlMotor::VSpeedChange(int speed)
{
    ui->lcdSpeed->display(speed);
    timeDisplayMotor->start(speed);
    ui->lbSpeed->setText(tr("SPEED: %1ms").arg(speed));
}

void panelControlMotor::VPowerChange(int Power)
{
    ui->lbPower->setText(tr("POWER: %1%").arg(Power));
}

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

    controlMotor.timeRemaining = timeRemainingMotor;
    controlMotor.runTime = msec - timeRemainingMotor;
    controlMotor.status = "Run testing";
    controlMotor.speed = ui->ValueSpeed->value();
    controlMotor.power = ui->valuePower->value();
    controlMotor.timeStart = msecStart;
    controlMotor.timeStop = msecSystem + msec;

}

void panelControlMotor::timeMotorOut()
{
    qDebug()<<"time Motor tick";
    controlMotor.power = 0;
    timeRemainingMotor = 0;
    controlMotor.status = "END Testing";
    ui->btRun->setChecked(false);
    ui->gbDisplay->setEnabled(true);
    ui->pbTimeProcess->setValue(99);
    timeDisplayMotor->stop();
    timeProcess->stop();
    timeMotor->stop();

}

void panelControlMotor::timeDisplayMotorOut()
{
//    qDebug()<<"time display Motor tick";
    if(controlMotor.dir == 0){
        cnt++;
        if(cnt>99) cnt = 0;
        ui->Motor->setValue(cnt);
    }
    else if(controlMotor.dir == 1){
        cnt--;
        if(cnt<0) cnt = 99;
        ui->Motor->setValue(cnt);
    }
}

void panelControlMotor::loadForm()
{
    controlMotor.status = "Begin Testing";
    controlMotor.dir = 0;
    controlMotor.power = 0;
    controlMotor.speed = 11;
    controlMotor.timeRemaining = 0;
    controlMotor.timeStart = 0;
    controlMotor.timeStop = 0;
    controlMotor.runTime = 0;
}

void panelControlMotor::closeForm()
{
    qDebug()<<"close form panels";
    controlMotor.dir = 0;
    controlMotor.power = 0;
    controlMotor.speed = 11;
    controlMotor.timeRemaining = 0;
    controlMotor.timeStart = 0;
    controlMotor.timeStop = 0;
    controlMotor.runTime = 0;
}
