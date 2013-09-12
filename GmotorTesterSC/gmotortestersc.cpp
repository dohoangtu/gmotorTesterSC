#include "gmotortestersc.h"
#include <QTimer>
#include "ui_gmotortestersc.h"
#include <QMessageBox>
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "thirdparty/mavlink/v1.0/mavGmotorTesterSC/mavlink.h"
#include <QTreeView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QList>
#include <QDateTime>
#include <QComboBox>
#include <QPalette>
#include <QtXml>

#define SYSTEM_ID 20
#define TARGET_SYSTEM_ID 10

//BEGIN PROGRAM ----------------------------------------------------------------------------------
//Variable ---------------------------------------------------------------------------------------
bool pulse = false;
bool readParams = false;
bool chartTimerStarted = false;
bool flagCloseSerial;
char flagUpdateChart;
mavlink_raw_imu_t raw_imu;
mavlink_mav_gmotor_test_mcu2pc_t motor1;
QComboBox *combox;

int arrayTemp[10];
///fuction main ----------------------------------------------------------------------------------
GmotorTesterSC::GmotorTesterSC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GmotorTesterSC)
{
    ui->setupUi(this);
    settingSP = new settingSerial(this);
    serial = new QSerialPort(this);
    timeTransmit = new QTimer;
    standarMode = new QStandardItemModel;
    combox = new QComboBox;
//    chartSetting();

    //connect action
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(actionNew()));
    connect(ui->actionDelete,SIGNAL(triggered()),this,SLOT(actionDelete()));
    connect(ui->actionSetting,SIGNAL(triggered()),this,SLOT(actionSetting()));
    connect(ui->actionE_it,SIGNAL(triggered()),this,SLOT(actionExit()));
    connect(ui->actionConnect,SIGNAL(triggered(bool)),this,SLOT(actionConnect(bool)));
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(actionOpen()));
    //signal tab phu
    connect(&choseMotor,SIGNAL(buttonOK_ChoseClicked()),this,SLOT(addTabNew()));
    connect(settingSP,SIGNAL(closeSettingForm()),this,SLOT(EnableMainForm()));
    connect(&choseMotor,SIGNAL(buttonCANCEL_ChoseClicked()),this,SLOT(EnableMainForm()));
    //receive
    connect(this,SIGNAL(heartBeatPulse(bool)),this,SLOT(heartbeatReceive(bool)));
    connect(serial,SIGNAL(readyRead()),this,SLOT(readSerial()));
    connect(this,SIGNAL(messageReceived(QByteArray)),this,SLOT(readMavlink(QByteArray)));
    connect(timeTransmit,SIGNAL(timeout()),this,SLOT(writeMavlink()));
    //form
    connect(this,SIGNAL(closeEvent(QCloseEvent*)),this,SLOT(closeProgram()));

    //table connect
    connect(ui->tableMotor,SIGNAL(cellChanged(int,int)),this,SLOT(pressEnterCell(int,int)));
    connect(ui->tableMotor,SIGNAL(cellDoubleClicked(int,int)),this,SLOT(DoubleClickCell(int,int)));
    //panelcontrol
    connect(&panelMotor[0],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel0(int,char,int)));
    connect(&panelMotor[1],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel1(int,char,int)));
    connect(&panelMotor[2],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel2(int,char,int)));
    connect(&panelMotor[3],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel3(int,char,int)));
    connect(&panelMotor[4],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel4(int,char,int)));
    connect(&panelMotor[5],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel5(int,char,int)));
    connect(&panelMotor[6],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel6(int,char,int)));
    connect(&panelMotor[7],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel7(int,char,int)));
    connect(&panelMotor[8],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel8(int,char,int)));
    connect(&panelMotor[9],SIGNAL(writePannel(int,char,int)),this,SLOT(writePanel9(int,char,int)));

