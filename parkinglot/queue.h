#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include "mainwindow.h"
#define Max 5

typedef struct node
{
    int pos;
    QString num;
}qcar;

struct queueNode{
    int capacity;
    int front;
    int rear;
    int size;
    qcar *wait;
};

typedef queueNode *queue;

int IsEmpty(queue q);//检测队列是否为空
int IsFull(queue q);//检测队列是否满
queue createQueue();//创建一个队列
void disposeQueue(queue q);//释放队列元素
void MakeEmpty(queue q);//将队列置空
void enter(queue q,QString num);//进队列
qcar Front(queue q);//返回队首元素
void deQueue(queue q);//出队
qcar FrontAndDeQueue(queue q);//返回队首并出队
void PrintQueue(queue q);//输出队列
int search(queue q,QString num);//输入车牌号，查找队列里有没有该车

#endif // QUEUE_H
