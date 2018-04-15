//
// Created by Administrator on 2018/4/12.
//

#ifndef CSPROJECTS_LINKEDLIST_H
#define CSPROJECTS_LINKEDLIST_H

#include "../BaseHeader/base.h"

//单向链表
typedef struct SLNode
{
    int data;
    struct SLNode * next;
}SLNode;

//双向链表
typedef struct DLNode
{
    int data;
    struct DLNode *prior;
    struct DLNode *next;
}DLNode;

//单链表
extern void SLmerge(SLNode *A, SLNode *B, SLNode *C);
extern void createlistR(SLNode *C, int *a, int n);
extern void createlistF(SLNode *C, int *a, int n);
extern int fidAndDelete(SLNode *C, int x);

//双链表
extern void createDlistR(DLNode *L, int *a, int n);
extern DLNode* findNode(DLNode *C, int x);
extern void deleteDLNode(DLNode *node);
extern void insertDLNode(DLNode *p, DLNode *node);

#endif //CSPROJECTS_LINKEDLIST_H
