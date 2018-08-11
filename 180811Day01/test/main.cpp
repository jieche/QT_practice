#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //有且只有一个应用程序的对象
    QApplication a(argc, argv);
    //继承自QWidget QWidget 是一个窗口基类
    MainWindow w;
    w.show();

    //窗口不会关闭 就是让程序一直执行，等待用户操作
    //等待事件发生
    return a.exec();
}
