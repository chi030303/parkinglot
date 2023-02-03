#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui2(new Ui::MainWindow2)
{
    ui2->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui2;
}

void creattabel(){

}
