//
//  main.c
//  goto
// 注意避免死循环
// 可以往前跳，也可以往后跳
// 去标签名下面的代码不能是声明变量
//  Created by Donkor on 2018/2/22.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int userName = 0, password = 0;
//    loop 标签名随意
loop:
    printf("用户名：");
    scanf("%d",&userName);
    printf("密 码 ：");
    scanf("%d",&password);
    
    if(userName != 123456 || password != 123456){
        goto loop;
    }
//loop:
//    printf("aaa\n");
//    printf("bbb\n");
//    printf("ccc\n");
//    goto loop;
    
    return 0;
}
