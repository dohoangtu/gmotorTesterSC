#ifndef PANELCONTROLMOTOR_H
#define PANELCONTROLMOTOR_H

#include <QWidget>
#include <QTimer>
#include <QSerialPort>
#include <QEvent>

#include <qwt_plot.h>
#include <qwt_series_data.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_symbol.h>
#include <qwt_compass.h>
#include <qwt_dial.h>


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
        QString timeStart;
        QString timeStop;
        QString timeRemaining;
        QString runTime;
        QString status;
    };

    panelParameter controlMotor;
    panelParameter getDataControlMotor();
    void stopTester();
    void statTester();
    bool flagSerialStop;

signals:
    void writePannel(int power, char dir, int speed);
    void closePanelControlMotor();
    void showEvent(QShowEvent *);
    void closeEvent(QCloseEvent *);

private slots:
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
    //chart
    void chartSetting();
    void chartUpdate(int min, int temp);

private:
    Ui::panelControlMotor *ui;
    QTimer *timeProcess;
    QTimer *timeMotor;
    QTimer *timeDisplayMotor;
    QwtPlotCurve *temperature;
    QPolygonF temperature_point;
    bool flagTest;
    int timeRemainingMotor;
    int timeMotorSetOld;
    char dirOld;
    char cnt;
};

#endif // PANELCONTROLMOTOR_H
