#define _CRT_SECURE_NO_WARNINGS 1

//ʹ��assert
//����ʹ��const
//�������õĴ�����
//��ӱ�Ҫ��ע��
//������������

#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)//char*���س�ʼdest���׵�ַ//const��char* src����Ϊ���������ɱ�����
{
	char* ret = dest;
	assert(dest != NULL);//assert�����ԡ����ж�����������
	assert(src != NULL);
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "##########";
	char arr2[] = "lizi";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}