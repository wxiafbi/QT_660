#include "mainwindow.h"

#include <QApplication>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("����\r\n");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
