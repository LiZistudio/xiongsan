#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//描述一个学生的一些数据
//名字
//年龄
//电话
//性别
//struct-结构体关键字 Stu-结构体标签 struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量(变量列表)（变量列表尽量少的使用————全局变量尽量少的使用）

// typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu S = { "李子",23,12345678915,"男" };//局部结构体变量
//	struct Stu* ps = &S;
//	Stu s1 = { "李子",23,12345678915,"男" };
//	Stu* p = &s1;
//	printf("%d %s", ps->age,p->name);
//	return 0;
//}

//结构体的嵌套定义、初始化及传参（传值与传址（传址更好））
//typedef struct S
//{
//	char arr[10];
//	int n;
//	double f;
//}S;
//typedef struct M
//{
//	char arr[11];
//	int a;
//	double b;
//	S s;
//}M;
//void print1(M m)
//{
//	printf("%s\n", m.arr);
//	printf("%lf\n", m.s.f);
//	printf("%d\n", m.a);
//}
//void print2(M* m)
//{
//	printf("%s\n", m->arr);
//	printf("%lf\n", m->s.f);
//	printf("%d\n", m->a);
//}
//int main()
//{
//	M my = { "hello lizi",12,3.14,{"你好",66,2.71} };
//	S s;
//	print1(my);
//	print2(&my);
//	return 0;
//}