#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
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

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//��������ʽд���ļ�
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//********************д�ļ�******************
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ�
//	fputc('a', pfWrite);
//	fputc('b', pfWrite);
//	fputc('c', pfWrite);
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//********************���ļ�********************
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ļ�
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%c", fgetc(pfRead));
//	}
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	int num=fgetc(stdin);
//	fputc(num,stdout);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("%c\n", getchar(i));
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	struct S s = { "����",23,60 };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf == NULL;
//	FILE* p = fopen("text.txt", "rb");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, p);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//�ļ�ָ�붨λ
int main()
{
	char arr[10] = "1 2 3 4 5";
	FILE* pf = fopen("text.txt", "w");
	if (pf==NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fwrite(arr, 1, 10, pf);
	fclose(pf);
	pf = NULL;
	FILE* p = fopen("text.txt", "r");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//��λ�ļ�ָ��
	fseek(p, -2, SEEK_END);
	//��ȡ�ļ�
	char ch = fgetc(p);
	printf("%c\n", ch);
	fclose(p);
	p = NULL;
	return 0;
}
