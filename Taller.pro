#-------------------------------------------------
#
# Project created by QtCreator 2014-03-30T21:29:24
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Taller
TEMPLATE = app


SOURCES += main.cpp \
    ui/mainwindow.cpp \
    ui/login/dialoglogin.cpp \
    ui/gastos/dialoggasto.cpp \
    core/gasto.cpp \
    core/taller.cpp \
    core/db/connectordb.cpp \
    core/exception/exception.cpp \
    core/exception/exceptionvalidator.cpp

HEADERS  += \
    ui/mainwindow.h \
    ui/login/dialoglogin.h \
    ui/gastos/dialoggasto.h \
    core/gasto.h \
    core/taller.h \
    core/db/connectordb.h \
    core/exception/exception.h \
    core/exception/exceptionvalidator.h

FORMS    += \
    ui/mainwindow.ui \
    ui/login/dialoglogin.ui \
    ui/gastos/dialoggasto.ui
