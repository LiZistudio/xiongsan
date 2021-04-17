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


enum Sex//枚举类型
{
	//枚举的可能取值
	MALE,//0
	FEMALE,//1
	SECRET//2
};
enum color
{
	red,//0
	yellow,//1
	green,//2
	blue//3
};
int main()
{
	enum Sex s = MALE;
	enum color c = green;

	return 0;
}
