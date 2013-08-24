/********************************************************************************
** Form generated from reading UI file 'panelcontrolmotor.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELCONTROLMOTOR_H
#define UI_PANELCONTROLMOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_dial.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_panelControlMotor
{
public:
    QGridLayout *gridLayout_2;
    QFrame *fMotor;
    QPushButton *btPower;
    QGroupBox *gbControl;
    QDial *Motor;
    QSlider *ValueSpeed;
    QSlider *valuePower;
    QLabel *lbPower;
    QLabel *lbSpeed;
    QProgressBar *pbTimeProcess;
    QPushButton *btRun;
    QPushButton *btPause;
    QPushButton *btDir;
    QFrame *frame_2;
    QGroupBox *gbDisplay;
    QVBoxLayout *verticalLayout;
    QLabel *lbTimeSet;
    QTimeEdit *timeSet;
    QLabel *lbRemaingTime;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *remainingHour;
    QLabel *label;
    QLCDNumber *remainingMinute;
    QLabel *label_2;
    QLCDNumber *remainingSecond;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbVSpeed;
    QLCDNumber *lcdSpeed;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbTemperature;
    QLCDNumber *lcdTemperature;
    QwtDial *displaySpeed;
    QFrame *frame;
    QGridLayout *gridLayout;
    QwtPlot *chartTemp;

    void setupUi(QWidget *panelControlMotor)
    {
        if (panelControlMotor->objectName().isEmpty())
            panelControlMotor->setObjectName(QStringLiteral("panelControlMotor"));
        panelControlMotor->resize(1228, 349);
        panelControlMotor->setMinimumSize(QSize(0, 0));
        panelControlMotor->setMaximumSize(QSize(5000, 537));
        gridLayout_2 = new QGridLayout(panelControlMotor);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        fMotor = new QFrame(panelControlMotor);
        fMotor->setObjectName(QStringLiteral("fMotor"));
        fMotor->setEnabled(true);
        fMotor->setMinimumSize(QSize(315, 330));
        fMotor->setMaximumSize(QSize(315, 335));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        fMotor->setPalette(palette);
        fMotor->setLayoutDirection(Qt::LeftToRight);
        fMotor->setInputMethodHints(Qt::ImhNone);
        fMotor->setFrameShape(QFrame::NoFrame);
        fMotor->setFrameShadow(QFrame::Raised);
        btPower = new QPushButton(fMotor);
        btPower->setObjectName(QStringLiteral("btPower"));
        btPower->setGeometry(QRect(30, 270, 51, 51));
        btPower->setAcceptDrops(false);
#ifndef QT_NO_TOOLTIP
        btPower->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        btPower->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        btPower->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        btPower->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        btPower->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btPower->setText(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/Power-Button_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icon/icon/Power-Button_off.png"), QSize(), QIcon::Normal, QIcon::On);
        btPower->setIcon(icon);
        btPower->setIconSize(QSize(50, 50));
        btPower->setShortcut(QStringLiteral(""));
        btPower->setCheckable(true);
        btPower->setChecked(false);
        btPower->setAutoDefault(true);
        btPower->setDefault(true);
        btPower->setFlat(true);
        gbControl = new QGroupBox(fMotor);
        gbControl->setObjectName(QStringLiteral("gbControl"));
        gbControl->setEnabled(true);
        gbControl->setGeometry(QRect(0, 10, 321, 311));
        gbControl->setMinimumSize(QSize(0, 0));
        gbControl->setMaximumSize(QSize(1000, 1000));
        gbControl->setStyleSheet(QStringLiteral(""));
        gbControl->setFlat(true);
        Motor = new QDial(gbControl);
        Motor->setObjectName(QStringLiteral("Motor"));
        Motor->setEnabled(true);
        Motor->setGeometry(QRect(30, 60, 251, 201));
        Motor->setMinimum(1);
        Motor->setInvertedAppearance(false);
        Motor->setInvertedControls(false);
        Motor->setWrapping(true);
        Motor->setNotchesVisible(true);
        ValueSpeed = new QSlider(gbControl);
        ValueSpeed->setObjectName(QStringLiteral("ValueSpeed"));
        ValueSpeed->setGeometry(QRect(270, 80, 31, 171));
        ValueSpeed->setMinimum(1);
        ValueSpeed->setMaximum(11);
        ValueSpeed->setPageStep(1);
        ValueSpeed->setValue(11);
        ValueSpeed->setOrientation(Qt::Vertical);
        ValueSpeed->setInvertedAppearance(true);
        ValueSpeed->setTickPosition(QSlider::TicksBelow);
        ValueSpeed->setTickInterval(3);
        valuePower = new QSlider(gbControl);
        valuePower->setObjectName(QStringLiteral("valuePower"));
        valuePower->setGeometry(QRect(10, 80, 31, 171));
        valuePower->setPageStep(5);
        valuePower->setValue(99);
        valuePower->setOrientation(Qt::Vertical);
        valuePower->setTickPosition(QSlider::TicksAbove);
        lbPower = new QLabel(gbControl);
        lbPower->setObjectName(QStringLiteral("lbPower"));
        lbPower->setGeometry(QRect(10, 60, 71, 16));
        lbSpeed = new QLabel(gbControl);
        lbSpeed->setObjectName(QStringLiteral("lbSpeed"));
        lbSpeed->setGeometry(QRect(250, 60, 71, 20));
        pbTimeProcess = new QProgressBar(gbControl);
        pbTimeProcess->setObjectName(QStringLiteral("pbTimeProcess"));
        pbTimeProcess->setGeometry(QRect(10, 10, 311, 20));
        pbTimeProcess->setValue(0);
        btRun = new QPushButton(gbControl);
        btRun->setObjectName(QStringLiteral("btRun"));
        btRun->setGeometry(QRect(150, 270, 41, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/Media-Play_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/icon/icon/Stop_squar.png"), QSize(), QIcon::Normal, QIcon::On);
        btRun->setIcon(icon1);
        btRun->setIconSize(QSize(40, 40));
        btRun->setCheckable(true);
        btPause = new QPushButton(gbControl);
        btPause->setObjectName(QStringLiteral("btPause"));
        btPause->setGeometry(QRect(200, 270, 41, 41));
        btPause->setText(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon/Media-Pause_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/icon/icon/Media-Pause_on.png"), QSize(), QIcon::Normal, QIcon::On);
        btPause->setIcon(icon2);
        btPause->setIconSize(QSize(40, 40));
        btPause->setCheckable(true);
        btDir = new QPushButton(gbControl);
        btDir->setObjectName(QStringLiteral("btDir"));
        btDir->setGeometry(QRect(250, 270, 41, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon/Reload_CW.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icon/icon/Reload_CCW.png"), QSize(), QIcon::Normal, QIcon::On);
        btDir->setIcon(icon3);
        btDir->setIconSize(QSize(40, 40));
        btDir->setCheckable(true);
        Motor->raise();
        ValueSpeed->raise();
        valuePower->raise();
        lbPower->raise();
        lbSpeed->raise();
        pbTimeProcess->raise();
        btRun->raise();
        btPause->raise();
        btDir->raise();
        fMotor->raise();
        gbControl->raise();
        btPower->raise();

        gridLayout_2->addWidget(fMotor, 0, 0, 1, 1);

        frame_2 = new QFrame(panelControlMotor);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(190, 330));
        frame_2->setMaximumSize(QSize(190, 330));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gbDisplay = new QGroupBox(frame_2);
        gbDisplay->setObjectName(QStringLiteral("gbDisplay"));
        gbDisplay->setEnabled(true);
        gbDisplay->setGeometry(QRect(10, 10, 170, 189));
        gbDisplay->setFlat(false);
        verticalLayout = new QVBoxLayout(gbDisplay);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbTimeSet = new QLabel(gbDisplay);
        lbTimeSet->setObjectName(QStringLiteral("lbTimeSet"));
        lbTimeSet->setLayoutDirection(Qt::LeftToRight);
        lbTimeSet->setScaledContents(false);
        lbTimeSet->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbTimeSet);

        timeSet = new QTimeEdit(gbDisplay);
        timeSet->setObjectName(QStringLiteral("timeSet"));
        QFont font;
        font.setPointSize(12);
        timeSet->setFont(font);
        timeSet->setWrapping(false);
        timeSet->setFrame(true);
        timeSet->setAlignment(Qt::AlignCenter);
        timeSet->setReadOnly(false);
        timeSet->setCalendarPopup(true);

        verticalLayout->addWidget(timeSet);

        lbRemaingTime = new QLabel(gbDisplay);
        lbRemaingTime->setObjectName(QStringLiteral("lbRemaingTime"));

        verticalLayout->addWidget(lbRemaingTime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        remainingHour = new QLCDNumber(gbDisplay);
        remainingHour->setObjectName(QStringLiteral("remainingHour"));
        remainingHour->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        remainingHour->setFrameShape(QFrame::WinPanel);
        remainingHour->setLineWidth(1);
        remainingHour->setSmallDecimalPoint(false);
        remainingHour->setDigitCount(2);
        remainingHour->setSegmentStyle(QLCDNumber::Flat);
        remainingHour->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(remainingHour);

        label = new QLabel(gbDisplay);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        remainingMinute = new QLCDNumber(gbDisplay);
        remainingMinute->setObjectName(QStringLiteral("remainingMinute"));
        remainingMinute->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        remainingMinute->setDigitCount(2);
        remainingMinute->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(remainingMinute);

        label_2 = new QLabel(gbDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        remainingSecond = new QLCDNumber(gbDisplay);
        remainingSecond->setObjectName(QStringLiteral("remainingSecond"));
        remainingSecond->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        remainingSecond->setDigitCount(2);
        remainingSecond->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(remainingSecond);

        label_3 = new QLabel(gbDisplay);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbVSpeed = new QLabel(gbDisplay);
        lbVSpeed->setObjectName(QStringLiteral("lbVSpeed"));
        lbVSpeed->setMinimumSize(QSize(20, 23));
        lbVSpeed->setMaximumSize(QSize(20, 23));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lbVSpeed->setFont(font1);

        horizontalLayout_2->addWidget(lbVSpeed);

        lcdSpeed = new QLCDNumber(gbDisplay);
        lcdSpeed->setObjectName(QStringLiteral("lcdSpeed"));
        lcdSpeed->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        lcdSpeed->setFrameShape(QFrame::NoFrame);
        lcdSpeed->setFrameShadow(QFrame::Sunken);
        lcdSpeed->setLineWidth(2);
        lcdSpeed->setSmallDecimalPoint(false);
        lcdSpeed->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdSpeed);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbTemperature = new QLabel(gbDisplay);
        lbTemperature->setObjectName(QStringLiteral("lbTemperature"));
        lbTemperature->setMaximumSize(QSize(20, 23));
        lbTemperature->setFont(font1);

        horizontalLayout_3->addWidget(lbTemperature);

        lcdTemperature = new QLCDNumber(gbDisplay);
        lcdTemperature->setObjectName(QStringLiteral("lcdTemperature"));
        lcdTemperature->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        lcdTemperature->setFrameShape(QFrame::Box);
        lcdTemperature->setFrameShadow(QFrame::Sunken);
        lcdTemperature->setLineWidth(2);
        lcdTemperature->setSmallDecimalPoint(false);
        lcdTemperature->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(lcdTemperature);


        verticalLayout->addLayout(horizontalLayout_3);

        lcdTemperature->raise();
        lbTemperature->raise();
        lcdSpeed->raise();
        lbVSpeed->raise();
        label_3->raise();
        remainingSecond->raise();
        label->raise();
        remainingMinute->raise();
        label_2->raise();
        remainingHour->raise();
        lbRemaingTime->raise();
        timeSet->raise();
        lbTimeSet->raise();
        lcdTemperature->raise();
        lcdTemperature->raise();
        lbTemperature->raise();
        displaySpeed = new QwtDial(frame_2);
        displaySpeed->setObjectName(QStringLiteral("displaySpeed"));
        displaySpeed->setGeometry(QRect(10, 205, 170, 115));
        displaySpeed->setLineWidth(4);

        gridLayout_2->addWidget(frame_2, 0, 1, 1, 1);

        frame = new QFrame(panelControlMotor);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 330));
        frame->setMaximumSize(QSize(16777215, 330));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        chartTemp = new QwtPlot(frame);
        chartTemp->setObjectName(QStringLiteral("chartTemp"));
        chartTemp->setAutoFillBackground(false);
        chartTemp->setStyleSheet(QStringLiteral("font: 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(chartTemp, 0, 0, 1, 2);


        gridLayout_2->addWidget(frame, 0, 2, 1, 1);

        fMotor->raise();
        frame->raise();
        frame_2->raise();
        chartTemp->raise();

        retranslateUi(panelControlMotor);

        QMetaObject::connectSlotsByName(panelControlMotor);
    } // setupUi

    void retranslateUi(QWidget *panelControlMotor)
    {
        panelControlMotor->setWindowTitle(QApplication::translate("panelControlMotor", "Form", 0));
        gbControl->setTitle(QString());
        lbPower->setText(QApplication::translate("panelControlMotor", "TextLabel", 0));
        lbSpeed->setText(QApplication::translate("panelControlMotor", "TextLabel", 0));
        btRun->setText(QString());
        btDir->setText(QString());
        gbDisplay->setTitle(QApplication::translate("panelControlMotor", "Hi\303\252\314\211n Thi\314\243", 0));
        lbTimeSet->setText(QApplication::translate("panelControlMotor", "Th\306\241\314\200i Gian Ki\303\252\314\211m Tra:", 0));
        timeSet->setDisplayFormat(QApplication::translate("panelControlMotor", "hh:mm:ss", 0));
        lbRemaingTime->setText(QApplication::translate("panelControlMotor", "Th\306\241\314\200i Gian Ki\303\252\314\211m Tra Co\314\200n La\314\243i:", 0));
        label->setText(QApplication::translate("panelControlMotor", "H", 0));
        label_2->setText(QApplication::translate("panelControlMotor", "M", 0));
        label_3->setText(QApplication::translate("panelControlMotor", "S", 0));
        lbVSpeed->setText(QApplication::translate("panelControlMotor", "V:", 0));
        lbTemperature->setText(QApplication::translate("panelControlMotor", "T:", 0));
    } // retranslateUi

};

namespace Ui {
    class panelControlMotor: public Ui_panelControlMotor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELCONTROLMOTOR_H
