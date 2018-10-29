#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
void test()
{
    int a[10];
    printf("a : %d,a[0]:%d \n",a,&a[0]);
    printf("a+1 : %d,a[0]+1:%d \n",a+1,&a[0]+1);

}

void testasm()
{
    int a = 6;
    int b = 5;
    // __asm__ 表示后面的代码为内嵌汇编,"asm" 是"__asm__"的别名.
    // __volatile__ 表示编译器不要优化代码,后面代码指令保持原样,"volatile"是它的别名
    // 括号内为汇编指令
    // movl %0,%1"是指令模板,%0和%1代表指令的操作数,称为占位符,最多十个.


    asm volatile("movl %0,%1" : "=r" (a) : "r" (b));
    // 等价于 mov eax,b
    // 表示将b读入寄存器，并且输出给a所以现在a和b都等于5.

    printf("a = %d,b =%d",a,b);
    a = 2;
    b = 3;
    // 内嵌汇编
    __asm__
    (
    "addl %%ebx, %%eax"
    : "=a" (a)
    : "b" (b), "a" (a)
    );
    printf("a = %d,b =%d",a,b);
}


int main()
{
        test();
//    testasm();
    printf("Hello World!\n");
    return 0;
}
