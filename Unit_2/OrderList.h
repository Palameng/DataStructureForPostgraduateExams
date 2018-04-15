//
// Created by Administrator on 2018/4/10.
//

#ifndef CSPROJECTS_UNIT_1_H
#define CSPROJECTS_UNIT_1_H

#include "../BaseHeader/base.h"

#define MAXSIZE_SQLIST 20


typedef struct BTNode
{
    int data;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode;

typedef struct
{
    int data[MAXSIZE_SQLIST];
    int length;
}Sqlist;

// 顺序表相关
extern int initList(Sqlist *L, int x);
extern int getElem(Sqlist L, int p, int *e);
extern int findElem(Sqlist L, int x);
extern void insertElem(Sqlist *L, int x);
extern int deleteElem(Sqlist *L, int p, int *e);

#endif //CSPROJECTS_UNIT_1_H
