#ifndef GMOTORTESTERSC_H
#define GMOTORTESTERSC_H

#include <QMainWindow>
#include <panelcontrolmotor.h>
#include <choseaddmotor.h>
#include <settingserial.h>
#include <messagebox.h>
#include <QTimer>
#include "thirdparty/mavlink/v1.0/testMotor/mavlink.h"
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

    QwtPlotCurve *temperature_0;
    QwtPlotCurve *temperature_1;
    QwtPlotCurve *temperature_2;
    QwtPlotCurve *temperature_3;
    QwtPlotCurve *temperature_4;
    QwtPlotCurve *temperature_5;
    QwtPlotCurve *temperature_6;
    QwtPlotCurve *temperature_7;
    QwtPlotCurve *temperature_8;
    QwtPlotCurve *temperature_9;

    QPolygonF temperature_point_1;
    QPolygonF temperature_point_2;
    QPolygonF temperature_point_3;
    QPolygonF temperature_point_4;
    QPolygonF temperature_point_5;
    QPolygonF temperature_point_6;
    QPolygonF temperature_point_7;
    QPolygonF temperature_point_8;
    QPolygonF temperature_point_9;
    QPolygonF temperature_point_0;

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
