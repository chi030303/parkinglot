#ifndef TABLE_H
#define TABLE_H

#include <stdio.h>
#include "mainwindow.h"
#define COL 5
#define ROW 2

typedef struct tnode
{
    int pos;
    QString num,entime;
}car;

struct tableNode
{
    int length,size;
    car *cars;
};

typedef tableNode *table;

table createTable();//创造一个表
int IsEmpty(table t);//检测表是否为空
int IsFull(table t);//检测表是否满
void disposeQueue(table t);//释放表元素
void MakeEmpty(table t);//将表置空
void carEnter(table t,QString num,QString etime,int pos);//进表
void carOut(table t);//出表
void PrintTable(table t);//输出表
int search(table t,QString num);//输入车牌号，查找停车场中是否有该车
float calculate(QString etime,QString outtime);//计算费用
int createPos(int position[]);//随机分配停车位

#endif // TABLE_H
