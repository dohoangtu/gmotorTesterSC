#ifndef GMOTORTESTERSC_H
#define GMOTORTESTERSC_H

#include <QMainWindow>
#include <panelcontrolmotor.h>
#include <choseaddmotor.h>
#include <settingserial.h>
#include <messagebox.h>
#include "thirdparty/mavlink/v1.0/testMotor/mavlink.h"

namespace Ui {
class GmotorTesterSC;
}

class GmotorTesterSC : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GmotorTesterSC(QWidget *parent = 0);
    ~GmotorTesterSC();
    
private slots:
    void addTabNew();
    void deleteTab(int index);
    void EnableMainForm();
    //actoin slots
    void actionDelete();
    void actionNew();
    void actionSetting();
    void actionExit();
    void actionConnect(bool status);
    //serial port
//    void writeMavlink(__mavlink_test_motor_t motor);


private:
    Ui::GmotorTesterSC *ui;
    panelControlMotor panelMotor[10];
    choseAddMotor choseMotor;
    settingSerial *settingSP;
    QSerialPort *serial;
};

#endif // GMOTORTESTERSC_H
