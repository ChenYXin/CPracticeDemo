//
//  main.c
//  if练习
//
//  Created by Donkor on 2018/1/22.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    
    int yuwen = 0,shuxue = 0,yingyu = 0;
    printf("请输入你儿子的语文数学英语成绩：");
    scanf("%d%d%d",&yuwen,&shuxue,&yingyu);
    int avg = (yuwen + shuxue + yingyu)/3;
    if(avg>60){
        printf("乖，来老爸bo一个\n");
    }
    printf("走，回家吃饭\n");
    
    
    return 0;
}
