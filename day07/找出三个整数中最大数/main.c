//
//  main.c
//  找出三个整数中最大数
//
//  Created by Donkor on 2018/2/24.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

void getMax(int num1,int num2,int num3){
    if(num1 >= num2 && num1 >= num3){
        printf("%d\n",num1);
    }else if( num2 >= num1 && num2 >= num3){
        printf("%d\n",num2);
    }else{
        printf("%d\n",num3);
    }
}
int main(int argc, const char * argv[]) {
    
    getMax(12, 12, 3);
    
    return 0;
}
