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
int main()
{
	//���ڴ�����10�����͵Ŀռ�
	//int* p = (int*)malloc(INT_MAX);//Not enough space
	int* p = (int*)malloc(10 * sizeof(int));
	if (p==NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for ( i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ��ʱӦ�û�������ϵͳ
	free(p);//��������
	p = NULL;//free��֮���p��Ȼ�ܷ���ԭ���ĵ�ַ����p�Ѿ����Ͽ�����ָ����ڴ�ռ䱻�ͷš���Ұָ�룬���Խ����ÿ����ȫ������

	return 0;
}
