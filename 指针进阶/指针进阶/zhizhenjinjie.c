#define _CRT_SECURE_NO_WARNINGS 1

/*
* context:ָ����ױʼ�;
* time:2021��3��19��22:48:59;
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
//	const char* p = "abcdef";//��abcdef��Ϊ�����ַ���
//	//*p = 'w';//�Ƿ������������ַ������ܱ��ı�
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//����ָ��
//int main()
//{
//	int* p = NULL;//����ָ�롪��ָ�����͵�ָ��
//	char* pc = NULL;//�ַ�ָ�롪��ָ���ַ���ָ��
//	//����ָ�롪��ָ�������ָ�롪���������ĵ�ַ
//	//arr-��Ԫ�صĵ�ַ
//	//&arr[0]������Ԫ�صĵ�ַ
//	//&arr��������ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	//�����P��������ָ��
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