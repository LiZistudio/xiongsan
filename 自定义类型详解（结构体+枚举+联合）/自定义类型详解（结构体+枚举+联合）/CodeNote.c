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

#include<stdio.h>

//typedef struct stu
//{
//	char name[10];
//	int age;
//	int num;
//}Stu;
//int main()
//{
//	Stu s1[3] = { {"zhangsan",20,1},{"lisi",30,2},{"wangwu",50,3} };
//	return 0;
//}
//*************************�ṹ���������*********************

 /*typedef struct Node
{
	int data;
	struct Node* next;
}Node;
int main()
{
	Node n2;
	return 0;
}*/
//**************************�ṹ���ڴ����*********************
//������������������������������
//�޸�Ĭ�϶�����
//#pragma pack (8)//���ö�����Ϊ8

//#pragma pack (4)//���ö�����Ϊ4
//typedef struct s {
//	char c1;//������1
//	//�м��˷�7���ֽ�
//	double d;//������8
//}S;
//#pragma pack ()//ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	S s1;
//	printf("%d\n", sizeof(s1));//Ĭ�϶�����Ϊ8ʱ��СΪ16��Ĭ�϶�����Ϊ4ʱ��СΪ12
//
//	return 0;
//}


#include <stddef.h>
typedef struct s {
	char c1;//c1��ƫ����Ϊ0
	int i;//i��ƫ����Ϊ4
	double d;//d��ƫ����Ϊ8�����Ͼ�Ϊ�����ʼλ�ã�
}S;
int main()
{
	//offsetof();//����ṹ���Ա�������ʼλ�õ�ƫ���� ��
	printf("%d\n", offsetof(struct s, c1));
	printf("%d\n", offsetof(struct s, i));
	printf("%d\n", offsetof(struct s, d));
	return 0;
}