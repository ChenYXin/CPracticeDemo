//
//  main.c
//  day04
//
//  Created by Donkor on 2018/1/22.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    

    int money = 0;
    printf("请输入某某钱包里面的钱:\n");
    scanf("%d",&money);
    
    if(money >= 100){
        printf("吃饭去\n");
    }else{
        printf("放学别走\n");
    }
    
    
//    int money = 100;
//
//    if(money > 199){
//        printf("走，吃饭去\n");
//    }else{
//        printf("放学别走\n");
//    }
//
    return 0;
}
