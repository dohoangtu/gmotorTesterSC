#ifndef PANELCONTROLMOTOR_H
#define PANELCONTROLMOTOR_H

#include <QWidget>
#include <QTimer>
#include <QSerialPort>
#include <QEvent>

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
        int id;
        int speed;
        int power;
        int dir;
        bool pause;
        int timeStart;
        int timeStop;
        int timeRemaining;
        int runTime;
        QString status;
    };
    panelParameter controlMotor;
    panelParameter getDataControlMotor();
    void stopTester();
    void statTester();
    bool flagSerialStop;

signals:
    void closePanelControlMotor();
    void showEvent(QShowEvent *);
    void closeEvent(QCloseEvent *);

private slots:
    void closeProgram();
    //bt press ------------------------------------------------------------------------------------
    void btPowerClicked(bool status);
    void btRunClicked(bool status);
    void btPauseClicked(bool status);
    void btDirClicked(bool status);
    void VSpeedChange(int speed);
    void VPowerChange(int Power);
    //timeOut -------------------------------------------------------------------------------------
    void timeProcessOut();
    void timeMotorOut();
    void timeDisplayMotorOut();
    void loadForm();
    void closeForm();

private:
    Ui::panelControlMotor *ui;
    QTimer *timeProcess;
    QTimer *timeMotor;
    QTimer *timeDisplayMotor;

    int timeRemainingMotor;
    int timeMotorSetOld;
    int dirOld;
    int cnt;
};

#endif // PANELCONTROLMOTOR_H
