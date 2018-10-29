#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "sckclient.h"

// 断层思维 : A人提供一套接口,B人不用关心接口是怎么写的。不用关心别人怎么实现，关心功能。

// 1.客户端环境初始化
// 2.客户端发送报文
// 3.客户端接受报文
// 4.客户端环境释放

// c项目中的一套接口，业务模型: 客户端发送报文
// 1.接口的封装和设计
// 1.1 接口的api使用能力
// 1.2 接口api的查找能力
// 1.3 接口api的实现能力

// 项目经理给你大批量财富库，慢慢的把业务模型熟悉起来，进行编码
// 技术都是一招鲜吃遍天，技术都是一层窗户纸，一捅就破

// 对资料和时间空间的管理,多年前的资料整理，文档，git
// 工作经验、记录、积累-->
// 临界点，达到一定境界，事物认知规律。

// c语言：学习、理解、应用、做项目
// 多动手


//编译命令  gcc 01_.c sckclient_demo.c -o main.exe -I ./
int main(int argc, char const *argv[])
{
    printf("main end\n");
    FILE *fp = NULL;
    int ret = 0;
    ret = sckClient_init(NULL);

    return 0;
}
