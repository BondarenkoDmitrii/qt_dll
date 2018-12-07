#-------------------------------------------------
#
# Project created by QtCreator 2018-12-07T22:37:49
#
#-------------------------------------------------

QT       -= gui

TARGET = Plugin
TEMPLATE = lib

DEFINES += PLUGIN_LIBRARY

SOURCES += plugin.cpp

HEADERS += plugin.h\
        plugin_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
DESTDIR = ../dll_Plugin
INCLUDEPATH += ../Plugin_interface/
CONFIG += c++11
