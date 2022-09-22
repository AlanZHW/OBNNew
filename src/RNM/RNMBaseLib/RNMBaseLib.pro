#-------------------------------------------------
#
# Project created by QtCreator 2017-11-23T14:18:41
#
#-------------------------------------------------

QT       += core gui network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = RNMBaseLib
TEMPLATE = lib

include (../../../gobs.pri)

DEFINES += RNMBASELIB_LIBRARY

DEFINES += ZHW_DEBUG

INCLUDEPATH += $$GOBS_DIR/include
INCLUDEPATH += $$GOBS_DIR/src/QtFtp

message($$GOBS_DIR)

#CONFIG += c++11
#DEFINES += QT_DEPRECATED_WARNINGS GPOSTIONSYTEM_LIBRARY

SOURCES += searchthread.cpp \
            rnitems.cpp \
            nodequery.cpp \
            rnmpublic.cpp \
            rnftpmanager.cpp \
            statusreport.cpp \
            ftpmanager.cpp \
            nodeftp.cpp

HEADERS += searchthread.h \
            rnitems.h \
            nodequery.h \
            rnmpublic.h \
            rnftpmanager.h \
            statusreport.h \
            rnmbaselib_global.h \
            ftpmanager.h \
            nodeftp.h

FORMS += \
        rnftpmanager.ui \
        statusreport.ui

LIBS += -L$$GOBS_LIB -lCore -lGPublicSo -lQtFtp