//    ui->actionNew->setEnabled(false);
    ui->tableMotor->setEnabled(false);
}
///-----------------------------------------------------------------------------------------------
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
    ui->tableMotor->setEnabled(true);
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

                        startAllPanel();
                        ui->actionConnect->setChecked(true);
                        ui->actionNew->setEnabled(true);
                        flagCloseSerial = false;
                        timeTransmit->start(500);
                        goto END;
                    }
                }
            }

            ui->actionConnect->setChecked(false);
            ui->actionNew->setEnabled(false);
            flagCloseSerial = true;
            QMessageBox::critical(this, tr("Lỗi"), tr("ko có comport"));
            ui->statusBar->showMessage(tr("Ko có comport"));
            timeTransmit->stop();
        }
        else
        {
            serial->setPortName(sp.name);
            if(!serial->isOpen())
            {
                if(serial->open(QIODevice::ReadWrite)       &&
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

                    startAllPanel();
                    ui->actionConnect->setChecked(true);
                    ui->actionNew->setEnabled(true);
                    flagCloseSerial = false;
                    timeTransmit->start(500);
                }
                else
                {
                    flagCloseSerial = true;
                    ui->actionConnect->setChecked(false);
                    QMessageBox::critical(this, tr("Lỗi"), serial->errorString());
                    ui->statusBar->showMessage(tr("Lỗi cổng com"));
                    timeTransmit->stop();
                }
            }
            else
            {
                flagCloseSerial = true;
                ui->actionConnect->setChecked(false);
                ui->actionNew->setEnabled(false);
                QMessageBox::critical(this, tr("Lỗi"), "Cổng COM đang được sửa dụng.");
                ui->statusBar->showMessage(tr("Lỗi cổng com"));
                timeTransmit->stop();
            }
        }
    }
    else
    {
        stopAllPanel();
        flagCloseSerial = true;
        ui->actionConnect->setChecked(false);
        ui->actionNew->setEnabled(false);
        ui->statusBar->showMessage(tr("đã ngắt kết nối cổng com"));
        serial->close();
    }

END:;
}

void GmotorTesterSC::actionOpen()
{
    importXMLfile("profiles/tu.xml");
}

//serial port write & read -----------------------------------------------------------------------
void GmotorTesterSC::writeSerial()
{
}
void GmotorTesterSC::writeMavlinkPanel(int power, char id, char dir, int speed)
{
    uint16_t len;
    mavlink_message_t msg;
    uint8_t buf[MAVLINK_MAX_PACKET_LEN];
    if(serial->isOpen() && ui->tabControlMotor->currentIndex() != -1)
    {
        qDebug("writeMavlink");
        mavlink_msg_mav_gmotor_test_pc2mcu_pack(SYSTEM_ID, MAV_COMP_ID_SERVO1,&msg,BOARD_ADDR1,MOTOR1,CW,100,5);
        len = mavlink_msg_to_send_buffer(buf, &msg);
        serial->write((const char*)buf, len);
    }
}
void GmotorTesterSC::writePanel0(int power, char dir, int speed){writeMavlinkPanel(power,0,dir,speed);}
void GmotorTesterSC::writePanel1(int power, char dir, int speed){writeMavlinkPanel(power,1,dir,speed);}
void GmotorTesterSC::writePanel2(int power, char dir, int speed){writeMavlinkPanel(power,2,dir,speed);}
void GmotorTesterSC::writePanel3(int power, char dir, int speed){writeMavlinkPanel(power,3,dir,speed);}
void GmotorTesterSC::writePanel4(int power, char dir, int speed){writeMavlinkPanel(power,4,dir,speed);}
void GmotorTesterSC::writePanel5(int power, char dir, int speed){writeMavlinkPanel(power,5,dir,speed);}
void GmotorTesterSC::writePanel6(int power, char dir, int speed){writeMavlinkPanel(power,6,dir,speed);}
void GmotorTesterSC::writePanel7(int power, char dir, int speed){writeMavlinkPanel(power,7,dir,speed);}
void GmotorTesterSC::writePanel8(int power, char dir, int speed){writeMavlinkPanel(power,8,dir,speed);}
void GmotorTesterSC::writePanel9(int power, char dir, int speed){writeMavlinkPanel(power,9,dir,speed);}

