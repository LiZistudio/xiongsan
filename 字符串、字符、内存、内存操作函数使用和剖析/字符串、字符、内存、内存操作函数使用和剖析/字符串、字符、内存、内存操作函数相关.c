#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//*****************************************strcat()"字符串追加"***********************************
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

//**************************************字符串比较strcmp()******************************************
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = 0;
//	ret = strcmp(p1, p2);
//	//printf("%d", ret);//打印为-1——>则比较的是字符的asll码值的大小
//	if (ret>0)
//	{
//		printf("p1>p2");
//	}
//	else if (ret==0)
//	{
//		printf("p1=p2");
//	}
//	else
//	{
//		printf("p1<p2");
//	}
//	return 0;
//}

//************************************函数实现*********************************
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		return 0;//相等
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}
//int main()
//{
//	char* p1 = "abcde";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("p1>p2");
//	}
//		else if (ret==0)
//	{
//		printf("p1=p2");
//	}
//	else
//	{
//		printf("p1<p2");
//	}
//	return 0;
//}
// strcpy.strcat.strcmp长度不受限制——>不安全
//int main()
//{
//	char arr1 = "hello";
//	char arr2 = "hello world";    
//	strcpy(arr1, arr2);//非法操作
//	return 0;
//}

//*********************************strncpy()****************************************

//int main()
//{
//	char arr1[10] = "hello";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);
//
//	return 0;
//}

//****************************函数实现**********************************
//int main()
//{
//
//	return 0;
//}

//***********************strncat();“按个数追加”*************************************
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}

//**********************strncmp();"有限制的字符串比较"******************************
//int strncmp(const char* string1, const char* string2, size_t count);

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdqwer";
//	int ret=strncmp(p1, p2, 5);
//	printf("%d", ret);
//	return 0;
//}

//************************************strstr();查找字符串***********************************************

int main()
{

	return 0;
}