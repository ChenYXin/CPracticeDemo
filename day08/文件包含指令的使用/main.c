//
//  main.c
//  文件包含指令的使用
/*
 文件路径用双引号和括弧的异同
 1）都是将指定的文件的内容包含到写指令的地方
 2）不同点在于寻找指定文件的方式不一样
    a)如果文件路径我们使用双引号引起来。
        #include "1.txt"
        -> 先去当前源文件所在的目录中查找这个文件，如果有，直接包含
        -> 如果没有，就去系统自带的编译器目录查找。如果有直接包含
           如果没有就报错
    b)如果文件路径我们使用尖括弧引起来。
        #include <1.txt>
        -> 直接就去编译器目录查找。如果有包含。如果没有报错
 
 */
//  Created by Donkor on 2018/2/26.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    #include "1.txt"
    
    return 0;
}
