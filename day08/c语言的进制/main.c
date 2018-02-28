//
//  main.c
//  c语言的进制
/*
    二进制     八进制     十进制     十六进制
    0         0         0         0
    1         1         1         1
    10        2         2         2
    11        3         3         3
    100       4         4         4
    101       5         5         5
    110       6         6         6
    111       7         7         7
    1000      10        8         8
    1001      11        9         9
    1010      12        10        a
    1011      13        11        b
    1100      14        12        c
    1101      15        13        d
    1110      16        14        e
    1111      17        15        f
    10000     20        16        10
 
 
 
 */
//  Created by Donkor on 2018/2/27.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //二进制
//    int num = 0b100101;
//printf("num = %d\n",num);
    
    //8进制
//    int num = 010;
    //%o 以8进制的值打印出来
    //int num = 10;
//    printf("num = %o\n",num);
    
    //16进制
    int num = 0x177acd;
    //%x 以16进制的值打印出来
//    int num = 10;
    printf("%x\n",num);
    
    return 0;
}
