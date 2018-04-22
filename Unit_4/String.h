//
// Created by Administrator on 2018/4/19.
//

#ifndef CSPROJECTS_STRING_H
#define CSPROJECTS_STRING_H

#include "../BaseHeader/base.h"

#define MAXSIZE_STRING 20

typedef struct
{
    char str[MAXSIZE_STRING+1];
    int length;
}RegularStr;

typedef struct
{
    char *str;
    int length;
}ChangeableStr;


extern int strassign(ChangeableStr *str, char* ch);
extern int strlength(ChangeableStr str);
extern int strcompare(ChangeableStr str1, ChangeableStr str2);
extern int concat(ChangeableStr *str, ChangeableStr str1, ChangeableStr str2);
extern int substring(ChangeableStr *substr, ChangeableStr str, int pos, int len);
extern int clearstring(ChangeableStr *str);

#endif //CSPROJECTS_STRING_H
