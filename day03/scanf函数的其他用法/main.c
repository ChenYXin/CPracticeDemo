//
//  main.c
//  scanf函数的其他用法


#include <stdio.h>

int main(int argc, const char * argv[]) {

    int num1=0,num2=0;
    printf("请输入两个整形的数据:");
    //自定义分隔符 -
    scanf("%d-%d",&num1,&num2);
    printf("你输入的两个整型的数据是%d,%d\n",num1,num2);
    
//    int num=0;
//    printf("请输入1个整数 ： ");
//    scanf("%d",&num);
//    printf("你输入的数字是：%d\n",num);
    
    return 0;
}
