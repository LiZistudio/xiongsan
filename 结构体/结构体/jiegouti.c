#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�
//struct-�ṹ��ؼ��� Stu-�ṹ���ǩ struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����(�����б�)�������б����ٵ�ʹ�á�������ȫ�ֱ��������ٵ�ʹ�ã�

// typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu S = { "����",23,12345678915,"��" };//�ֲ��ṹ�����
//	struct Stu* ps = &S;
//	Stu s1 = { "����",23,12345678915,"��" };
//	Stu* p = &s1;
//	printf("%d %s", ps->age,p->name);
//	return 0;
//}

//�ṹ���Ƕ�׶��塢��ʼ�������Σ���ֵ�봫ַ����ַ���ã���
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
//	M my = { "hello lizi",12,3.14,{"���",66,2.71} };
//	S s;
//	print1(my);
//	print2(&my);
//	return 0;
//}