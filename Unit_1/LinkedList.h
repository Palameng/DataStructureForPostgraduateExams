//
// Created by Administrator on 2018/4/12.
//

#ifndef CSPROJECTS_LINKEDLIST_H
#define CSPROJECTS_LINKEDLIST_H

#include "../BaseHeader/base.h"


typedef struct SLNode
{
    int data;
    struct SLNode * next;
}SLNode;


extern void merge(SLNode *A, SLNode *B, SLNode *C);
extern void createlistR(SLNode *C, int *a, int n);
extern void createlistF(SLNode *C, int *a, int n);
extern int fidAndDelete(SLNode *C, int x);

#endif //CSPROJECTS_LINKEDLIST_H
