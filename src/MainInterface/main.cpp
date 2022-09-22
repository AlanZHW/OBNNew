#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QDebug>
#include <QSplashScreen>
#include "logindlg.h"
#include "gpositionsystem.h"

#include "frft.h"
#include "matlab/engine.h"

using namespace Core;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //1 创建程序数据存放目录
    if(!Core::createDocDir()){
        QMessageBox::warning(NULL,"Error","Create Documents File Error.");
        exit(1);
    }

    QDir bin_dir(QCoreApplication::applicationDirPath());
    bin_dir.cdUp();
    QString m_iconPath = bin_dir.absolutePath();
    m_iconPath += "/icon/";
    //加载开机动画
    QString StartupName = m_iconPath + "startup.png";
    qDebug() << "20220307 ++++++ StartupName is:" << StartupName;

    QPixmap pixmap(StartupName);
    QSplashScreen splash(pixmap);
    splash.show();
    for(long i=0;i<50000;i++)
        for(long j=0;j<20000;j++);


    MainWindow w;
    w.show();
    splash.finish(&w);
    return a.exec();
}

