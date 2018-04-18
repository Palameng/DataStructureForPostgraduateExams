//
// Created by Administrator on 2018/4/15.
//

#ifndef CSPROJECTS_STACKANDQUEUE_H
#define CSPROJECTS_STACKANDQUEUE_H

#include "../BaseHeader/base.h"

#define MAXSIZE 50

//顺序栈
typedef struct
{
    int data[MAXSIZE];
    int top;
}SqStack;

//链栈
typedef struct LStackNode
{
    int data;
    struct LStackNode *next;
}LStackNode;

//顺序队
typedef struct
{
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;

//链队
//1)队结点
typedef struct LQueueNode
{
    int data;
    struct LQueueNode *next;
}LQueueNode;

typedef struct
{
    LQueueNode *front;
    LQueueNode *rear;
}LQueue;


/**************************************************
 * 顺序栈
 **************************************************/
extern void initStack(SqStack *st);
extern int isEmpty(SqStack st);
extern int push(SqStack *st, int x);
extern int pop(SqStack *st, int *x);

/**************************************************
 * 链栈
 **************************************************/
extern void initLStack(LStackNode *lst);
extern int isLStackEmpty(LStackNode lst);
extern void pushLStack(LStackNode *lst, int x);
extern int popLStack(LStackNode *lst, int *x);

/**************************************************
 * 顺序队
 **************************************************/
extern void initQueue(SqQueue *queue);
extern int isQueueEmpty(SqQueue queue);
int enQueue(SqQueue *queue, int x);
int deQueue(SqQueue *queue, int *x);

#endif //CSPROJECTS_STACKANDQUEUE_H
