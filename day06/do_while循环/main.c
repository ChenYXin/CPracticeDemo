//
//  main.c
//  do_while循环
//
//  Created by Donkor on 2018/1/30.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char ans = 'a';
    do {
        printf("aaa\n");
        rewind(stdin);
        printf("满意吗?y/n\n");
        scanf("%c",&ans);
    } while (ans != 'y');
    
//    char ans = 'a';
//    do {
//        printf("请爱我吗? y/n\n");
//        //清空缓冲区
//        rewind(stdin);
//        scanf("%c",&ans);
//    } while (ans != 'y');
    
//    int userName = 0,password = 0;
//    do {
//
//        printf("请输入用户名：\n");
//        scanf("%d",&userName);
//        printf("请输入密码：\n");
//        scanf("%d",&password);
//    } while (userName != 123 | password != 123);
    
//    int i = 0;
//    do {
//        printf("aaaa = %d\n",i);
//        i++;
//    } while (i < 5);
    
    return 0;
}
