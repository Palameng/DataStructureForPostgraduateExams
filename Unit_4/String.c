//
// Created by Administrator on 2018/4/19.
//
#include "String.h"

int strassign(ChangeableStr *str, char* ch)
{
    if(str->str)
        free(str->str);

    int len = 0;
    char *c = ch;

    while (*c)
    {
        ++len;
        ++c;
    }

    if(len == 0)
    {
        str->str = NULL;
        str->length = 0;
        return FLASE;
    }
    else
    {
        str->str = (char *)malloc(sizeof(char) * (len + 1));

        if(str->str == NULL)
        {
            return FLASE;
        }
        else
        {
            c = ch;

            for (int i = 0; i <= len; ++i, ++c) //循环条件中之所以用<=,是为了将ch最后的'\0'复制到新串中作为结束标记
            {
                str->str[i] = *c;
            }

            str->length = len;
            return TRUE;
        }
    }
}

int strlength(ChangeableStr str)
{
    return str.length;
}

int strcompare(ChangeableStr str1, ChangeableStr str2)
{
    for (int i = 0; i < str1.length && i < str2.length; ++i)
    {
        if(str1.str[i] != str2.str[i])
        {
            return str1.str[i] - str2.str[i];
        }
    }

    return str1.length - str2.length;
}

int concat(ChangeableStr *str, ChangeableStr str1, ChangeableStr str2)
{
    if(str->str)
    {
        free(str->str);
        str->str = NULL;
    }

    str->str = (char *)malloc(sizeof(char) * (str1.length + str2.length + 1));
    if(str->str == NULL)
        return FLASE;

    int i = 0;

    while(i < str1.length)
    {
        str->str[i] = str1.str[i];
        ++i;
    }

    int j = 0;

    while(j <= str2.length) //这里<=是为了保存链接之后最后一个'\0'
    {
        str->str[i + j] = str1.str[j];
        ++j;
    }

    str->length = str1.length + str2.length;

    return TRUE;
}

int substring(ChangeableStr *substr, ChangeableStr str, int pos, int len)
{
    if(pos<0 || pos>=str.length || len<0 || len>str.length-pos)
    {
        return FLASE;
    }

    if(substr->str)
    {
        free(substr->str);
        substr->str=NULL;
    }

    if(len == 0)
    {
        substr->str = NULL;
        substr->length = 0;
        return TRUE;
    }
    else
    {
        substr->str = (char *)malloc(sizeof(char) * (len + 1));

        int i = pos;
        int j = 0;

        while(i < pos + len)
        {
            substr->str[j] = str.str[i];
            ++i;
            ++j;
        }
        substr->str[j] = '\0';
        substr->length = len;

        return TRUE;
    }

}

int clearstring(ChangeableStr *str)
{
    if(str->str)
    {
        free(str->str);
        str->str = NULL;
    }

    str->length = 0;

    return TRUE;
}