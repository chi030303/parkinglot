#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "queue.h"
#include "table.h"
#include "queuefunction.cpp"
#include "tablefunction.cpp"
#include <QTime>

table t = createTable();
queue q = createQueue();
QString message,waits[Max];
int position[COL*ROW] = {0}, queueposition[Max] = {0},p;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_enterbutton_clicked()
{
    QString num = ui->inputnum->text(),etime;
    QTime current_time = QTime::currentTime();
    etime = current_time.toString("hh:mm:ss");//获取当前时间

    //如果输入为空且队列为空
    if(num == "" && q->size == 0){
        message.append("请输入车牌号！\n");
    }
    //第一次输入车牌号，进停车场
    else if(t->length == 0){
        carEnter(t,num,etime,createPos(position));
        message.append(etime + ": " + num + "进入停车场\n");
    }
    //当停车场为满时
    else if(t->length == 10){
         int index = search(t,num);//输入车牌号，查找停车场中是否有这辆车
         if(index == -1){
             if(IsFull(q))//若队列为满，不进行入队并提示
                 message.append("等待队列已满！\n");
             else {
                 if(q->size == 0){//第一次往队列中进车
                     message.append("停车场已满！\n");
                     enter(q,num);
                     message.append(etime + ": " + num + "进入停车场等待队列\n");
                 }
                 else{
                     int index = search(q,num);//查找队列中是否有这辆车
                     if(index == -1){//若没有，则入队列
                         enter(q,num);
                         message.append(etime + ": " + num + "进入停车场等待队列\n");
                     }
                     else{//若有，则重新输入
                         message.append("该车辆已存在！请重新输入。\n");
                     }
                 }
             }
         }
         else
             message.append("该车辆已存在！请重新输入。\n");
    }
    else if(t->length >= 0 && q->size > 0){
        //停车场有空位且队列不为空
        //车牌不为空时，队列首位车入停车场，输入的车入队列
        if(t->length < 10){
            if(num == ""){
                message.append("请输入车牌号！\n");
            }
            else{
                int index = search(t,num);//输入车牌号，查找停车场中是否有该车
                if(index == -1){
                    if(IsFull(q))
                        message.append("等待队列已满！\n");
                    else {
                        if(q->size == 0){
                            message.append("停车场已满！\n");
                            enter(q,num);
                            message.append(etime + ": " + num + "进入停车场等待队列\n");
                        }
                        else{
                            int index = search(q,num);
                            if(index == -1){
                                enter(q,num);
                                message.append(etime + ": " + num + "进入停车场等待队列\n");
                            }
                            else{
                                message.append("该车辆已存在！请重新输入。\n");
                            }
                        }
                    }
                }
            }
        }

        int index = search(t,num);
        if(index >= 0){
            message.append("该车辆已存在！请重新输入。\n");
        }
        else{
            QString tempnum = q->wait[q->front].num;
            //出车后，复原队列车位图标
            carEnter(t,tempnum,etime,createPos(position));
                switch (q->size) {
                            case 1:
                                ui->queue1->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                                ui->queue1->setText("1");
                                break;
                            case 2:
                                ui->queue2->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                                ui->queue2->setText("2");
                                break;
                            case 3:
                                ui->queue3->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                                ui->queue3->setText("3");
                                break;
                            case 4:
                                ui->queue4->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                                ui->queue4->setText("4");
                                break;
                            case 5:
                                ui->queue5->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                                ui->queue5->setText("5");
                                break;
                }
                DeQueue(q);//队首入停车场，出队列
            message.append(etime + ": " + tempnum + "进入停车场\n");
        }
    }
    //若停车场不满，获取输入车牌号并进行判断，若无该车，则入停车场
    else if(t->length > 0){
        int index = search(t,num);
        if(index >= 0){
            message.append("该车辆已存在！请重新输入。\n");
        }
        else{
            carEnter(t,num,etime,createPos(position));
            message.append(etime + ": " + num + "进入停车场\n");
        }
    }
    //设置车的图标，表示车位已占
    for(int i = 0;i < t->length ;i++){
        switch (t->cars[i].pos) {
        case 1:
            ui->parkinglot1->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 2:
            ui->parkinglot2->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 3:
            ui->parkinglot3->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 4:
            ui->parkinglot4->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 5:
            ui->parkinglot5->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 6:
            ui->parkinglot6->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 7:
            ui->parkinglot7->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 8:
            ui->parkinglot8->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 9:
            ui->parkinglot9->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 10:
            ui->parkinglot10->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        }
    }
    //设置队列图标，表示队列已占
    for(int i = 0;i < q->size ;i++){
        switch (i+1) {
        case 1:
            ui->queue1->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 2:
            ui->queue2->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 3:
            ui->queue3->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 4:
            ui->queue4->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        case 5:
            ui->queue5->setPixmap(QPixmap("D:/QT/program/parkinglot/car.png"));
            break;
        }
    }
    //在控制台输出信息
    ui->showmessage->setText(message);
}

void MainWindow::on_outbutton_clicked()
{
    QTime current_time = QTime::currentTime();
    QString outtime = current_time.toString("hh:mm:ss"),num = ui->inputnum->text();//获取出停车场时间
    int index = search(t,num);

    if(t->length == 0){
        message.append("停车场为空！\n");
    }
    else if(index > -1){
        position[t->cars[index].pos-1] = 0;
            //重置车位图标
            switch (t->cars[index].pos) {
            case 1:
                ui->parkinglot1->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot1->setText("1");
                break;
            case 2:
                ui->parkinglot2->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot2->setText("2");
                break;
            case 3:
                ui->parkinglot3->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot3->setText("3");
                break;
            case 4:
                ui->parkinglot4->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot4->setText("4");
                break;
            case 5:
                ui->parkinglot5->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot5->setText("5");
                break;
            case 6:
                ui->parkinglot6->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot6->setText("6");
                break;
            case 7:
                ui->parkinglot7->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot7->setText("7");
                break;
            case 8:
                ui->parkinglot8->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot8->setText("8");
                break;
            case 9:
                ui->parkinglot9->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot9->setText("9");
                break;
            case 10:
                ui->parkinglot10->setPixmap(QPixmap("D:/QT/program/parkinglot/parkinglot.png"));
                ui->parkinglot10->setText("10");
                break;
            }

        carOut(t,num);//车出停车场
        float cost = calculate(t->cars[index].entime,outtime);//计算费用
        QString qcost = QString::asprintf("%.2f",cost);
        message.append(outtime + ": " + num + "退出停车场\n");
        message.append("收费: " + qcost + "元" + "\n");
    }
    else{
        message.append("该车辆不存在！请重新输入。\n");
    }
    ui->showmessage->setText(message);
}

void MainWindow::on_checkbutton_clicked()
{
    QString qnum = QString::number(Max - q->size),tnum = QString::number(COL*ROW - t->length);//计算停车场剩余位置和队列剩余位置
    message.append("停车场剩余" + tnum + "位," + "等候队列剩余" + qnum + "位。\n");
    QString num = ui->inputnum->text();
    if(num == ""){
         message.append("请输入车牌号！\n");
    }
    else if(t->length == 0){
        message.append("停车场为空！\n");
    }
    else if(t->length > 0){
        int index = search(t,num);
        if(index >= 0){
            QString pos = QString::number(t->cars[index].pos);
            message.append("车牌号：" + num + "停车位：" + pos + "进入时间：" + t->cars[index].entime + "\n");
        }
        else{
            message.append("车辆不存在！\n");
        }
    }
    ui->showmessage->setText(message);
}
