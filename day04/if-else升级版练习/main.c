//
//  main.c
//  if-else升级版练习
//
//  Created by Donkor on 2018/1/23.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int age = 0,sex = 1;
    
    printf("请输入自己的年龄和性别（1代表男、2代表女）\n");
    
    scanf("%d%d",&age,&sex);
    
    if(sex == 2){
        printf("女 你妈妈喊你回家吃饭\n");
    }else{
        if(age >= 18){
            printf("给你点刺激的看看～\n");
        }else{
            printf("男 你妈妈喊你回家吃饭\n");
        }
    }
    
    
    return 0;
}
