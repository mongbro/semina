#pragma once
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
	EXP exp[11];
	int fhp;						//�� hp
	int fmp;						//�� mp
	int hp;							//���� hp
	int mp;							//���� mp
	int att;						//������ ���� ������
	int def;						//���ݿ� ���� ���� => def == 10 �϶� att == 100 ������ ������ ���� ������ 99
	int readership;					//������ : ���ݷ� ���� ����
	int noteship;					//�ʱ�� : ���� ���� ����
	int wealth;						//�� : ���� ���� ����      
	int damage;						// ���� => (double)(att * (readership / 10))
	int protect;					// ���� => (double)(def * (noteship / 10))
	int spare_stat;
}CHA;

void initial_charac(CHA clist[3], SKILL slist[30]);

CHA clist[3] = { 0 };

void initial_charac(CHA clist[3], SKILL slist[30]) {
	skill_set();
	strcpy(clist[0].name, "����");
	strcpy(clist[1].name, "����");
	strcpy(clist[2].name, "����");
	for (int i = 0; i < 3; i++) {
		clist[i].exp->level = 1;
		clist[i].exp->exp = 0;
		clist[i].fhp = 100;
		clist[i].fmp = 100;
		clist[i].hp = 100;
		clist[i].mp = 100;
		clist[i].att = 10;
		clist[i].def = 10;
		clist[i].readership = rand() % 5 + 5;
		clist[i].noteship = rand() % 5 + 5;
		clist[i].wealth = rand() % 5 + 5;
		if (clist[i].readership >= 10)
			clist[i].damage = clist[i].att * clist[i].readership / 10;
		else
			clist[i].damage = clist[i].att;
		if (clist[i].noteship >= 10)
			clist[i].protect = clist[i].def * clist[i].noteship / 10;
		else
			clist[i].protect = clist[i].def;
		clist[i].spare_stat = 0;
	}
	clist[0].skill[0] = slist[0];
	clist[0].skill[1] = slist[1];
	clist[0].skill[2] = slist[2];
}