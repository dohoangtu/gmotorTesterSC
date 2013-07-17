#ifndef PANELCONTROLMOTOR_H
#define PANELCONTROLMOTOR_H

#include <QWidget>
#include <QTimer>
#include <QSerialPort>

namespace Ui {
class panelControlMotor;
}

class panelControlMotor : public QWidget
{
    Q_OBJECT
    
public:
    explicit panelControlMotor(QWidget *parent = 0);
    ~panelControlMotor();

    struct panelParameter{
        bool status;
        int speed;
        bool dir;
        bool pause;
    };
    panelParameter controlMotor;

signals:
    void closePanelControlMotor();
private slots:
    void closeProgram();
    //bt press ------------------------------------------------------------------------------------
    void btPowerClicked(bool status);
    void btRunClicked(bool status);
    void btPauseClicked(bool status);
    void btDirClicked(bool status);
    void VSpeedChange(int speed);
    //timeOut -------------------------------------------------------------------------------------
    void timeProcessOut();
    void timeMotorOut();
    void timeDisplayMotorOut();

private:
    Ui::panelControlMotor *ui;
    QTimer *timeProcess;
    QTimer *timeMotor;
    QTimer *timeDisplayMotor;

    int timeRemainingMotor;
    int timeMotorSetOld;
};

#endif // PANELCONTROLMOTOR_H
