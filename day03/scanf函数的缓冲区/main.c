//
//  main.c
//  scanf函数的缓冲区

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //1.让用户输入一个整数
    int num=0;
    printf("请输入一个整数：");
    scanf("%d",&num);
    printf("您输入的整数是：num = %d\n",num);
    
    //将缓冲区中的数据全部清空
    rewind(stdin);
    
    //2.让用户输入一个char字符
    char ch='a';
    printf("请输入一个字符：");
    scanf("%c",&ch);
    printf("您输入的字符是: ch = %c\n",ch);
    
    return 0;
}
