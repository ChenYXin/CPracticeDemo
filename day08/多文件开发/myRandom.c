//
//  myRandom.c
//  多文件开发
//
//  Created by Donkor on 2018/2/26.
//  Copyright © 2018年 Donkor. All rights reserved.
//

#include "myRandom.h"
#include <stdlib.h>
int getARandomNumber(int min,int max){
    return arc4random_uniform(max-min+1)+min;
}
