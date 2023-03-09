/***********************************************************************
 * @file: datatypes.cc
 * @brief: header file
 * @history:
 * @date:2023-02-28
 * @version: v1.1
 * @author:  pyang
 * @contact: yeangPan@outlook.com
 * @license: Apache License Version 2.0, 2023 yangp
 * @description:
 * @Copyright:  (C)  2023  .pyang. all right reserved
 ***********************************************************************/

#include <stdio.h>
#include <iostream>

#include "async_simple/Executor.h"



int main(int argc, char const *argv[])
{

    bool x = true;
    char z = 'z';
    int a = 1;
    short b = 2;
    long c = 3;
    short int d = 4;
    long int e = 5;
    float f = 5.0;
    double g = 6.0;

    printf("sizeof(bool):%d,sizeof(x):%d\n", int(sizeof(bool)), int(sizeof(x)));
    printf("sizeof(char):%d,sizeof(z):%d\n", int(sizeof(char)), int(sizeof(z)));
    printf("sizeof(int):%d,sizeof(a):%d\n", int(sizeof(int)), int(sizeof(a)));
    printf("sizeof(short):%d,sizeof(b):%d\n", int(sizeof(short)), int(sizeof(b)));
    printf("sizeof(long):%d,sizeof(c):%d\n", int(sizeof(long)), int(sizeof(c)));
    printf("sizeof(short int):%d,sizeof(d):%d\n", int(sizeof(short int)), int(sizeof(d)));
    printf("sizeof(long int):%d,sizeof(e):%d\n", int(sizeof(long int)), int(sizeof(e)));
    printf("sizeof(float):%d,sizeof(f):%d\n", int(sizeof(float)), int(sizeof(f)));
    printf("sizeof(double):%d,sizeof(g):%d\n", int(sizeof(double)), int(sizeof(g)));

    std::cout << "__cplusplus:" << __cplusplus << std::endl;

    return 0;
}
