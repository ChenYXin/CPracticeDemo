//
//  main.c
//  if-else练习
//
//  Created by Donkor on 2018/1/23.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int yuwen = 0,shuxue = 0, yingyu = 0;
    
    printf("请输入你儿子的语文、数学、英语成绩\n");
    
    scanf("%d%d%d",&yuwen,&shuxue,&yingyu);
    
    if(yuwen < 60 || shuxue < 60 || yingyu < 60){
        printf("打死 \n");
    }else{
        printf("走，吃饭去\n");
    }
    
    return 0;
}
