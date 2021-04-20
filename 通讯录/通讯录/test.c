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

#include "tongxun.h"

void menu()
{
	printf("**********************************\n");
	printf("****1.增加*********2.删除**********\n");
	printf("****3.查询*********4.修改**********\n");
	printf("****5.显示*********6.排序**********\n");
	printf("****0.退出*********7.扩展**********\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含1000个元素的数组和size
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 增加:
			AddContact(&con);
			break;
		case 删除:
			DelContact(&con);
			break;
		case 查询:
			SearchContact(&con);
			break;
		case 修改:
			ModdifyContact(&con);
			break;
		case 显示:
			ShwoContact(&con);
			break;
		case 排序:
			SortContact(&con);
			break;
		case 退出:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while (input);
	return 0;
}
