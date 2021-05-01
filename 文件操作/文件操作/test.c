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
//	FILE* pf = fopen("text.txt", "wb");//二进制形式写入文件
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//********************写文件******************
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件
//	fputc('a', pfWrite);
//	fputc('b', pfWrite);
//	fputc('c', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//********************读文件********************
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//读文件
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%c", fgetc(pfRead));
//	}
//	//关闭文件
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

