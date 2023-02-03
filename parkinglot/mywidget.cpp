#include "mywidget.h"
#include "ui_mywidget.h"
//#include "mainwindow.cpp"
#include <QDateTime>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    /*QTime current_time = QTime::currentTime();
    QString outtime = current_time.toString("hh:mm:ss");
    QDateTime timeen,timeout;
    timeen = QDateTime::fromString(t->cars[0].entime,"hh:mm:ss");
    timeout = QDateTime::fromString(outtime,"hh:mm:ss");
    QString q1 = timeen.toString("hh:mm:ss"),q2 = timeout.toString("hh:mm:ss");
    int second = timeen.secsTo(timeout);
    QString otime = QString::number(second);
    QString information = QString::number(t->cars[0].pos);
    information.append(t->cars[0].num);
    information.append(t->cars[0].entime);
    information.append(otime + "\n");
    ui->label1->setText(information);*/
    delete ui;
}
