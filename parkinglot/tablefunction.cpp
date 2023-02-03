#include <stdio.h>
#include "table.h"
#include <stdlib.h>
#include <QCoreApplication>
#include <iostream>
#include <QDateTime>

int IsEmpty(table t){
    return t->length == 0;
}

int IsFull(table t){
    return t->length == t->size;
}

void MakeEmpty(table t){
    t->length = 0;
}

table createTable(){
     table t;
     t = (tableNode*)malloc(sizeof(tableNode));
     t->size = COL*ROW;
     t->cars = new car[t->size];
     MakeEmpty(t);
     return t;
}

void carEnter(table t,QString num,QString etime,int pos){
    if(IsFull(t))
       printf("Parkinglot is Full!");
    else{
        t->cars[t->length].num = num;
        t->cars[t->length].entime = etime;
        t->cars[t->length].pos = pos;
        t->length++;
    }
}

void carOut(table t,QString num){
    int index = search(t,num);
    if(index == -1)
       printf("not found!!!");
    else{
        for(int i = index;i < t->length - 1;i++){
            t->cars[i] = t->cars[i+1];
        }
        t->length--;
    }
}

//根据车牌号进行查找，根据sign的正负（返回值）来判断该车是否存在
int search(table t,QString num){
    int sign = -1;
    if(IsEmpty(t))
      printf("empty table!");
    else{
        int n = t->length;
        for(int i = 0;i < n;i++){
            if(t->cars[i].num == num){
                printf("found it!!!");
                sign = i;
                break;
            }
        }
    }
    return sign;
}

//计算停车费用，按停车时间阶梯收费
float calculate(QString etime,QString outtime){
    QDateTime timeen,timeout;
    timeen = QDateTime::fromString(etime,"hh:mm:ss");
    timeout = QDateTime::fromString(outtime,"hh:mm:ss");
    int second = timeen.secsTo(timeout);
    if(second <= 5)
        return 0;
    else if(second > 5 && second <= 20)
        return 2;
    else if(second > 20 && second <= 60)
        return 5;
    else if(second > 60)
        return 10;
}

//随机分配停车位，在循环中生成随机数，同时将数组元素置1，若再次生成同样的数，遇到1则跳过，直到找到0为止
int createPos(int position[]){
    int max = COL*ROW,pos = rand()%max + 1;
    if(position[pos-1] == 0){
        position[pos-1] = 1;
        return pos;
    }
    else{
        int i;
        for (i = 0; i < 10; i++)
        {
            if(position[i] == 0){
                position[i] = 1;
                return i+1;
            }
        }
    }
}
