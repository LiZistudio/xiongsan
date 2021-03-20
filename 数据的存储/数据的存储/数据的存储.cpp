/*
* time:2021年3月12日20:02:44;
* author:lizi;
* context:数据的存储;
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<iostream>
using namespace std;

//int check_sys()
//{
//	int a = 1;
//	/*char* p =*/ return *(char*)&a;
//	/*if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//	/*return *p;*/
//}
////当前机器的大小端字节序的判断
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1为小端，0为大端
//	int ret = check_sys();
//	if (ret==0){
//		printf("大端\n");
//	}
//	else{
//		printf("小端\n");
//	}
//	return 0;  
//}
// 
// 
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);//结果为 -1 -1 255 //其中有整型提升
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);//%d打印十进制的有符号数字
//	//结果为4294967168//%u打印十进制的无符号数字
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//-10
//	return 0;
//}

//int main() {
//    unsigned int i;//无符号数且条件是i>=0，所以会死循环
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 9; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//255
//	return 0;
//}
//注意：有符号的char类型的范围是：-128~127；
//		无符号的char类型的范围是：0~255；

