// made by ������

#ifndef CHARACTER_H
#define CHARACTER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"skill.h"
#include"item.h"
#include"map.h"
#include"exp.h"

typedef struct charac {
	char name[20];
	ITEM item[2];
	SKILL skill[3];
	int level;						//ĳ���� ����
	int expe;						//ĳ������ ���� ����ġ
	int persent;					//���� ����ġ/Ǯ����ġ
	int fhp;						//�� hp
	int fmp;						//�� mp
	int hp;							//���� hp
	int mp;							//���� mp
	int att;						//������ ���� ������
	int def;						//���ݿ� ���� ���� => def == 10 �϶� att == 100 ������ ������ ���� ������ 99
	int readership;					//������ : ���ݷ� ���� ����
	int noteship;					//�ʱ�� : ���� ���� ����
	int wealth;						//�� : ���� ���� ����      
	int condition;					//0�� ��� �������, 1�ϰ�� �׾�����
	int spare_stat;					//������ �߰�����Ʈ 5
	int armor;						//���ݹ��� ���� Ƚ��
	int turn;						//ĳ���Ͱ� �����̳� ��ų, �������� ����ߴ��� ����
}CHA;

void initial_charac();
void check_exp();
void check_level();

extern CHA clist[3];

#endif