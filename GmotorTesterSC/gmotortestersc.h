#ifndef GMOTORTESTERSC_H
#define GMOTORTESTERSC_H

#include <QMainWindow>
#include <panelcontrolmotor.h>
#include <choseaddmotor.h>
#include <settingserial.h>
#include <messagebox.h>
#include <QTimer>
#include "thirdparty/mavlink/v1.0/mavGmotorTesterSC/mavlink.h"
#include <QEvent>
#include <QTreeView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QPointF>

#include <qwt_plot.h>
#include <qwt_series_data.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_symbol.h>
#include <qwt_compass.h>
#include <qwt_dial.h>
#include <QtXml>

namespace Ui {
class GmotorTesterSC;
}

class GmotorTesterSC : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GmotorTesterSC(QWidget *parent = 0);
    ~GmotorTesterSC();

signals:
    void messageReceived(QByteArray message);
    void heartBeatPulse(bool pulse);
    void closeEvent(QCloseEvent *);

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
    void actionOpen();
    //serial port
    void writeSerial();
    void writeMavlink();
    void readSerial();
    void readMavlink(QByteArray buff);
    //process data receive
    void heartbeatReceive(bool satatus);
    void closeProgram();
    //table
    void pressEnterCell(int row, int column);
    void DoubleClickCell(int row, int column);
    //
    void writeMavlinkPanel(int power, char id, char dir, int speed);
    void writePanel0(int power, char dir, int speed);
    void writePanel1(int power, char dir, int speed);
    void writePanel2(int power, char dir, int speed);
    void writePanel3(int power, char dir, int speed);
    void writePanel4(int power, char dir, int speed);
    void writePanel5(int power, char dir, int speed);
    void writePanel6(int power, char dir, int speed);
    void writePanel7(int power, char dir, int speed);
    void writePanel8(int power, char dir, int speed);
    void writePanel9(int power, char dir, int speed);

private:
    Ui::GmotorTesterSC *ui;
    panelControlMotor panelMotor[10];
    choseAddMotor choseMotor;
    settingSerial *settingSP;
    QSerialPort *serial;
    QTimer *timeTransmit;
    QStandardItemModel *standarMode;
    QStandardItem *Motor_1;
    QStandardItem *Motor_2;
    QStandardItem *Motor_3;
    QList<int> arrayDataMotor;

    QwtPlotCurve *temperature_axis;
    QPolygonF temperature_point_axis;

    int cntSerialConnect;

    void stopAllPanel();
    void startAllPanel();
    void clearRowTableMotor(int row);
    void clearPanelMotor();
    void chartUpdate();
    void chartSetting();

    void updateXMLfile(QDomDocument document, QString xmlfile);
    void importXMLfile(QString importfile);
    int ListElements(QDomElement root, QString tagname, QString attribute);
};

#endif // GMOTORTESTERSC_H
