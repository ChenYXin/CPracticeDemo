//
//  main.c
//  if-else if-else
//
//  Created by Donkor on 2018/1/23.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("请输入钱包里的钱\n");
    
    int money = 0;
    
    scanf("%d",&money);
    
    if(money >= 500){
        printf("吃大餐\n");
    }else if(money >= 400){
        printf("吃中餐\n");
    }else if(money >= 300){
        printf("吃小餐\n");
    }else if(money >= 200){
        printf("吃泡面\n");
    }else if(money >= 100){
        printf("喝汽水\n");
    }else{
        printf("放学别走\n");
    }
    
    return 0;
}
