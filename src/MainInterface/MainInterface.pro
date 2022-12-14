     #-------------------------------------------------
#
# Project created by QtCreator 2017-11-06T09:45:39
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = gobs
TEMPLATE = app

include(../../gobs.pri)


INCLUDEPATH += $$GOBS_DIR/include

INCLUDEPATH += $$GOBS_SRC/GPositionSystem \
                $$GOBS_THIRDPARTY/include  \
                $$GOBS_THIRDPARTY/include/matlab  \
                $$GOBS_SRC/GPublicSo

LIBS += -L$$GOBS_LIB -lCore -lSqlFunctions -lGPublicSo -lGPositionSystem
DEFINES += ALGORITHM_LIBRARY ADD_   HAVE_LAPACK_CONFIG_H  LAPACK_COMPLEX_STRUCTURE
#LIBS += -L$$GOBS_THIRDPARTY_LIB -llibmx -llibmat -lmclmcr -lmclmcrrt
#LIBS += -lfrft

SOURCES += main.cpp\
        mainwindow.cpp \
    mainwinpublic.cpp \
    mainwinunit.cpp \
    exportspsfilesdlg.cpp \
    logindlg.cpp \

HEADERS  += mainwindow.h \
    mainwinpublic.h \
    mainwinunit.h \
    exportspsfilesdlg.h \
    logindlg.h \

FORMS    += mainwindow.ui \
    exportspsfilesdlg.ui \
    logindlg.ui


win32{
target.files  = $$GOBS_THIRDPARTY_LIB/*.dll
target.path = $$GOBS_BIN

depend.files  = $$GOBS_LIB/*.dll
depend.path = $$GOBS_BIN

INSTALLS += depend target
}

