#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <windows.h>

// 1.学知识学到位。

// 站在c++编译器角度上，
// 这三种情况是一样的 : int a[10] ,int a[],int *a;
// 形参 : 写在函数上上形参变量，还是写在函数里的变量，从c++编译器来讲，没有任何的区别的，分配4字节内存。函数形参变量具有对外的属性而已。

void printfArr(int a[])
{
    for(int i = 0; i < 10;i++)
    {
        printf("%d ",a[i]);
    }
}

void printfArr1(int a[],int num)
{
    for(int i = 0; i < num;i++)
    {
        printf("%d ",a[i]);
    }
}

int sortArray(int a[])
{
    int tm;
    for(int i = 0; i < 10 ; i++)// 外层循环
    {

        for(int j = i+1; j < 10;j++)// 内层循环
        {
            if(a[i] > a[j])
            {
                // 交换
                tm = a[i];
                a[i] = a[j];
                a[j] = tm;
            }
        }
    }
    return 0;
}

// int a[10] 编译器会做优化为int *a; int a[10] -->int a[] -->int *a;
// 总结 :函数调用的时候，把数组首地址和数组长度传给被调用的函数才是最正确的做法。
int sortArray2(int a[10])
{
    int tm;
    // 数组作为函数参数，退化为指针。数组大小就获取不了
    printf("%d\n",sizeof(a)/sizeof(*a));
    for(int i = 0; i < 10 ; i++)// 外层循环
    {

        for(int j = i+1; j < 10;j++)// 内层循环
        {
            if(a[i] > a[j])
            {
                // 交换
                tm = a[i];
                a[i] = a[j];
                a[j] = tm;
            }
        }
    }
    return 0;
}

int sortArray3(int a[], int num)
{
    int tm;
    for(int i = 0; i < num ; i++)// 外层循环
    {

        for(int j = i+1; j < num;j++)// 内层循环
        {
            if(a[i] > a[j])
            {
                // 交换
                tm = a[i];
                a[i] = a[j];
                a[j] = tm;
            }
        }
    }
    return 0;
}

//编译命令  gcc 01_.c sckclient_demo.c -o main.exe -I ./
int main(int argc, char const *argv[])
{
    system("chcp 65001");// 设置编码输出为中文
    // 打印数组、排序
    int a[10] = {1,3,45,5,32,7.9,12,17,11};// 定义数组
    printf("%d\n",sizeof(a)/sizeof(*a));

    printf("_排序之前\n");
    //    for(int i = 0; i < 10;i++)
    //    {
    //        printf("%d ",a[i]);
    //    }
    //    printfArr(a);
    printfArr1(a,sizeof(a)/sizeof(*a));
    // 选择排序: 这一行选择最小，放到最前面。
    // 第一个和其后的比较，满足条件交换，再第一个和后面的比较，直到交换完，第一个元素变成最小的
    // 控制外层循环，进行第几趟比较
    // 内层循环 比较
    //    for(int i = 0; i < 10 ; i++)// 外层循环
    //    {
    //        for(int j = i+1; j < 10;j++)// 内层循环
    //        {
    //            if(a[i] > a[j])
    //            {
    //                // 交换
    //                tm = a[i];
    //                a[i] = a[j];
    //                a[j] = tm;
    //            }
    //        }
    //    }
    //    sortArray(a);
    //    sortArray2(a);
    sortArray3(a,sizeof(a)/sizeof(*a));
    // 双层循环的思想
    // 让变量i = 0 不变， j ->1-N
    // 让变量i = 1 不变， j ->1-N
    printf("\n");

    printf("_排序之后\n");
    //    for(int i = 0; i < 10;i++)
    //    {
    //        printf("%d ",a[i]);
    //    }
    //    printfArr(a);
    printfArr1(a,sizeof(a)/sizeof(*a));
    printf("\n");
    printf("main end\n");
    return 0;
}
