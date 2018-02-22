//
//  main.c
//  99表
//
//  Created by Donkor on 2018/2/22.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

void show99biao()
{
    for(int i = 1; i <=9; i++){
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
}
int main(int argc, const char * argv[]) {
    show99biao();
    return 0;
}
