#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindow2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_enterbutton_clicked();//进车按钮鼠标点击事件

    void on_outbutton_clicked();//出车按钮鼠标点击事件

    void on_checkbutton_clicked();//查询信息鼠标点击事件

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
