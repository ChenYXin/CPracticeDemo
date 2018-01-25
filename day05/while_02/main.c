//
//  main.c
//  while_02
//
//  Created by Donkor on 2018/1/25.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //输入5个数，得到5个数的总和
    int x = 1;
    int sum = 0;

    while (x <= 5) {
        printf("请输入一个数:);
        int num = 0;
        scanf("%d",&num);
        sum += num;
        x++;
    }
    printf("sum = %d\n",sum);
    
//    int x = 1;
//    int y = 0;
//    while (x <= 10) {
//        y += x;
//        x++;
//    }
//    printf("%d\n",y);
    
    return 0;
}