int cntwrite;
//int cntUpdateXml;
void GmotorTesterSC::writeMavlink()
{
    if(serial->isOpen() && ui->tabControlMotor->currentIndex() != -1)
    {
//        chartUpdate();
//        cntwrite++;
//        if(cntwrite > 3){
//            cntwrite = 0;
//            if(cntSerialConnect >1){
//                startAllPanel();
//            }
//            else{
//                stopAllPanel();
//            }
//           cntSerialConnect = 0;
//        }

        panelControlMotor::panelParameter P;
        for(int i = 0 ; i < arrayDataMotor.size() ; i++){
                P = panelMotor[arrayDataMotor.at(i)-1].getDataControlMotor();
                ui->tableMotor->setItem(i,1,new QTableWidgetItem(P.status));
                ui->tableMotor->setItem(i,2,new QTableWidgetItem(P.timeStart));
                ui->tableMotor->setItem(i,3,new QTableWidgetItem(P.timeStop));
                ui->tableMotor->setItem(i,4,new QTableWidgetItem(P.timeRemaining));
                ui->tableMotor->setItem(i,5,new QTableWidgetItem(P.runTime));
        }

//        cntUpdateXml++;
//        if(cntUpdateXml > 4){
//            cntUpdateXml = 0;
//            QDomDocument profile;
//            updateXMLfile(profile, "tu.xml");
//        }

    }
}
void GmotorTesterSC::readSerial(){
    if(serial->isOpen())
    {
        QByteArray messageData = serial->readAll();
        emit messageReceived(messageData);
    }
}
void GmotorTesterSC::readMavlink(QByteArray buff){
    mavlink_message_t message;
    mavlink_status_t status;
    uint8_t byte;
//--tach chuoi du lieu cua mavlink ---------------------------------------------------------------
    for(int position = 0; position < buff.size(); position++)
    {
        byte = buff[position];
        mavlink_parse_char(MAVLINK_COMM_0,byte, &message, &status);

        switch (message.msgid)
        {
//------truyen heart bit kiem tra ke noi----------------------------------------------------------
        case MAVLINK_MSG_ID_HEARTBEAT:
            mavlink_heartbeat_t heartbeat;
            heartbeat.mavlink_version = 0;
            mavlink_msg_heartbeat_decode(&message,&heartbeat);
            if(heartbeat.mavlink_version == MAVLINK_VERSION )
                pulse = 1;
            else
                pulse = 0;

            emit heartBeatPulse(pulse);
            break;
//------------------------------------------------------------------------------------------------
        case MAVLINK_MSG_ID_RAW_IMU:

            break;           
        case MAVLINK_MSG_ID_ATTITUDE:
            break;
        case MAVLINK_MSG_ID_PARAM_VALUE:
            break;
//------du lieu nhan tu duoi vi dieu khien truyen len---------------------------------------------
        case MAVLINK_MSG_ID_MAV_GMOTOR_TEST_MCU2PC:
            motor1.board_address = mavlink_msg_mav_gmotor_test_mcu2pc_get_board_address(&message);
            motor1.motor_address = mavlink_msg_mav_gmotor_test_mcu2pc_get_motor_address(&message);
            motor1.motor_status = mavlink_msg_mav_gmotor_test_mcu2pc_get_motor_status(&message);
            motor1.motor_temp = mavlink_msg_mav_gmotor_test_mcu2pc_get_motor_temp(&message);

//            qDebug()<<tr("power: %1, status: %2, dir: %3, speed: %4, temparature: %5")
//                                  .arg(motor1.power)
//                                  .arg(motor1.status)
//                                  .arg(motor1.dir)
//                                  .arg(motor1.speed)
//                                  .arg(motor1.temperature*330/4096);

//            if(motor1.motor_status !=){
//                serial->close();
//                timeTransmit->stop();
//            }
            break;
        default:
            break;
        }
//------end of switch-----------------------------------------------------------------------------
    }
}

void GmotorTesterSC::heartbeatReceive(bool satatus){
    if(satatus == 1){
        cntSerialConnect = 0;
        ui->actionLed->setChecked(true);
    }
    else{
        cntSerialConnect++;
        if(cntSerialConnect > 100)   ui->actionLed->setChecked(false);
    }
}
void GmotorTesterSC::closeProgram(){
    uint16_t len;
    mavlink_message_t msg;
    uint8_t buf[MAVLINK_MAX_PACKET_LEN];
    if(serial->isOpen())
    {
        qDebug()<<"close Program";
        mavlink_msg_mav_gmotor_test_pc2mcu_pack(SYSTEM_ID, MAV_COMP_ID_SERVO1,&msg,BOARD_ADDR8,MOTOR5,0,0,0);
        len = mavlink_msg_to_send_buffer(buf, &msg);
        serial->write((const char*)buf, len);
    }

    choseMotor.close();
    settingSP->close();
}

