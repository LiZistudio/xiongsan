#define _CRT_SECURE_NO_WARNINGS 1

/*
* context:指针进阶笔记;
* time:2021年3月19日22:48:59;
* author:lizi;
*/

#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//“abcdef”为常量字符串
//	//*p = 'w';//非法操作，常量字符串不能被改变
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//数组指针
//int main()
//{
//	int* p = NULL;//整型指针——指向整型的指针
//	char* pc = NULL;//字符指针——指向字符的指针
//	//数组指针——指向数组的指针——存放数组的地址
//	//arr-首元素的地址
//	//&arr[0]——首元素的地址
//	//&arr——数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	//上面的P就是数组指针
//
//	return 0;
//}
//int main() {
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//
//	}
//	/*int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}*/
//	/*for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//常量字符串不能被修改
//	//指针数组——存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针——指向数组
//	//int* p3;//整型指针——指向整型
//	//char* p4;//字符指针——指向字符
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组地址,pa就是数组指针
//	
//	return 0;
//}



//void test(int arr[])
//{}						//ok
//void test(int arr[10])
//{}						//ok
//void test(int* arr)
//{}						//ok
//
//void test2(int* arr[])
//{}						//ok
//void test2(int** arr)
//{}						//ok
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//
//	return 0;
//}


//函数指针
//int Add(int a,int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%p\n", &Add);
//	printf("%d", ret);*/
//	int (*pa)(int , int) = Add;
//	printf("%d\n", (*pa)(2, 3));==printf("%d\n", pa(2, 3));==printf("%d\n", Add(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main() {
//	void (*p)(char*) = Print;
//	(*p)("哈哈");
//	return 0;
//}

//代码1
//(*(void (*)())0)();



//代码2
//void (*signal(int, void(*)(int)))(int);


//函数指针数组
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int i = 0;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	for ( i = 0;  i < 4;  i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
char* (*pf)(char*, const char*) = my_strcpy;
char* (*pfArr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };

