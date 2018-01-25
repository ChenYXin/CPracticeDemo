//
//  main.c
//  while_03
//
//  Created by Donkor on 2018/1/25.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //输入5个数，找到最大值
    int i = 1;
    int max = 0;
    while (i <= 5) {
        printf("请输入一个数:");
        int x = 0;
        scanf("%d",&x);
        if(i == 1){
            max = x;
        }
        if(max < x){
            max = x;
        }
        i++;
    }
    printf("max = %d\n",max);
    
    return 0;
}
