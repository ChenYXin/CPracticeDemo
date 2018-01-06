/*
 
 1.Xcode激动人心的功能
  1）代码只能提示
  2）一键编译并执行
    点击运行按钮 Cammand + R
    这个时候Xcode自动的帮助我们编译 链接 执行
  3）实时监测与法错误。这个时候Xcode会以红色提示
    点击红色可以查看错误的原因
  4）代码自动缩进
  5）关键字自动着色
 
 2.Xcode在编译之后会生成1个可执行文件，这个可执行文件在哪里

 3.最常用的两个快捷键
    cammand + R : 自动编译链接执行，执行的效果 输出的信息是输出在控制台输出区域
        Program ended with exit code: 0 当你看到这句话输出的时候，代表这个程序已经运行成功了
 
    Cammand + B : 自动编译链接
        虽然Xcode会实时检查语法错误，但是由一些与法错误它没有那么快检查出来，甚至有些语法错误检查不出来
        如果想确定代码到底有没有语法错误，只需要强制编译一下就可以了 使用Cammand + B
 
 4.Xcode使用技巧
    1）字体设置
    2）行号显示
    3）是否开启智能提示
 
 5.为Project添加多个Target
 Project 下面有一个文件夹。这个文件夹我们叫做Target
 1个Target其实就是1个程序
 
 Xcode有一个功能，为同一个project添加多个Target
 
 要掌握如何为project添加多个Target
 如何切换运行的程序
 */


#include <stdio.h>

int main(){
    printf("Xcode 真的爽\n");
    return 0;
}
