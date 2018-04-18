//
// Created by Administrator on 2018/4/15.
//

#include "StackAndQueue.h"

/**********************************************************
 * 顺序栈
 * 1 initStack  初始化栈
 * 2 isEmpty    判断是否为空栈
 * 3 push       压栈
 * 4 pop        弹栈
 *********************************************************/
void initStack(SqStack *st)
{
    st->top = -1;   //这里的top灵活设置
}

int isEmpty(SqStack st)
{
    if(st.top == -1)
    {
        return TRUE;
    }
    else
    {
        return FLASE;
    }
}

int push(SqStack *st, int x)
{
    if(st->top == MAXSIZE - 1)
    {
        return FLASE;
    }

    ++(st->top);
    st->data[st->top] = x;

    return TRUE;
}

int pop(SqStack *st, int *x)
{
    if(st->top == -1)
    {
        return FLASE;
    }

    *x = st->data[st->top];
    --(st->top);

    return TRUE;
}

/*********************************************************
 * 链栈
 * 1 initLStack     初始化链栈
 * 2 isLStackEmpty  判断链栈是否为空
 * 3 pushLStack     链栈压栈
 * 4 popLStack      链栈弹栈
 *********************************************************/
void initLStack(LStackNode *lst)
{
    lst = (LStackNode *)malloc(sizeof(LStackNode));
    lst->next = NULL;
}

int isLStackEmpty(LStackNode lst)
{
    if(lst.next == NULL)
    {
        return TRUE;
    }
    else
    {
        return FLASE;
    }
}

void pushLStack(LStackNode *lst, int x)
{
    LStackNode * node;

    node = (LStackNode *)malloc(sizeof(LStackNode));
    node->next = NULL;

    node->data = x;
    node->next = lst->next;
    lst->next = node;
}

int popLStack(LStackNode *lst, int *x)
{
    LStackNode * node;

    if(lst->next == NULL)
        return FLASE;

    node = lst->next;
    *x = node->data;
    lst->next = node->next;
    free(node);

    return TRUE;
}

/*********************************************************
 * 顺序队列
 * 1 initQueue      初始化顺序队
 * 2 isQueueEmpty   判断顺序队是否为空
 * 3 enQueue        进队
 * 4 deQueue        出队
 *********************************************************/
void initQueue(SqQueue *queue)
{
    queue->front = queue->rear = 0;
}

int isQueueEmpty(SqQueue queue)
{
    if(queue.front == queue.rear)
    {
        return TRUE;
    }
    else
    {
        return FLASE;
    }
}

int enQueue(SqQueue *queue, int x)
{
    if((queue->rear + 1) % MAXSIZE == queue->front)
    {
        return FLASE;
    }

    queue->rear = (queue->rear + 1) % MAXSIZE;
    queue->data[queue->rear] = x;

    return TRUE;
}

int deQueue(SqQueue *queue, int *x)
{
    if(queue->front == queue->rear)
    {
        return FLASE;
    }

    queue->front = (queue->front + 1) % MAXSIZE;
    *x = queue->data[queue->front];

    return TRUE;
}