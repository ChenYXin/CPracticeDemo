//
//  main.c
//  while_01
//
//  Created by Donkor on 2018/1/25.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //1000~5000的各位数之和
    int i = 1000;
    while (i <= 5000) {
        if(i / 1000 + i % 1000 / 100 + i % 1000 % 100 / 10 + i % 10 == 5){
            printf("%d\n",i);
        }
        i++;
    }
    
//    int i = 1;
//    while (i <= 100) {
//        if(i % 8 == 0){
//            printf("%d\n",i);
//        }
//        i++;
//    }
    return 0;
}
