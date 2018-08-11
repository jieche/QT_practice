#include<QPushButton>
#include<QWidget>
#include<QApplication>
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QWidget w;
    w.show();
    w.setWindowTitle(QString("heheh"));
    QPushButton b;
    b.setParent(&w);
    b.setText("O(∩_∩)O");
    b.show();


    app.exec();
    return 0;
}
