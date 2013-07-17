#include "gmotortestersc.h"
#include "ui_gmotortestersc.h"
#include <QMessageBox>
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "thirdparty/mavlink/v1.0/testMotor/mavlink.h"


GmotorTesterSC::GmotorTesterSC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GmotorTesterSC)
{
    ui->setupUi(this);
    settingSP = new settingSerial(this);
    serial = new QSerialPort(this);

    //connect action
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(actionNew()));
    connect(ui->actionDelete,SIGNAL(triggered()),this,SLOT(actionDelete()));
    connect(ui->actionSetting,SIGNAL(triggered()),this,SLOT(actionSetting()));
    connect(ui->actionE_it,SIGNAL(triggered()),this,SLOT(actionExit()));
    connect(ui->actionConnect,SIGNAL(triggered(bool)),this,SLOT(actionConnect(bool)));
    //signal tab phu
    connect(&choseMotor,SIGNAL(buttonOK_ChoseClicked()),this,SLOT(addTabNew()));
    connect(settingSP,SIGNAL(closeSettingForm()),this,SLOT(EnableMainForm()));
    connect(&choseMotor,SIGNAL(buttonCANCEL_ChoseClicked()),this,SLOT(EnableMainForm()));
}

GmotorTesterSC::~GmotorTesterSC()
{
    delete ui;
}

// function acction-------------------------------------------------------------------------------
void GmotorTesterSC::actionDelete()
{
    deleteTab(ui->tabControlMotor->currentIndex());
}

void GmotorTesterSC::actionNew()
{
    this->setEnabled(false);
    settingSP->setEnabled(true);
    choseMotor.show();
}

void GmotorTesterSC::actionSetting()
{
    this->setEnabled(false);
    settingSP->setEnabled(true);
    settingSP->show();
}

void GmotorTesterSC::actionExit()
{
    int ret = QMessageBox::critical(this,"Thông Báo!","bạn có chắc chắn thoát không?\n Có : OK ---- Không : Cancel",QMessageBox::Ok,QMessageBox::Cancel);
    qDebug()<<"messag out";
    if(ret == QMessageBox::Ok){
        settingSP->close();
        choseMotor.close();
        serial->close();
        close();
    }
}

void GmotorTesterSC::actionConnect(bool status)
{
    if(status == true)
    {
        settingSerial::Configuration sp = settingSP->getConfi();
        if(sp.name == "")
        {
            //add com default
            foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
            {
                serial->setPortName(info.portName());
                if(!serial->isOpen())
                {

                    //mo comport va add thong so default
                    if(serial->open(QIODevice::ReadWrite)       &&
                    serial->setBaudRate(QSerialPort::Baud57600)  &&
                    serial->setDataBits(QSerialPort::Data8)     &&
                    serial->setParity(QSerialPort::NoParity)    &&
                    serial->setStopBits(QSerialPort::OneStop)   &&
                    serial->setFlowControl(QSerialPort::NoFlowControl))
                    {
                        ui->statusBar->showMessage(tr("Kết nối với: %1, %2, %3, %4, %5, %6")
                                                   .arg(serial->portName())
                                                   .arg("57600")
                                                   .arg("8")
                                                   .arg("none")
                                                   .arg("1")
                                                   .arg("none"));
                        ui->actionConnect->setChecked(true);
                        goto END;
                    }
                }
            }

            ui->actionConnect->setChecked(false);
            QMessageBox::critical(this, tr("Lỗi"), tr("ko có comport"));
            ui->statusBar->showMessage(tr("Ko có comport"));
        }
        else
        {
            serial->setPortName(sp.name);
            if(!serial->isOpen())
            {
                if(serial->open(QIODevice::ReadWrite)   &&
                        serial->setBaudRate(sp.baudRate)    &&
                        serial->setDataBits(sp.dataBits)    &&
                        serial->setParity(sp.parity)        &&
                        serial->setStopBits(sp.stopBits)    &&
                        serial->setFlowControl(sp.flowControl))
                {
                    ui->statusBar->showMessage(tr("Kết Nối với: %1, %2, %3, %4, %5, %6")
                                                   .arg(sp.name)
                                                   .arg(sp.stringBaudRate)
                                                   .arg(sp.stringDataBits)
                                                   .arg(sp.stringParity)
                                                   .arg(sp.stringStopBits)
                                                   .arg(sp.stringFlowControl));
                    ui->actionConnect->setChecked(true);
                }
                else
                {
                    ui->actionConnect->setChecked(false);
                    QMessageBox::critical(this, tr("Lỗi"), serial->errorString());
                    ui->statusBar->showMessage(tr("Lỗi cổng com"));
                }
            }
            else
            {
                ui->actionConnect->setChecked(false);
                QMessageBox::critical(this, tr("Lỗi"), "Cổng COM đang được sửa dụng.");
                ui->statusBar->showMessage(tr("Lỗi cổng com"));
            }
        }
    }
    else
    {
        serial->close();
        ui->actionConnect->setChecked(false);
        ui->statusBar->showMessage(tr("đã ngắt kết nối cổng com"));
    }

    END:;
}

// fuction phu cho viec tao form-------------------------------------------------------------------
void GmotorTesterSC::addTabNew()
{
    this->setEnabled(true);
    int index = choseMotor.indexMotorAddTab;

    ui->tabControlMotor->addTab(&panelMotor[index - 1],tr("MOTOR %1").arg(index));
}

void GmotorTesterSC::deleteTab(int index)
{
    if(ui->tabControlMotor->currentIndex() > -1){
        int ret = QMessageBox::critical(this,"Thông Báo!",tr("bạn có muốn tắt tab số %1\n Có: OK ---- Không: Cancle").arg(ui->tabControlMotor->currentIndex() + 1),QMessageBox::Ok,QMessageBox::Cancel);
        if(ret == QMessageBox::Ok)
        {
//--------- coding tắt động cơ và một số chương trình chạy ngầm điều khiển động cơ

            ui->tabControlMotor->removeTab(index);
        }
    }
}

void GmotorTesterSC::EnableMainForm()
{
    this->setEnabled(true);
}

//
