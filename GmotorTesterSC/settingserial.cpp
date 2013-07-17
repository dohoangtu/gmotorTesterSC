#include "settingserial.h"
#include "ui_settingserial.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QShowEvent>

settingSerial::settingSerial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::settingSerial)
{
    ui->setupUi(this);
    addComboboxParameter();

    connect(ui->btOk_Cancel,SIGNAL(clicked(QAbstractButton*)),this,SLOT(addCurrentConfig(QAbstractButton*)));
    connect(this,SIGNAL(showEvent(QShowEvent*)),this,SLOT(loadForm()));
    connect(this,SIGNAL(closeEvent(QCloseEvent*)),this,SLOT(closeForm()));
}

settingSerial::~settingSerial()
{
    delete ui;
}

settingSerial::Configuration settingSerial::getConfi()
{
    return currentConfig;
}

void settingSerial::addComboboxParameter()
{
    //add item cho combox baud rate
    ui->cbBaudRate->addItem("9600",QSerialPort::Baud9600);
    ui->cbBaudRate->addItem("19200",QSerialPort::Baud19200);
    ui->cbBaudRate->addItem("38400",QSerialPort::Baud38400);
    ui->cbBaudRate->addItem("57600",QSerialPort::Baud57600);
    ui->cbBaudRate->addItem("115200",QSerialPort::Baud115200);
    //add item cho combox data bit
    ui->cbDataBit->addItem("5",QSerialPort::Data5);
    ui->cbDataBit->addItem("6",QSerialPort::Data6);
    ui->cbDataBit->addItem("7",QSerialPort::Data7);
    ui->cbDataBit->addItem("8",QSerialPort::Data8);
    ui->cbDataBit->setCurrentIndex(3);
    //add item cho combox parity bit
    ui->cbParity->addItem("None",QSerialPort::NoParity);
    ui->cbParity->addItem("Even",QSerialPort::EvenParity);
    ui->cbParity->addItem("Odd",QSerialPort::OddParity);
    ui->cbParity->addItem("Mark",QSerialPort::MarkParity);
    ui->cbParity->addItem("Space",QSerialPort::SpaceParity);
    //add item cho combox stop bit
    ui->cbStopBit->addItem("1",QSerialPort::OneStop);
#ifdef Q_OS_WIN
    ui->cbStopBit->addItem("1.5",QSerialPort::OneAndHalfStop);
#endif
    ui->cbStopBit->addItem("2",QSerialPort::TwoStop);
    //add item cho flow control
    ui->cbFlowControl->addItem("None",QSerialPort::NoFlowControl);
    ui->cbFlowControl->addItem("RTS/CTS",QSerialPort::HardwareControl);
    ui->cbFlowControl->addItem("XON/XOFF",QSerialPort::SoftwareControl);
}

void settingSerial::addCurrentConfig(QAbstractButton *button)
{
    if(button->text() == "OK"){
        qDebug()<<"button OK Clicked";
        //add portName
        currentConfig.name = ui->cbPortName->currentText();
        //add baudrate
        currentConfig.baudRate = ui->cbBaudRate->currentText().toInt();
        currentConfig.stringBaudRate = ui->cbBaudRate->currentText();
        //add data bit
        currentConfig.dataBits = static_cast<QSerialPort::DataBits>
                                            (ui->cbDataBit->currentText().toInt());
        currentConfig.stringDataBits = ui->cbDataBit->currentText();
        //add parity
        currentConfig.parity = static_cast<QSerialPort::Parity>
                                            (ui->cbParity->currentText().toInt());
        currentConfig.stringParity = ui->cbParity->currentText();
        //add strop bit
        currentConfig.stopBits = static_cast<QSerialPort::StopBits>
                                            (ui->cbStopBit->currentText().toInt());
        currentConfig.stringStopBits = ui->cbStopBit->currentText();
        //add flow control
        currentConfig.flowControl = static_cast<QSerialPort::FlowControl>
                                            (ui->cbFlowControl->currentText().toInt());
        currentConfig.stringFlowControl = ui->cbFlowControl->currentText();

        emit buttonOK_SettingClicked();
    }
    else{
        qDebug()<<"button Cancel Clicked";

    }
    close();
}

void settingSerial::loadForm()
{
    ui->cbPortName->clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        ui->cbPortName->addItem(info.portName());
    }
    qDebug()<<"form setting load";
}

void settingSerial::closeForm()
{
    qDebug()<<"form setting close";
    emit closeSettingForm();
}
