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


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	struct S s = { "张三",23,60 };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf == NULL;
//	FILE* p = fopen("text.txt", "rb");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, p);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//文件指针定位
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
	//定位文件指针
	fseek(p, -2, SEEK_END);
	//读取文件
	char ch = fgetc(p);
	printf("%c\n", ch);
	fclose(p);
	p = NULL;
	return 0;
}
