#-------------------------------------------------
#
# Project created by QtCreator 2018-01-08T09:56:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


#debug
#CONFIG += debug

TARGET = QCPlotter
TEMPLATE = lib

include(../../../gobs.pri)


DEFINES += QCPLOTTER_LIBRARY

LIBS      += -L$$GOBS_LIB -lGPublicSo -lAlgorithm

INCLUDEPATH += $$GOBS_SRC/Algorithm \
                              $$GOBS_SRC/GPublicSo

SOURCES += main.cpp\
        qcplotter.cpp \
    qcgraphbase.cpp \
    graphbase_2d.cpp \
    qcgraphpublic.cpp

HEADERS  += qcplotter.h \
    qcgraphbase.h \
    graphbase_2d.h \
    qcgraphpublic.h \
    qcplotter_global.h

FORMS    += qcplotter.ui \
    traceheaddlg.ui
