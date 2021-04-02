#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//*****************************************strcat()"追加"***********************************
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//**********函数实现**************************************
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到目的字符串的'\0'
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
