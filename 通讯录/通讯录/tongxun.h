#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000
#define MAX_name 20
#define MAX_sex 5
#define MAX_tele 12
#define MAX_addr 30

#include <stdio.h>
#include <string.h>

enum menu
{
	�˳�,
	����,
	ɾ��,
	��ѯ,
	�޸�,
	��ʾ,
	����
};
struct PeoInfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};
//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShwoContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ���˵���Ϣ	
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModdifyContact(struct Contact* ps);
//����ͨѶ¼����
void SortContact(struct Contact* ps);