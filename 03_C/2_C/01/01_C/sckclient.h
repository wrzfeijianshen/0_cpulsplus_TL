#pragma once
#ifndef _SCK_CLIENT
#define _SCK_CLIENT

// 函数声明

// 1.客户端环境初始化
int sckClient_init(void **handle);

// 2.客户端发送报文
int sckClient_send(void *handle,char *data, int datalen);

// 3.客户端接受报文
int sckClient_rev(void *handle,unsigned char *out,int *outlen);

// 4.客户端环境释放
int sckClinet_destroy(void *handle);

#endif