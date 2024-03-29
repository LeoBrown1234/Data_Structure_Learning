#include<stdio.h>
#include<stdlib.h>
#include "SqQueue.h"

void InitQueue(SqQueue*& q)//初始化队列q
{
    q = (SqQueue*)malloc(sizeof(SqQueue));
    q->front = q->rear = 0;
}
void DestroyQueue(SqQueue*& q)//销毁队列q
{
    free(q);
}
bool QueueEmpty(SqQueue* q)//判断队列q是否空
{
    return(q->front == q->rear);
}
bool enQueue(SqQueue*& q, ElemType e)//进队
{
    if ((q->rear + 1) % MaxSize == q->rear)
    {
        return false;
    }
    q->rear = (q->rear + 1) % MaxSize;
    q->data[q->rear] = e;
    return true;
}
bool deQueue(SqQueue*& q, ElemType e)//出队
{
    if (q->front == q->rear)
    {
        return false;
    }
    q->front = (q->front + 1) % MaxSize;
    e = q->data[q->front];
    return true;
}


