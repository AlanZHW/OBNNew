#-------------------------------------------------
#
# Project created by QtCreator 2017-11-07T15:11:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = DataMgrControl
TEMPLATE = app

include (../../../gobs.pri)


LIBS += -L$$GOBS_LIB  -lCore -lCommModule -lGPublicSo -lQCPlotter -lAlgorithm -lGobsDtMagerDiffTime
DEFINES += ALGORITHM_LIBRARY ADD_   HAVE_LAPACK_CONFIG_H  LAPACK_COMPLEX_STRUCTURE

INCLUDEPATH += ../QCPlotter \
               ../GobsDtMagerDiffTime \
               $$GOBS_SRC/Algorithm

INCLUDEPATH += $$MATLAB_PATH\include
INCLUDEPATH += $$MATLAB_PATH\include\win64
INCLUDEPATH += $$MATLAB_PATH\lib\win64\microsoft
DEPENDPATH  += $$MATLAB_PATH\lib\win64\microsoft
LIBS += -L$$MATLAB_PATH\lib\win64\microsoft -lmclmcrrt -lmclmcr -lmclbase -lmclcommain

#debug
#CONFIG += debug

SOURCES += main.cpp\
        datamgrcontrol.cpp \
        dmgrunit.cpp \
    opensegydlg.cpp \
    filedetaildlg.cpp \
    exportsegydlg.cpp \
    plotparamdlg.cpp \
    shotlinedlg.cpp \
    gatherrecord.cpp

HEADERS  += datamgrcontrol.h \
    dmgrunit.h \
    opensegydlg.h \
    filedetaildlg.h \
    exportsegydlg.h \
    plotparamdlg.h \
    shotlinedlg.h \
    gatherrecord.h

FORMS    += datamgrcontrol.ui \
    exportsegydlg.ui \
    opensegydlg.ui   \
    plotparamdlg.ui

win32-msvc* {
    QMAKE_CXXFLAGS *=  /wd"4100"
    contains (QMAKE_CXXFLAGS_WARN_ON, -w34100) : QMAKE_CXXFLAGS_WARN_ON -= -w34100
}
