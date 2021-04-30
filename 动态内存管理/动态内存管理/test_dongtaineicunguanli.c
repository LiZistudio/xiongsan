#define _CRT_SECURE_NO_WARNINGS 1

//  ____                      ____
///	|	|                  / |    |
//|	|	|                  | |____|
//|	|	|                  |/____/
//|	|	|                   ______
//|	|	|                 / |     |  
//|	|	|______________   | |     |  
//|	|__________________|  | |     |
//|/___________________/  | |_____|
//                        | /_____/	
//

#include <stdio.h>

//struct Stu
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	struct Stu s[30];//存放30个struct Stu类型的数据
//	//20浪费
//	//50不够
//	//所以需要动态内存分配
//
//	return 0;
//}

//c语言是可以创建变长数组——c99中增加了
//int n=0;
//struct Stu s[n];
//vs中不支持
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//向内存申请10个整型的空间
//	//int* p = (int*)malloc(INT_MAX);//Not enough space
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p==NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时应该还给操作系统
//	free(p);//主动回收
//	p = NULL;//free完之后的p仍然能访问原来的地址，但p已经被断开，所指向的内存空间被释放——野指针，所以将其置空是最安全的做法
//
//	return 0;
//}
//****************************calloc*********************
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p + i));
//		}
//	}
//	//释放空间
//	free(p);
// p=NULL;
//	return 0;
//}
//*************************realloc**************************
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//只是在使用malloc开辟的20个字节的空间
//	//假设到这里20个字节不能满足使用了
//	//我们希望能够有40个字节的空间
//	//这里就可以用realloc来调整动态开辟的内存了
//	int* rp = (int*)realloc(p, 40);
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(rp + i));
//	}
//	free(rp);
//	rp = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL。
//	//一定要先进行安全检查
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//**************************realloc也能实现malloc的功能****************************
//int main()
//{
//	/*int*p=(int*)malloc(40);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int* p2=realloc(memccpy,80);
//	if (p2!=NULL)
//	{
//		p = p2;
//	}*/
//	int* p = realloc(NULL, 40);//等价于malloc
//
//	return 0;
//}
//****************************使用free释放一块动态内存的一部分（通常出现在p--地址被改变的时候）*************
 
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*p++ = i;//此程序运行时会崩溃，因为p--地址已经发生了变化，应该写成*（p+i）=i;
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}
 
//*************对同一块动态内存多次释放****************
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放空间
//	free(p);//应该在free之后及时置空，避免多次释放。置空之后free（p）不起作用;
//	//...
//	free(p);
//
//	return 0;
//}
//********************动态开辟的内存空间忘记释放（内存泄漏）*********************



//*************************************返回栈空间地址的问题*********************************
//char* GetMemory(void)
//{
//	static char p[] = "hello world!";//静态区
//	return p;
//}								//该函数结束后p所指向的地址被销毁，所以str是非法访问,但是用static修饰之后其生命周期被改变，所以可以正常输出。
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	test();
//
//	return 0;
//}


//**************************free之后一定要置空*****************************
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str!=NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//**********************************柔性数组(C99中，结构中的最后一个元素允许是未知大小的数组，这就叫做柔型数组成员)*******************************

//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
// {
//	int n;
//	int arr[0];//未知大小--柔性数组成员--数组大小是可以调整的
// };
//
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	//不够用就调整
//	struct S* ptr = realloc(ps, 44);
//	if (ptr!=NULL)
//	{
//		ps = ptr;
//	}
//	for ( i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放空间
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//另一种方法实现数组空间的动态调整--非柔性数组--但是柔性数组的方法更优
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 40);
//	if (ptr!=NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int arr[0];
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}

