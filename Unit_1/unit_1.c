//
// Created by Administrator on 2018/4/12.
//

#include "unit_1.h"


int initList(Sqlist *L, int x)
{
    if(x > MAXSIZE_SQLIST)
    {
        return FLASE;
    }

    L->length = x;

    return L->length;
}

int getElem(Sqlist L, int p, int *e)
{
    if(p<0 || p>L.length-1)
    {
        return FLASE;
    }

    *e = L.data[p];

    return TRUE;
}

int findElem(Sqlist L, int x)
{
    int i;
    for(i=0; i<L.length; i++)
    {
        if(x<L.data[i])
        {
            return i;
        }
    }
    return i;
}

void insertElem(Sqlist *L, int x)
{
    int p, i;
    p = findElem(*L, x);

    for(i=L->length-1; i>=p; --i)
    {
        L->data[i+1] = L->data[i];
    }
    L->data[p] = x;
    L->length++;
}

int deleteElem(Sqlist *L, int p, int *e)
{
    int i;

    if(p<0 || p>L->length-1)
    {
        return FLASE;
    }

    *e = L->data[p];

    for(i=p; i<L->length-1; i++)
    {
        L->data[i] = L->data[i+1];
    }

    L->length--;

    return TRUE;
}