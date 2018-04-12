#include <stdio.h>
#include <stdlib.h>
#include "Unit_1/unit_1.h"

#define N 20

int main() {

    int *p;
    Node *pnode;
    BTNode *pbtnode;

    int result;

    Sqlist L = {
            {1,2,3,4,5,6,7,8,9},
            initList(&L, 10),
    };

    insertElem(&L, 7);
    printf("L's len is: %d\n", L.length);

    deleteElem(&L, 2, &result);
    printf("deleted num is %d and len change to : %d\n", result, L.length);

    getElem(L, 4, &result);
    printf("get num is: %d\n", result);

    p = (int*)malloc(N * sizeof(int));
    pnode = (Node*)malloc(sizeof(Node));
    pbtnode = (BTNode*)malloc(sizeof(BTNode));

    free(p);
    free(pnode);
    free(pbtnode);

    printf("Finish it!\n");
    return 0;
}