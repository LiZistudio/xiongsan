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
	printf("****1.����*********2.ɾ��**********\n");
	printf("****3.��ѯ*********4.�޸�**********\n");
	printf("****5.��ʾ*********6.����**********\n");
	printf("****0.�˳�*********7.��չ**********\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼���������1000��Ԫ�ص������size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	//
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case ����:
			AddContact(&con);
			break;
		case ɾ��:
			DelContact(&con);
			break;
		case ��ѯ:
			SearchContact(&con);
			break;
		case �޸�:
			ModdifyContact(&con);
			break;
		case ��ʾ:
			ShwoContact(&con);
			break;
		case ����:
			SortContact(&con);
			break;
		case �˳�:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (input);
	return 0;
}
