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




int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));

	}
	/*int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa+i));
	}*/
	/*for ( i = 0; i < 10; i++)
	{
		printf("%d ", (*pa)[i]);
	}*/
	return 0;
}