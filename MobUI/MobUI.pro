#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T12:00:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MobUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    circle.cpp \
    rectangle.cpp \
    mobuiscene.cpp \
    shape.cpp \
    mobiuitextitem.cpp

HEADERS  += mainwindow.h \
    circle.h \
    rectangle.h \
    mobuiscene.h \
    shape.h \
    mobiuitextitem.h

FORMS    += mainwindow.ui
