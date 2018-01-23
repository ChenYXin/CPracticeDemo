//
//  main.c
//  day05
//
//  Created by Donkor on 2018/1/23.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("请输入星期数\n");
    
    int weekday = 0;
    
    scanf("%d",&weekday);

    switch (weekday) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        default:
            printf("other\n");
            break;
    }
    
    
    return 0;
}
