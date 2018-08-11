#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("子窗口");
    b.setParent(this);
    b.setText("切换到主窗口");
    connect(&b,&QPushButton::clicked,this,mySlot);
}
void SubWidget::mySlot()
{
    emit signal();
}
