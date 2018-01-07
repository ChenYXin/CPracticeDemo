//
//  main.c
//  Scabf函数的使用
/*

 scanf函数的执行原理：
 a.scanf是一个阻塞式函数
 当cpu执行到这个scanf函数的时候，cpu的执行就会暂停，不会继续往下执行
 并等待用户输入数据，当户用输入的完毕数据，按下回车表示输入完毕。
 这个时候，就会将用户输入的数据赋值给后面指定的变量
 
 然后继续往下执行
 */


#include <stdio.h>

int main(int argc, const char * argv[]) {

    char ch='a';
    printf("请输入一个字符 ： ");
    scanf("%c",&ch);
    printf("你输入的一个字符是%c\n",ch);
    
//    double d1= 0.0;
//    printf("请输入一个double : \n");
//    scanf("%lf",&d1);
//    printf("你输入的double是:%lf \n",d1);
    
//    //输入一个float类型的数据
//    float f1=0.0f;
//    printf("输入1个float数据：\n");
//    scanf("%f",&f1);
//    printf("你输入的float的数据是 ：%f\n",f1);
    
//    int qqNumber=0;
//    int qqPwd=0;
//
//    printf("请输入qq号码：\n");
//    scanf("%d",&qqNumber);
//    printf("请输入qq密码：\n");
//    scanf("%d",&qqPwd);
//
//    printf("正在发送数据。。。\n");
//    printf("恭喜你，%d 登陆成功\n",qqNumber);
    
//    int num=0;
//    printf("aaaa\n");
//    scanf("%d",&num);
//    printf("bbb\n");
//    printf("num = %d \n",num);
    
    // insert code here...
//    printf("Hello, World!\n");
    return 0;
}
