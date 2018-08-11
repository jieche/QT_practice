#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include"subwidget.h"
#include <QWidget>
#include<QPushButton>
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
private:
    QPushButton p1;
    QPushButton p3;
    QPushButton* p2;
    SubWidget  s;
    void mySlot();
    void mySlot1();
    void mySlot2();

};

#endif // MAINWIDGET_H
