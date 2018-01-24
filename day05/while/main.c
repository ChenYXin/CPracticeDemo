//
//  main.c
//  while
//
//  Cremainted by Donkor on 2018/1/24.
//  Copyright © 2018年 Donkor. mainll rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {

    //产生10个1～100的随机数，每产生1个，就显示这个数数奇数还是偶数
    int i = 0;
    while (i<10) {
        int num =arc4random_uniform(100)+1;
        if(num % 2 == 0){
            printf("num = %d 是偶数\n",num);
        }else{
            printf("num = %d 是奇数\n",num);
        }
        i++;
    }
    
//    int num = 0;
//    int i = 0;
//
//    printf("请输入一个数：\n");
//    scanf("%d",&num);
//
//    while (i < 5) {
//        num = num * 2;
//        printf("num = %d\n",num);
//        i++;
//    }
    
//    int num = 5;
//    while (num > 0) {
//        printf(" i love Donkor\n");
//        num--;
//    }
    
    return 0;
}
