#-------------------------------------------------
#
# Project created by QtCreator 2013-07-15T15:22:41
#
#-------------------------------------------------

QT       += core gui

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

greaterThan(QT_MAJOR_VERSION, 4) {
    QT       += widgets serialport
} else {
    include($$QTSERIALPORT_PROJECT_ROOT/src/serialport/qt4support/serialport.prf)
}

TARGET = GmotorTesterSC
TEMPLATE = app


SOURCES += main.cpp\
        gmotortestersc.cpp \
    panelcontrolmotor.cpp \
    choseaddmotor.cpp \
    settingserial.cpp \
    messagebox.cpp

HEADERS  += gmotortestersc.h \
    panelcontrolmotor.h \
    choseaddmotor.h \
    settingserial.h \
    messagebox.h    \
    thirdparty/mavlink/v1.0/testMotor/mavlink.h

FORMS    += gmotortestersc.ui \
    panelcontrolmotor.ui \
    choseaddmotor.ui \
    settingserial.ui \
    messagebox.ui
