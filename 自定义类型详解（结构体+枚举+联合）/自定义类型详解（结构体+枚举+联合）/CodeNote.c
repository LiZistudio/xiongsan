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
//*************************结构体的自引用*********************

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
//**************************结构体内存对齐*********************
//对齐数不啦不啦不啦。。。。。。
//修改默认对齐数
//#pragma pack (8)//设置对齐数为8

//#pragma pack (4)//设置对齐数为4
//typedef struct s {
//	char c1;//对齐数1
//	//中间浪费7个字节
//	double d;//对齐数8
//}S;
//#pragma pack ()//取消设置的默认对齐数
//int main()
//{
//	S s1;
//	printf("%d\n", sizeof(s1));//默认对齐数为8时大小为16，默认对齐数为4时大小为12
//
//	return 0;
//}


//#include <stddef.h>
//typedef struct s {
//	char c1;//c1的偏移量为0
//	int i;//i的偏移量为4
//	double d;//d的偏移量为8（以上均为相对起始位置）
//}S;
//int main()
//{
//	//offsetof();//计算结构体成员相对于起始位置的偏移量 宏
//	printf("%d\n", offsetof(struct s, c1));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(S, d));
//	return 0;
//}

//*******************************************************结构体传参***********************************************************

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
//*******************************位段********************************
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

//****************************枚举************************************

//enum Sex//枚举类型
//{
//	//枚举的可能取值
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

//*****************************枚举的优点*********************************

//enum color
//{
//	red,
//	yellow,
//	blue
//};
//
////c语言源代码————>预编译—————>编译——————>链接———————>可执行程序
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

//*********************联合********************
//联合也叫联合体或者共用体

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

//****************判断大小端***************

//int main()
//{
//	int a = 1;
//	if (1==*(char*)&a)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	//int a = 0x11223344;
//	//讨论一个数据放在内存中的字节顺序
//	//大小端字节序问题
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
