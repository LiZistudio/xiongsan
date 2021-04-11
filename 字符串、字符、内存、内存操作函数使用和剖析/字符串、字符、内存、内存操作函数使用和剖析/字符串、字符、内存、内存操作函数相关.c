#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//*****************************************strcat()"�ַ���׷��"***********************************
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//**********����ʵ��**************************************
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.׷��
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

//**************************************�ַ����Ƚ�strcmp()******************************************
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = 0;
//	ret = strcmp(p1, p2);
//	//printf("%d", ret);//��ӡΪ-1����>��Ƚϵ����ַ���asll��ֵ�Ĵ�С
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

//************************************����ʵ��*********************************
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		return 0;//���
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
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
// strcpy.strcat.strcmp���Ȳ������ơ���>����ȫ
//int main()
//{
//	char arr1 = "hello";
//	char arr2 = "hello world";    
//	strcpy(arr1, arr2);//�Ƿ�����
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

//****************************����ʵ��**********************************
//int main()
//{
//
//	return 0;
//}

//***********************strncat();��������׷�ӡ�*************************************
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}

//**********************strncmp();"�����Ƶ��ַ����Ƚ�"******************************
//int strncmp(const char* string1, const char* string2, size_t count);

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdqwer";
//	int ret=strncmp(p1, p2, 5);
//	printf("%d", ret);
//	return 0;
//}

//************************************strstr();�����ַ���***********************************************

//ģ��ʵ��strstr������
//ǰ�����ܣ�����
char* MyStrstr(const char* p1,const char* p2)
{
	assert(p1 && p2);//ʹ��assert��������ͷ�ļ�#include <assert.h>
	char* s1 = p1;
	char* s2 = p2;
	char* start = p1;
	if (*p2=='\0')
	{
		return p1;
	}
	while (*start)
	{
		s1 = start;
		s2 = p2;
		while ((*s1!='\0')&&(*s2!='\0')&&(*s1==*s2))
		{
			s1++;
			s2++;
		}
		if (*s2=='\0')
		{
			return start;//�ҵ��Ӵ�
		}
		start++;
	}

	return NULL;//�Ҳ����Ӵ�
}

int main()
{
	char* arr1 = "hello wworlddef";
	char* arr2 = "world";
	char* ret1 = strstr(arr1, arr2);
	char* ret2 = MyStrstr(arr1, arr2);
	if (ret1==NULL)
	{
		printf("�Ӵ�������");
	}
	else
	{
		printf("%s\n", ret1);
		printf("%s\n", ret2);
	}
	return 0;
}