int rowMotorCurrent;
void GmotorTesterSC::pressEnterCell(int row, int column){
//    qDebug()<<tr("enter cell %1,%2").arg(row).arg(column);
    
    if(column == 6){
        if(ui->tableMotor->item(row,column)->text() != ""){
            flagUpdateChart = 2;
            arrayTemp[arrayDataMotor.at(row) - 1] = (int)(ui->tableMotor->item(row,column)->text().toInt());
//            qDebug()<<tr("enter cell %1,%2 data: %3").arg(row).arg(column).arg(arrayTemp[row]);
        }
    }
}
void GmotorTesterSC::DoubleClickCell(int row, int column)
{
    if(column == 6){
        rowMotorCurrent = row;
        flagUpdateChart += 1;
    }
}

int cntTab;
// fuction phu cho viec tao form-----------------------------------------------------------------------------
void GmotorTesterSC::addTabNew(){
    qDebug("add tab");
    int index = choseMotor.indexMotorAddTab;

    ui->tabControlMotor->addTab(&panelMotor[index - 1],tr("MOTOR %1").arg(index));
    ui->tabControlMotor->setCurrentIndex(ui->tabControlMotor->count()-1);
    ui->tableMotor->setItem(ui->tabControlMotor->currentIndex(),0,
                            new QTableWidgetItem((QString)tr("MOTOR %1").arg(index)));

    arrayDataMotor<< index;
}
void GmotorTesterSC::deleteTab(int index)
{
    if(index > -1){
        int ret = QMessageBox::critical(this,"Thông Báo!",tr("bạn có muốn tắt tab số %1\n Có: OK ---- Không: Cancle").arg(ui->tabControlMotor->currentIndex() + 1),QMessageBox::Ok,QMessageBox::Cancel);
        if(ret == QMessageBox::Ok)
        {
            uint16_t len;
            mavlink_message_t msg;
            uint8_t buf[MAVLINK_MAX_PACKET_LEN];
            //------ coding tắt động cơ và một số chương trình chạy ngầm điều khiển động cơ ------------------
            choseAddMotor::listMotor motor;
            motor.Name = tr("Motor %1").arg(arrayDataMotor.at(index));
            motor.index = arrayDataMotor.at(index);

            if(serial->isOpen())
            {
                mavlink_msg_mav_gmotor_test_pc2mcu_pack(SYSTEM_ID, MAV_COMP_ID_SERVO1,&msg,(motor.index - 1)/5,(motor.index - 1)%5,0,0,0);

                len = mavlink_msg_to_send_buffer(buf, &msg);
                serial->write((const char*)buf, len);
            }

            panelMotor[arrayDataMotor.at(index)].close();
            arrayDataMotor.removeAt(index);
            ui->tabControlMotor->removeTab(index);
            clearRowTableMotor(index);
            choseMotor.list.insert(10,motor);
        }
    }
}

void GmotorTesterSC::EnableMainForm(){
    this->setEnabled(true);
}
void GmotorTesterSC::stopAllPanel()
{
    for(int i = 0 ; i < 10 ; i ++){
        panelMotor[i].stopTester();
    }
}

void GmotorTesterSC::startAllPanel(){
    for(int i = 0 ; i < 10 ; i ++){
        panelMotor[i].statTester();
    }
}

void GmotorTesterSC::clearRowTableMotor(int row){
    ui->tableMotor->removeRow(row);
    ui->tableMotor->insertRow(9);
}

