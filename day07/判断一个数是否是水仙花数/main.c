//
//  main.c
//  判断一个数是否是水仙花数
//
//  1）三位数
//  2）各位数的立方和为自己
//  Created by Donkor on 2018/2/22.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>
void isWaterFlower(int num)
{
    //判断一个数是不是水仙花数
    if(num >= 100 && num <= 999){
        int bai = num / 100;
        int shi = num % 100 / 10;
        int ge = num % 10;
        if(bai * bai * bai + shi * shi * shi + ge * ge * ge == num){
            printf("这是一个水仙花数\n");
        }else{
            printf("这不是一个水仙花数\n");
        }
    }else{
        printf("这真不是一个水仙花数\n");
    }
}
int main(int argc, const char * argv[]) {
   
    isWaterFlower(153);
    
    return 0;
}
