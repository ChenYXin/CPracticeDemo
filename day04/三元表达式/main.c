//
//  main.c
//  三元表达式
//
//  三元表达式：
//  条件表达式 ？ 值1 ： 值2
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    
    int i = 1;
    int num = i > 0 ? 0 : 200;
    printf("num = %d \n",num);
    
    return 0;
}
