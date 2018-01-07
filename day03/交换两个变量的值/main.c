//
//  main.c
//  交换两个变量的值
//
// 两数相加再相减
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int num1=100,num2=200;
    /*******************************************/
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    /*******************************************/
    //    num1=num1+num2;//num1=300
    //    num2=num1-num2;//num2=100
    //    num1=num1-num2;//num1=200
    /*******************************************/
    //    int temp=num1;
    //    num1=num2;
    //    num2=temp;
    
    printf("num1 = %d num2 = %d\n",num1,num2);
    
    return 0;
}
