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


//#include <stddef.h>
//typedef struct s {
//	char c1;//c1��ƫ����Ϊ0
//	int i;//i��ƫ����Ϊ4
//	double d;//d��ƫ����Ϊ8�����Ͼ�Ϊ�����ʼλ�ã�
//}S;
//int main()
//{
//	//offsetof();//����ṹ���Ա�������ʼλ�õ�ƫ���� ��
//	printf("%d\n", offsetof(struct s, c1));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(S, d));
//	return 0;
//}

//*******************************************************�ṹ�崫��***********************************************************

//struct s {
//	char name[10];
//	int age;
//	double tmp;
//};
//void Init(struct s* ps)
//{
//	ps->age = 20;
//	ps->name[9] = "lizi";
//	ps->tmp = 37.5;
//}
//int main()
//{
//	//struct s stu = { "lizi",20,37.5 };
//	struct s stu;
//	Init(&stu);
//	/*stu.name[10] = "lizi";
//	stu.age = 20;
//	stu.tmp = 37.5;
//
//	printf("%d\n", stu.age);*/
//	printf("%d\n", stu.age);
//	return 0;
//}
//*******************************λ��********************************
//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	
//	return 0;
//}

//****************************ö��************************************

//enum Sex//ö������
//{
//	//ö�ٵĿ���ȡֵ
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//enum color
//{
//	red,//0
//	yellow,//1
//	green,//2
//	blue=5//3
//};
//int main()
//{
//
//	enum Sex s = MALE;
//	enum color c1 = green;
//	enum color c2 = red;
//	enum color c3 = yellow;
//	enum color c4 = blue;
//	printf("%d %d %d %d\n", c1, c2, c3, c4);
//	return 0;
//}

//*****************************ö�ٵ��ŵ�*********************************

//enum color
//{
//	red,
//	yellow,
//	blue
//};
//
////c����Դ���롪������>Ԥ���롪��������>���롪����������>���ӡ�������������>��ִ�г���
//#define red 1
//#define yellow 2
//#define blue 3
//
//int main()
//{
//	int color = red;
//	
//	return 0;
//}

//*********************����********************
//����Ҳ����������߹�����

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//****************�жϴ�С��***************

//int main()
//{
//	int a = 1;
//	if (1==*(char*)&a)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	//int a = 0x11223344;
//	//����һ�����ݷ����ڴ��е��ֽ�˳��
//	//��С���ֽ�������
//	//
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//int check_sys()
//{
//	union Un u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret=check_sys();
//	if (1==ret)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}