//int cntUpdateChart[11];
void GmotorTesterSC::chartUpdate()
{
//    if(flagUpdateChart > 1){
//        flagUpdateChart = 0;
//        cntUpdateChart[arrayDataMotor.at(rowMotorCurrent) - 1]++;

//        if(arrayDataMotor.at(rowMotorCurrent)-1 == 0){
//            temperature_point_0 += QPointF(cntUpdateChart[0],arrayTemp[0]);
//            temperature_0->setSamples(temperature_point_0);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 1){
//            temperature_point_1 += QPointF(cntUpdateChart[1],arrayTemp[1]);
//            temperature_1->setSamples(temperature_point_1);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 2){
//            temperature_point_2 += QPointF(cntUpdateChart[2],arrayTemp[2]);
//            temperature_2->setSamples(temperature_point_2);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 3){
//            temperature_point_3 += QPointF(cntUpdateChart[3],arrayTemp[3]);
//            temperature_3->setSamples(temperature_point_3);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 4){
//            temperature_point_4 += QPointF(cntUpdateChart[4],arrayTemp[4]);
//            temperature_4->setSamples(temperature_point_4);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 5){
//            temperature_point_5 += QPointF(cntUpdateChart[5],arrayTemp[5]);
//            temperature_5->setSamples(temperature_point_5);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 6){
//            temperature_point_6 += QPointF(cntUpdateChart[6],arrayTemp[6]);
//            temperature_6->setSamples(temperature_point_6);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 7){
//            temperature_point_7 += QPointF(cntUpdateChart[7],arrayTemp[7]);
//            temperature_7->setSamples(temperature_point_7);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 8){
//            temperature_point_8 += QPointF(cntUpdateChart[8],arrayTemp[8]);
//            temperature_8->setSamples(temperature_point_8);
//        }
//        else if(arrayDataMotor.at(rowMotorCurrent)-1 == 9){
//            temperature_point_9 += QPointF(cntUpdateChart[9],arrayTemp[9]);
//            temperature_9->setSamples(temperature_point_9);
//        }
//    }
}

void GmotorTesterSC::chartSetting(){
//    QwtPlotGrid *grid = new QwtPlotGrid();
//    ui->plotTemperature->setAutoReplot(true);

//    grid->setMinorPen(QPen(Qt::gray, 0, Qt::DotLine));
//    grid->setMajorPen(QPen(Qt::gray, 0, Qt::DotLine));
//    grid->enableX(true);
//    grid->enableY(true);
//    grid->attach(ui->plotTemperature);

//    temperature_0 = new QwtPlotCurve();
//    temperature_0->setTitle("temperature 0");
//    temperature_0->setPen(Qt::black, 2, Qt::SolidLine);
//    temperature_0->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_0->attach(ui->plotTemperature);

//    temperature_1 = new QwtPlotCurve();
//    temperature_1->setTitle("temperature 1");
//    temperature_1->setPen(Qt::blue, 2, Qt::SolidLine);
//    temperature_1->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_1->attach(ui->plotTemperature);

//    temperature_2 = new QwtPlotCurve();
//    temperature_2->setTitle("temperature 2");
//    temperature_2->setPen(Qt::cyan, 2, Qt::SolidLine);
//    temperature_2->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_2->attach(ui->plotTemperature);

//    temperature_3 = new QwtPlotCurve();
//    temperature_3->setTitle("temperature 3");
//    temperature_3->setPen(Qt::gray, 2, Qt::SolidLine);
//    temperature_3->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_3->attach(ui->plotTemperature);

//    temperature_4 = new QwtPlotCurve();
//    temperature_4->setTitle("temperature 4");
//    temperature_4->setPen(Qt::green, 2, Qt::SolidLine);
//    temperature_4->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_4->attach(ui->plotTemperature);

//    temperature_5 = new QwtPlotCurve();
//    temperature_5->setTitle("temperature 5");
//    temperature_5->setPen(Qt::magenta, 2, Qt::SolidLine);
//    temperature_5->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_5->attach(ui->plotTemperature);

//    temperature_6 = new QwtPlotCurve();
//    temperature_6->setTitle("temperature 6");
//    temperature_6->setPen(Qt::red, 2, Qt::SolidLine);
//    temperature_6->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_6->attach(ui->plotTemperature);

//    temperature_7 = new QwtPlotCurve();
//    temperature_7->setTitle("temperature 7");
//    temperature_7->setPen(Qt::yellow, 2, Qt::SolidLine);
//    temperature_7->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_7->attach(ui->plotTemperature);

//    temperature_8 = new QwtPlotCurve();
//    temperature_8->setTitle("temperature 8");
//    temperature_8->setPen(Qt::darkBlue, 2, Qt::SolidLine);
//    temperature_8->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_8->attach(ui->plotTemperature);

//    temperature_9 = new QwtPlotCurve();
//    temperature_9->setTitle("temperature 9");
//    temperature_9->setPen(Qt::darkCyan, 2, Qt::SolidLine);
//    temperature_9->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_9->attach(ui->plotTemperature);

//    temperature_axis = new QwtPlotCurve();
//    temperature_axis->setTitle("axis");
//    temperature_axis->setPen(Qt::white, 0.1, Qt::SolidLine);
//    temperature_axis->setRenderHint(QwtPlotItem::RenderAntialiased, true);
//    temperature_axis->attach(ui->plotTemperature);

//    temperature_point_axis += QPointF(0,0);
//    temperature_axis->setSamples(temperature_point_axis);
//    temperature_point_axis += QPointF(0,100);
//    temperature_axis->setSamples(temperature_point_axis);
//    temperature_point_axis += QPointF(100,100);
//    temperature_axis->setSamples(temperature_point_axis);

//    ui->checkBoxM1->setVisible(false);
//    ui->checkBoxM2->setVisible(false);
//    ui->checkBoxM3->setVisible(false);
//    ui->checkBoxM4->setVisible(false);
//    ui->checkBoxM5->setVisible(false);
//    ui->checkBoxM6->setVisible(false);
//    ui->checkBoxM7->setVisible(false);
//    ui->checkBoxM8->setVisible(false);
//    ui->checkBoxM9->setVisible(false);
//    ui->checkBoxM10->setVisible(false);

//    ui->labelM1->setVisible(false);
//    ui->labelM2->setVisible(false);
//    ui->labelM3->setVisible(false);
//    ui->labelM4->setVisible(false);
//    ui->labelM5->setVisible(false);
//    ui->labelM6->setVisible(false);
//    ui->labelM7->setVisible(false);
//    ui->labelM8->setVisible(false);
//    ui->labelM9->setVisible(false);
//    ui->labelM10->setVisible(false);

}

