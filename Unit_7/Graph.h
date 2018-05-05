//
// Created by Administrator on 2018/5/5.
//

#ifndef CSPROJECTS_GRAPH_H
#define CSPROJECTS_GRAPH_H

#include "../BaseHeader/base.h"

#define GRAPH_MAXSIZE 50

/***************************************************************
 * 图的顺序存储结构 - 邻接矩阵
 ***************************************************************/

//图的顶点
typedef struct
{
    int no;
    char info;  //顶点其他信息，这里默认是char型，这一句在一般题目中很少用到，因此题目不做特殊要求的话可以不写顶点类型
}VertexType;


typedef struct
{
    int edges[GRAPH_MAXSIZE][GRAPH_MAXSIZE];    //邻接矩阵定义，如果是有权图，则在此句中将int改为float
    int n;  // 顶点数
    int e;  // 边数
    VertexType vex[GRAPH_MAXSIZE];  //存放节点信息
}MGragh;


/***************************************************************
 * 图的链式存储结构 - 邻接表
 ***************************************************************/

//顶点指向的其他点信息
typedef struct
{
    int adjvex; //该边所指向的结点的位置
    struct ArcNode *nextarc;    // 指向下一条边的指针
    int info;
}ArcNode;

//顶点
typedef struct
{
    char data;
    ArcNode *firstarc;  //指向第一条边的指针
}VNode;

// 图的邻接表类型
typedef struct
{
    VNode adjlist[GRAPH_MAXSIZE];
    int n;
    int e;
}AGRAPH;

#endif //CSPROJECTS_GRAPH_H
