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

