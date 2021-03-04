#define _CRT_SECURE_NO_WARNINGS 1

//使用assert
//尽量使用const
//养成良好的代码风格
//添加必要的注释
//避免编码的陷阱

#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)//char*返回初始dest的首地址//const将char* src修饰为常变量不可被更改
{
	char* ret = dest;
	assert(dest != NULL);//assert“断言”，判断条件并报错。
	assert(src != NULL);
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "##########";
	char arr2[] = "lizi";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}