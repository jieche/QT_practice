#include "mainwindow.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QDebug>
#include<QToolBar>
#include<QPushButton>
#include<QLabel>
#include<QStatusBar>
#include<QTextEdit>
#include<QDockWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //菜单栏
    QMenuBar* mBar=menuBar();
    //添加菜单
    QMenu* pFile=mBar->addMenu("文件");
    //添加动作
    QAction* pNew=pFile->addAction("新建");
    connect(pNew,&QAction::triggered,
            [=]()
    {
        qDebug()<<"新建";
    });
    pFile->addSeparator();
    QAction* pOpen=pFile->addAction("打开");
    connect(pOpen,&QAction::triggered,
            [=]()
    {
        qDebug()<<"打开";
    });
    //工具栏
    QToolBar* toolBar=addToolBar("toolBar");
    //添加快捷键
    toolBar->addAction(pNew);
    QPushButton* btn=new QPushButton(this);
    toolBar->addWidget(btn);
    btn->setText("^-^");
    connect(btn,&QPushButton::clicked,
            [=]()
    {
        btn->setText("1573");
    });
//    toolBar->addAction(btn);

    //状态栏
    QStatusBar* sBar=statusBar();
    QLabel* label=new QLabel(this);
    label->setText("Normal text file");
    sBar->addWidget(label);
    //核心控件
    QTextEdit* textEdit=new QTextEdit(this);
    setCentralWidget(textEdit);
    //浮动窗口
    QDockWidget*  dock=new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,dock);

    QTextEdit* text=new QTextEdit(this);
    dock->setWidget(text);

}

MainWindow::~MainWindow()
{

}
