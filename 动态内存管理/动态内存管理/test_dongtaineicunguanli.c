#define _CRT_SECURE_NO_WARNINGS 1

//	____                      ____
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
//	struct Stu s[30];//���30��struct Stu���͵�����
//	//20�˷�
//	//50����
//	//������Ҫ��̬�ڴ����
//
//	return 0;
//}

//c�����ǿ��Դ����䳤���顪��c99��������
//int n=0;
//struct Stu s[n];
//vs�в�֧��
//#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	//int* p = (int*)malloc(INT_MAX);//Not enough space
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p==NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ��ʱӦ�û�������ϵͳ
//	free(p);//��������
//	p = NULL;//free��֮���p��Ȼ�ܷ���ԭ���ĵ�ַ����p�Ѿ����Ͽ�����ָ����ڴ�ռ䱻�ͷš���Ұָ�룬���Խ����ÿ����ȫ������
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
//	//�ͷſռ�
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
//	//ֻ����ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//���赽����20���ֽڲ�������ʹ����
//	//����ϣ���ܹ���40���ֽڵĿռ�
//	//����Ϳ�����realloc��������̬���ٵ��ڴ���
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
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL��
//	//һ��Ҫ�Ƚ��а�ȫ���
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
//reallocҲ��ʵ��malloc�Ĺ���**********
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
//	int* p = realloc(NULL, 40);//�ȼ���malloc
//
//	return 0;
//}
//****************************ʹ��free�ͷ�һ�鶯̬�ڴ��һ���֣�ͨ��������p--��ַ���ı��ʱ��*************
// 
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
//		*p++ = i;//�˳�������ʱ���������Ϊp--��ַ�Ѿ������˱仯��Ӧ��д��*��p+i��=i;
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}
// 
//*************��ͬһ�鶯̬�ڴ����ͷ�****************
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷſռ�
//	free(p);//Ӧ����free֮��ʱ�ÿգ��������ͷš��ÿ�֮��free��p����������;
//	//...
//	free(p);
//
//	return 0;
//}
//********************��̬���ٵ��ڴ�ռ������ͷţ��ڴ�й©��*********************