void GmotorTesterSC::updateXMLfile(QDomDocument document, QString xmlfile){
    QDomElement groups = document.createElement("TestMotorGroups");
    document.appendChild(groups);

    /* motors params */
    QDomElement motors = document.createElement("ParameterMotor");
    groups.appendChild(motors);
    QDomElement numMotorss = document.createElement("numMotors");
    numMotorss.setAttribute("num", arrayDataMotor.size());
    motors.appendChild(numMotorss);
    for(int i = 0 ; i < arrayDataMotor.size() ; i++){
        if(arrayDataMotor.at(i) != 0){
            panelControlMotor::panelParameter P = panelMotor[arrayDataMotor.at(i) - 1].getDataControlMotor();
            QDomElement Status = document.createElement(tr("Motor%1").arg(arrayDataMotor.at(i)));
            {
                Status.setAttribute("status",       P.status);
                Status.setAttribute("startTime",    P.timeStart);
                Status.setAttribute("stopTime",     P.timeStop);
                Status.setAttribute("remainingTime",P.timeRemaining);
                Status.setAttribute("runTime",      P.runTime);
                motors.appendChild(Status);
            }
        }
    }
    /* end of rc params */

    QFile file("profiles/" + xmlfile);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Fail to open file for writting";
    }
    else
    {
        QTextStream stream(&file);
        stream << document.toString();
        file.close();
        qDebug() << "Finished";
    }
}

void GmotorTesterSC::importXMLfile(QString importfile){
    QDomDocument importProfile;

    //Load the file
    QFile file(importfile);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open the file";
    }
    else
    {
        if(!importProfile.setContent(&file))
        {
            qDebug() << "Failed to load document";
        }
        file.close();
    }

    //Get the root element
    QDomElement root = importProfile.firstChildElement();

    /* Get the elements */
    //motor frequency
    // pitch motor
//    ui->txtTest->setText(tr("temperature: %1").arg(ListElements(root, "Motor1", "temperature")));
}

int GmotorTesterSC::ListElements(QDomElement root, QString tagname, QString attribute){
    QDomNodeList items = root.elementsByTagName(tagname);

    qDebug() << "Total items = " << items.count();

    for(int i=0; i< items.count(); i++)
    {
        QDomNode itemnode = items.at(i);

        //convert to element
        if(itemnode.isElement())
        {
            QDomElement itemele = itemnode.toElement();
            qDebug() << itemele.attribute(attribute).toInt();
            return itemele.attribute(attribute).toInt();
        }
    }
    return 0;
}

//END PROGAMER -----------------------------------------------------------------------------------
