//
//  main.c
//  sizeof
/*
 int 4byte
 double 8byte
 char 2byte
 float 4byte
 
 
 */
//  Created by Donkor on 2018/2/27.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num = 10;
    //sizeof 计算变量、常量在当前系统上内存中占用的字节数
//    int len = sizeof(num);
    int len = sizeof(int);
    printf("%d\n",len);
    return 0;
}
