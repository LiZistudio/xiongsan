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


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//
//	}
//	/*int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}*/
//	/*for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//�����ַ������ܱ��޸�
//	//ָ�����顪�����ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�롪��ָ������
//	//int* p3;//����ָ�롪��ָ������
//	//char* p4;//�ַ�ָ�롪��ָ���ַ�
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ�������ַ,pa��������ָ��
//	
//	return 0;
//}



//void test(int arr[])
//{}						//ok
//void test(int arr[10])
//{}						//ok
//void test(int* arr)
//{}						//ok
//
//void test2(int* arr[])
//{}						//ok
//void test2(int** arr)
//{}						//ok
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���鴫��
//
//	return 0;
//}


//����ָ��
//int Add(int a,int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%p\n", &Add);
//	printf("%d", ret);*/
//	int (*pa)(int , int) = Add;
//	printf("%d\n", (*pa)(2, 3));==printf("%d\n", pa(2, 3));==printf("%d\n", Add(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main() {
//	void (*p)(char*) = Print;
//	(*p)("����");
//	return 0;
//}

//����1
//(*(void (*)())0)();



//����2
//void (*signal(int, void(*)(int)))(int);


//����ָ������
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int i = 0;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	for ( i = 0;  i < 4;  i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
char* (*pf)(char*, const char*) = my_strcpy;
char* (*pfArr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };

