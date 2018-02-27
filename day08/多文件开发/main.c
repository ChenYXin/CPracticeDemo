//
//  main.c
//  多文件开发
//
//  Created by Donkor on 2018/2/26.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>
#include "myRandom.h"
int main(int argc, const char * argv[]) {

    int num =getARandomNumber(10, 20);
    printf("%d\n",num);
    
    return 0;
}
