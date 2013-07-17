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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_panelControlMotor
{
public:
    QGridLayout *gridLayout;
    QFrame *fMotor;
    QGroupBox *gbDisplay;
    QLabel *lbRemaingTime;
    QTimeEdit *timeSet;
    QLabel *lbTimeSet;
    QLCDNumber *remainingHour;
    QLCDNumber *remainingMinute;
    QLCDNumber *remainingSecond;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lbTemperature;
    QLCDNumber *lcdSpeed;
    QLabel *lbSpeed;
    QLCDNumber *lcdTemperature;
    QProgressBar *pbTimeProcess;
    QPushButton *btPower;
    QGroupBox *gbControl;
    QPushButton *btRun;
    QPushButton *btPause;
    QPushButton *btDir;
    QDial *Motor;
    QSlider *ValueSpeed;

    void setupUi(QWidget *panelControlMotor)
    {
        if (panelControlMotor->objectName().isEmpty())
            panelControlMotor->setObjectName(QStringLiteral("panelControlMotor"));
        panelControlMotor->resize(360, 600);
        panelControlMotor->setMinimumSize(QSize(360, 600));
        panelControlMotor->setMaximumSize(QSize(360, 600));
        gridLayout = new QGridLayout(panelControlMotor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        fMotor = new QFrame(panelControlMotor);
        fMotor->setObjectName(QStringLiteral("fMotor"));
        fMotor->setEnabled(true);
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
        gbDisplay = new QGroupBox(fMotor);
        gbDisplay->setObjectName(QStringLiteral("gbDisplay"));
        gbDisplay->setEnabled(true);
        gbDisplay->setGeometry(QRect(10, 10, 331, 161));
        gbDisplay->setFlat(false);
        lbRemaingTime = new QLabel(gbDisplay);
        lbRemaingTime->setObjectName(QStringLiteral("lbRemaingTime"));
        lbRemaingTime->setGeometry(QRect(150, 20, 129, 13));
        timeSet = new QTimeEdit(gbDisplay);
        timeSet->setObjectName(QStringLiteral("timeSet"));
        timeSet->setGeometry(QRect(10, 40, 121, 31));
        QFont font;
        font.setPointSize(12);
        timeSet->setFont(font);
        timeSet->setWrapping(false);
        timeSet->setFrame(true);
        timeSet->setAlignment(Qt::AlignCenter);
        timeSet->setReadOnly(false);
        timeSet->setCalendarPopup(true);
        lbTimeSet = new QLabel(gbDisplay);
        lbTimeSet->setObjectName(QStringLiteral("lbTimeSet"));
        lbTimeSet->setGeometry(QRect(10, 20, 91, 13));
        lbTimeSet->setLayoutDirection(Qt::LeftToRight);
        lbTimeSet->setScaledContents(false);
        lbTimeSet->setAlignment(Qt::AlignCenter);
        remainingHour = new QLCDNumber(gbDisplay);
        remainingHour->setObjectName(QStringLiteral("remainingHour"));
        remainingHour->setGeometry(QRect(150, 40, 41, 31));
        remainingHour->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        remainingHour->setFrameShape(QFrame::WinPanel);
        remainingHour->setLineWidth(1);
        remainingHour->setSmallDecimalPoint(true);
        remainingHour->setDigitCount(2);
        remainingHour->setSegmentStyle(QLCDNumber::Flat);
        remainingHour->setProperty("intValue", QVariant(0));
        remainingMinute = new QLCDNumber(gbDisplay);
        remainingMinute->setObjectName(QStringLiteral("remainingMinute"));
        remainingMinute->setGeometry(QRect(210, 40, 41, 31));
        remainingMinute->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        remainingMinute->setDigitCount(2);
        remainingMinute->setSegmentStyle(QLCDNumber::Flat);
        remainingSecond = new QLCDNumber(gbDisplay);
        remainingSecond->setObjectName(QStringLiteral("remainingSecond"));
        remainingSecond->setGeometry(QRect(270, 40, 41, 31));
        remainingSecond->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        remainingSecond->setDigitCount(2);
        remainingSecond->setSegmentStyle(QLCDNumber::Flat);
        label = new QLabel(gbDisplay);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 50, 7, 13));
        label_2 = new QLabel(gbDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 50, 8, 13));
        label_3 = new QLabel(gbDisplay);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 50, 6, 13));
        lbTemperature = new QLabel(gbDisplay);
        lbTemperature->setObjectName(QStringLiteral("lbTemperature"));
        lbTemperature->setGeometry(QRect(210, 90, 19, 23));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lbTemperature->setFont(font1);
        lcdSpeed = new QLCDNumber(gbDisplay);
        lcdSpeed->setObjectName(QStringLiteral("lcdSpeed"));
        lcdSpeed->setGeometry(QRect(40, 90, 91, 31));
        lcdSpeed->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        lcdSpeed->setFrameShape(QFrame::NoFrame);
        lcdSpeed->setFrameShadow(QFrame::Sunken);
        lcdSpeed->setLineWidth(2);
        lcdSpeed->setSmallDecimalPoint(false);
        lcdSpeed->setSegmentStyle(QLCDNumber::Flat);
        lbSpeed = new QLabel(gbDisplay);
        lbSpeed->setObjectName(QStringLiteral("lbSpeed"));
        lbSpeed->setGeometry(QRect(10, 90, 20, 23));
        lbSpeed->setFont(font1);
        lcdTemperature = new QLCDNumber(gbDisplay);
        lcdTemperature->setObjectName(QStringLiteral("lcdTemperature"));
        lcdTemperature->setGeometry(QRect(230, 90, 91, 31));
        lcdTemperature->setStyleSheet(QLatin1String("color: rgb(247, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        lcdTemperature->setFrameShape(QFrame::Box);
        lcdTemperature->setFrameShadow(QFrame::Sunken);
        lcdTemperature->setLineWidth(2);
        lcdTemperature->setSmallDecimalPoint(false);
        lcdTemperature->setSegmentStyle(QLCDNumber::Flat);
        pbTimeProcess = new QProgressBar(gbDisplay);
        pbTimeProcess->setObjectName(QStringLiteral("pbTimeProcess"));
        pbTimeProcess->setGeometry(QRect(10, 130, 311, 20));
        pbTimeProcess->setValue(0);
        btPower = new QPushButton(fMotor);
        btPower->setObjectName(QStringLiteral("btPower"));
        btPower->setGeometry(QRect(20, 490, 51, 51));
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
        icon.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Power-Button_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Power-Button_off.png"), QSize(), QIcon::Normal, QIcon::On);
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
        gbControl->setGeometry(QRect(10, 180, 331, 371));
        gbControl->setStyleSheet(QStringLiteral(""));
        gbControl->setFlat(true);
        btRun = new QPushButton(gbControl);
        btRun->setObjectName(QStringLiteral("btRun"));
        btRun->setGeometry(QRect(170, 310, 41, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Media-Play_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Stop_squar.png"), QSize(), QIcon::Normal, QIcon::On);
        btRun->setIcon(icon1);
        btRun->setIconSize(QSize(40, 40));
        btRun->setCheckable(true);
        btPause = new QPushButton(gbControl);
        btPause->setObjectName(QStringLiteral("btPause"));
        btPause->setGeometry(QRect(220, 310, 41, 41));
        btPause->setText(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Media-Pause_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Media-Pause_on.png"), QSize(), QIcon::Normal, QIcon::On);
        btPause->setIcon(icon2);
        btPause->setIconSize(QSize(40, 40));
        btPause->setCheckable(true);
        btDir = new QPushButton(gbControl);
        btDir->setObjectName(QStringLiteral("btDir"));
        btDir->setGeometry(QRect(270, 310, 41, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Reload_CW.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral("../../Gimbal_V1.0/icon/Reload_CCW.png"), QSize(), QIcon::Normal, QIcon::On);
        btDir->setIcon(icon3);
        btDir->setIconSize(QSize(40, 40));
        btDir->setCheckable(true);
        Motor = new QDial(gbControl);
        Motor->setObjectName(QStringLiteral("Motor"));
        Motor->setEnabled(true);
        Motor->setGeometry(QRect(0, 30, 321, 221));
        Motor->setMinimum(1);
        Motor->setInvertedAppearance(false);
        Motor->setInvertedControls(false);
        Motor->setWrapping(true);
        Motor->setNotchesVisible(true);
        ValueSpeed = new QSlider(gbControl);
        ValueSpeed->setObjectName(QStringLiteral("ValueSpeed"));
        ValueSpeed->setGeometry(QRect(10, 270, 311, 31));
        ValueSpeed->setMinimum(1);
        ValueSpeed->setMaximum(11);
        ValueSpeed->setPageStep(1);
        ValueSpeed->setValue(11);
        ValueSpeed->setOrientation(Qt::Horizontal);
        ValueSpeed->setInvertedAppearance(true);
        ValueSpeed->setTickPosition(QSlider::TicksBelow);
        ValueSpeed->setTickInterval(3);
        gbControl->raise();
        gbDisplay->raise();
        btPower->raise();

        gridLayout->addWidget(fMotor, 0, 0, 1, 1);


        retranslateUi(panelControlMotor);

        QMetaObject::connectSlotsByName(panelControlMotor);
    } // setupUi

    void retranslateUi(QWidget *panelControlMotor)
    {
        panelControlMotor->setWindowTitle(QApplication::translate("panelControlMotor", "Form", 0));
        gbDisplay->setTitle(QApplication::translate("panelControlMotor", "Hi\303\252\314\211n Thi\314\243", 0));
        lbRemaingTime->setText(QApplication::translate("panelControlMotor", "Th\306\241\314\200i Gian Ki\303\252\314\211m Tra Co\314\200n La\314\243i:", 0));
        timeSet->setDisplayFormat(QApplication::translate("panelControlMotor", "hh:mm:ss", 0));
        lbTimeSet->setText(QApplication::translate("panelControlMotor", "Th\306\241\314\200i Gian Ki\303\252\314\211m Tra:", 0));
        label->setText(QApplication::translate("panelControlMotor", "H", 0));
        label_2->setText(QApplication::translate("panelControlMotor", "M", 0));
        label_3->setText(QApplication::translate("panelControlMotor", "S", 0));
        lbTemperature->setText(QApplication::translate("panelControlMotor", "T:", 0));
        lbSpeed->setText(QApplication::translate("panelControlMotor", "V:", 0));
        gbControl->setTitle(QString());
        btRun->setText(QString());
        btDir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class panelControlMotor: public Ui_panelControlMotor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELCONTROLMOTOR_H
