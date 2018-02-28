//
//  main.c
//  面试题
//
//  Created by Donkor on 2018/2/27.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //  判断1个整数是否数偶数
    int num = 11;
    if((num & 1) == 0){
        printf("%d是一个偶数\n",num);
    }else{
        printf("%d不是一个偶数\n",num);
    }
    
    //  交换两个变量的值
    int a = 10;
    int b = 20;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("a = %d\nb = %d\n",a,b);
    
    return 0;
}
