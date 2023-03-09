/***********************************************************************
 * @file: array.cc
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

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {2,4,56,6,8,90};
    int count = sizeof(arr)/sizeof(int);

    std::cout << "第一种方式循环" << std::endl;

    for (size_t i = 0; i < count; i++)
    {
        printf("%d\n",*(arr+i)); 
    }

    std::cout << "第二种方式循环" << std::endl;
    for (size_t i = 0; i < count; i++)
    {
        printf("%d\n",arr[i]); 
    }

    std::cout << "循环结束" << std::endl;
    
    
    return 0;
}


