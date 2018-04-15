//
// Created by Administrator on 2018/4/12.
//
#include <stdlib.h>
#include "LinkedList.h"

/*
 * A和B是两个单链表（带头结点），其中元素递增有序。设计一个算法，将A和B归并成一个按元素值非递减有序链表C，C由A、B中的
 * 节点组成。
 * */
void merge(SLNode *A, SLNode *B, SLNode *C)
{
    //TO DO
}

/*
 * 尾插法，相当于在链表末尾添加节点:
 * 1 声明头结点，并初始化next=NULL
 * 2 通过传入的n控制循环不断尾插新节点
 * 3 尾插完成后将巡航指针的next=NULL
 */
void createlistR(SLNode *C, int *a, int n)
{
    SLNode *s, *r;  //s负责指向新节点，r为巡航指针，总是指向最后的节点
    int i;

    C = (SLNode *)malloc(sizeof(SLNode));
    C->next = NULL;
    r = C;

    for (int i = 0; i < n; ++i)
    {
        s = (SLNode *)malloc(sizeof(SLNode));
        s->data = a[i];
        r->next = s;
        r = r->next;
    }

    r->next = NULL;
}

/*
 * 头插法，即插入的新节点在头结点的后面，在所有旧节点的前面
 * 1 声明头结点，并初始化next=NULL
 * 2 通过传入的n控制循环不断头插新节点
 */
void createlistF(SLNode *C, int *a, int n)
{
    SLNode *s;  //s作为指向新节点的指针，头插法不需要巡航指针
    int i;

    C = (SLNode *)malloc(sizeof(SLNode));
    C->next = NULL;

    for (int i = 0; i < n; ++i) {
        s = (SLNode *)malloc(sizeof(SLNode));
        s->data = a[i];
        s->next = C->next;  //使用了普通的单链表插入操作
        C->next = s;
    }
}

/*
 * 查找节点并删除（根据节点的内容查找匹配）
 * 1 查找比较
 * 2 如果没有则输入FALSE
 * 3 如果找到首先给删除节点一个q标记,之后处理 删除节点的前驱 和 删除节点的后继 的链接
 * 4 删除节点（释放）
 */
int fidAndDelete(SLNode *C, int x)
{
    SLNode *p, *q;
    p = C;

    while(p->next!=NULL)
    {
        if(p->next->data == x)
            break;

        p = p->next;
    }

    if(p->next == NULL)
        return FLASE;
    else
    {
        q = p->next;
        p->next = p->next->next;    //处理 删除节点的前驱 和 删除节点的后继 的链接
        free(q);
        return TRUE;
    }

}