#-------------------------------------------------
#
# Project created by QtCreator 2017-12-04T13:51:47
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = QtFtp
TEMPLATE = lib

DESTDIR += ../../lib

SOURCES += qftp.cpp \
    qurlinfo.cpp

HEADERS += qftp.h\
    qurlinfo.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
