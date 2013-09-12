#-------------------------------------------------
#
# Project created by QtCreator 2013-07-15T15:22:41
#
#-------------------------------------------------

QT       += core gui serialport

QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GmotorTesterSC
TEMPLATE = app

#for qwt using
CONFIG += qwt

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
    thirdparty/mavlink/v1.0/mavGmotorTesterSC/mavlink.h

FORMS    += gmotortestersc.ui \
    panelcontrolmotor.ui \
    choseaddmotor.ui \
    settingserial.ui \
    messagebox.ui

RESOURCES += \
    MotorTesting.qrc

