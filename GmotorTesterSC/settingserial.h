#ifndef SETTINGSERIAL_H
#define SETTINGSERIAL_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QSerialPort>

namespace Ui {
class settingSerial;
}

class settingSerial : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit settingSerial(QWidget *parent = 0);
    ~settingSerial();

    struct Configuration {
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QString stringDataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBits;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
        bool localEchoEnabled;
    };
    
    Configuration getConfi();
signals:
    void buttonOK_SettingClicked();
    void closeSettingForm();
    void showEvent(QShowEvent *);
    void hideEvent(QHideEvent *);
    void closeEvent(QCloseEvent *);

private slots:
    void addCurrentConfig(QAbstractButton *button);
    void loadForm();
    void closeForm();

private:
    Ui::settingSerial *ui;
    void addComboboxParameter();
    Configuration currentConfig;
};

#endif // SETTINGSERIAL_H
