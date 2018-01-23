//
//  main.c
//  如何产生随机数
//  如何产生1个指定范围的随机数：
//  int num = arc4random_uniform(最大数 - 最小数 +1)+最小数
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
//    int num = arc4random_uniform(10);
//
//    printf("num = %d \n",num);

//    45 ～90
    int num = arc4random_uniform(46)+45;
    printf("num = %d \n",num);
    return 0;
}
