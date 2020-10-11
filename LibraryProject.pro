#-------------------------------------------------
#
# Project created by QtCreator 2020-10-07T20:11:06
#
#-------------------------------------------------

QT += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LibraryProject
TEMPLATE = app


SOURCES += Source/main.cpp\
        Source/mainwindow.cpp

HEADERS  += Header/mainwindow.h \
    ui_mainwindow.h

FORMS    += mainwindow.ui
