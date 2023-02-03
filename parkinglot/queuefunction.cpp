#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

int IsEmpty(queue q){
   return q->size == 0;
}

int IsFull(queue q){
    return q->size == q->capacity;
}

//队列初始化
void MakeEmpty(queue q){
    q->rear = 0;
    q->front = 0;
    q->size = 0;
}

queue createQueue(){
    queue q;
    q = (queueNode*)malloc(sizeof(queueNode));//为队列申请内存
    q->capacity = Max;
    q->wait = new qcar[q->capacity];//为数组申请内存
    MakeEmpty(q);
    return q;
}

void enter(queue q,QString num){
    if(IsFull(q))
       printf("Full queue");
    else{
       q->wait[q->rear].num = num;
       q->size++;
       if(++q->rear == q->capacity)
          q->rear = 0;
    }
}

qcar Front(queue q){
    return q->wait[q->front];
}

void DeQueue(queue q){
    if(IsEmpty(q))
        printf("empty queue!");
    else{
        q->size--;
        q->front++;
        if(q->front == 5)
            q->front = 0;
    }
}

qcar FrontAndDeQueue(queue q){
    if(!IsEmpty(q))
        return q->wait[q->front++];
    else{
        printf("empty queue!");
    }
}

int search(queue q,QString num){
    int sign = -1;
    if(IsEmpty(q))
      printf("empty table!");
    else{
        int n = q->size;
        for(int i = 0;i < n;i++){
            if(q->wait[i].num == num){
                printf("found it!!!");
                sign = i;
                break;
            }
        }
    }
    return sign;
}
