/********************************************************************************
** Form generated from reading UI file 'settingserial.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSERIAL_H
#define UI_SETTINGSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingSerial
{
public:
    QWidget *centralwidget;
    QGroupBox *gbParameter;
    QLabel *lbBaudRate;
    QLabel *lbDataBit;
    QLabel *lbParity;
    QLabel *lbStopBit;
    QLabel *lbFlowControl;
    QSplitter *splitter;
    QComboBox *cbBaudRate;
    QComboBox *cbDataBit;
    QComboBox *cbParity;
    QComboBox *cbStopBit;
    QComboBox *cbFlowControl;
    QComboBox *cbPortName;
    QLabel *label;
    QDialogButtonBox *btOk_Cancel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *settingSerial)
    {
        if (settingSerial->objectName().isEmpty())
            settingSerial->setObjectName(QStringLiteral("settingSerial"));
        settingSerial->setWindowModality(Qt::NonModal);
        settingSerial->setEnabled(true);
        settingSerial->resize(200, 311);
        settingSerial->setMinimumSize(QSize(200, 311));
        settingSerial->setMaximumSize(QSize(200, 311));
        QIcon icon;
        icon.addFile(QStringLiteral("icon/Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingSerial->setWindowIcon(icon);
        settingSerial->setIconSize(QSize(40, 40));
        settingSerial->setToolButtonStyle(Qt::ToolButtonTextOnly);
        settingSerial->setDocumentMode(false);
        settingSerial->setTabShape(QTabWidget::Triangular);
        settingSerial->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(settingSerial);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbParameter = new QGroupBox(centralwidget);
        gbParameter->setObjectName(QStringLiteral("gbParameter"));
        gbParameter->setGeometry(QRect(10, 10, 181, 221));
        lbBaudRate = new QLabel(gbParameter);
        lbBaudRate->setObjectName(QStringLiteral("lbBaudRate"));
        lbBaudRate->setGeometry(QRect(10, 70, 54, 13));
        lbDataBit = new QLabel(gbParameter);
        lbDataBit->setObjectName(QStringLiteral("lbDataBit"));
        lbDataBit->setGeometry(QRect(10, 100, 47, 13));
        lbParity = new QLabel(gbParameter);
        lbParity->setObjectName(QStringLiteral("lbParity"));
        lbParity->setGeometry(QRect(10, 130, 32, 13));
        lbStopBit = new QLabel(gbParameter);
        lbStopBit->setObjectName(QStringLiteral("lbStopBit"));
        lbStopBit->setGeometry(QRect(10, 160, 46, 13));
        lbFlowControl = new QLabel(gbParameter);
        lbFlowControl->setObjectName(QStringLiteral("lbFlowControl"));
        lbFlowControl->setGeometry(QRect(10, 190, 64, 13));
        splitter = new QSplitter(gbParameter);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(90, 60, 81, 151));
        splitter->setOrientation(Qt::Vertical);
        cbBaudRate = new QComboBox(splitter);
        cbBaudRate->setObjectName(QStringLiteral("cbBaudRate"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbBaudRate->sizePolicy().hasHeightForWidth());
        cbBaudRate->setSizePolicy(sizePolicy);
        splitter->addWidget(cbBaudRate);
        cbDataBit = new QComboBox(splitter);
        cbDataBit->setObjectName(QStringLiteral("cbDataBit"));
        sizePolicy.setHeightForWidth(cbDataBit->sizePolicy().hasHeightForWidth());
        cbDataBit->setSizePolicy(sizePolicy);
        splitter->addWidget(cbDataBit);
        cbParity = new QComboBox(splitter);
        cbParity->setObjectName(QStringLiteral("cbParity"));
        sizePolicy.setHeightForWidth(cbParity->sizePolicy().hasHeightForWidth());
        cbParity->setSizePolicy(sizePolicy);
        splitter->addWidget(cbParity);
        cbStopBit = new QComboBox(splitter);
        cbStopBit->setObjectName(QStringLiteral("cbStopBit"));
        sizePolicy.setHeightForWidth(cbStopBit->sizePolicy().hasHeightForWidth());
        cbStopBit->setSizePolicy(sizePolicy);
        splitter->addWidget(cbStopBit);
        cbFlowControl = new QComboBox(splitter);
        cbFlowControl->setObjectName(QStringLiteral("cbFlowControl"));
        sizePolicy.setHeightForWidth(cbFlowControl->sizePolicy().hasHeightForWidth());
        cbFlowControl->setSizePolicy(sizePolicy);
        splitter->addWidget(cbFlowControl);
        cbPortName = new QComboBox(gbParameter);
        cbPortName->setObjectName(QStringLiteral("cbPortName"));
        cbPortName->setGeometry(QRect(90, 20, 81, 31));
        sizePolicy.setHeightForWidth(cbPortName->sizePolicy().hasHeightForWidth());
        cbPortName->setSizePolicy(sizePolicy);
        label = new QLabel(gbParameter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 61, 20));
        btOk_Cancel = new QDialogButtonBox(centralwidget);
        btOk_Cancel->setObjectName(QStringLiteral("btOk_Cancel"));
        btOk_Cancel->setGeometry(QRect(30, 240, 131, 23));
        btOk_Cancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        settingSerial->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(settingSerial);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        settingSerial->setStatusBar(statusbar);

        retranslateUi(settingSerial);

        QMetaObject::connectSlotsByName(settingSerial);
    } // setupUi

    void retranslateUi(QMainWindow *settingSerial)
    {
        settingSerial->setWindowTitle(QApplication::translate("settingSerial", "Setting serial", 0));
#ifndef QT_NO_TOOLTIP
        settingSerial->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        gbParameter->setTitle(QApplication::translate("settingSerial", "Parameter", 0));
        lbBaudRate->setText(QApplication::translate("settingSerial", "Baud Rate:", 0));
        lbDataBit->setText(QApplication::translate("settingSerial", "Data Bits:", 0));
        lbParity->setText(QApplication::translate("settingSerial", "Parity:", 0));
        lbStopBit->setText(QApplication::translate("settingSerial", "Stop Bits:", 0));
        lbFlowControl->setText(QApplication::translate("settingSerial", "Flow Control:", 0));
        label->setText(QApplication::translate("settingSerial", "PortName:", 0));
    } // retranslateUi

};

namespace Ui {
    class settingSerial: public Ui_settingSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSERIAL_H
