#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    p1.setParent(this);
    p1.setText("^_^");
    p1.move(100,100);

    p2=new QPushButton(this);
    p2->setText("^____^");

    p3.setParent(this);
    p3.setText("切换到子窗口");
    p3.move(50,50);


    connect(&p1,&QPushButton::pressed,this,&MainWidget::close);

    /*
        自定义槽  普通函数的用法
        QT5：任意成员函数  普通全局函数，静态函数
        槽函数需要和信号一致（参数  返回值）
        由于信号没有返回值  所以槽函数一定没有返回值
    */
    connect(p2,&QPushButton::released,this,&MainWidget::mySlot) ;
    connect(p2,&QPushButton::released,&p1,&QPushButton::hide) ;
    connect(&p3,&QPushButton::released,this,&MainWidget::mySlot1) ;
    connect(&s,&SubWidget::signal,this,&MainWidget::mySlot2);
}
void MainWidget::mySlot()
{
    p2->setText("1753");
}

void MainWidget::mySlot1()
{
    this->hide();
    s.show();
    p2->setText("1753");
}

void MainWidget::mySlot2()
{
    this->show();
    s.hide();
}


MainWidget::~MainWidget()
{

}
