// made by ������ & ������

#ifndef MONSTER_H
#define MONSTER_H
#include<stdio.h>

typedef struct monster {
	char name[20];
	int fhp;			//�� hp
	int hp;			//���� hp
	int att;
	int def;
	int condition;				//0�� ��� �������, 1�ϰ�� �׾�����
	int mexp;
	int is_stun;
	int turn;
}MON;

extern MON mlist[3];
extern MON empty_mlist[3];

void prologue_monster();
void stage1_1_monster();
void stage1_2_monster();
void stage1_3_monster();
void stage1_B_monster();
void stage2_1_monster();
void stage2_2_monster();
void stage2_3_monster();
void stage2_4_monster();
void stage2_B_monster();
void stage3_1_monster();
void stage3_2_monster();
void stage3_3_monster();
void stage3_B_monster();
void stage4_1_monster();
void stage4_2_monster();
void stage4_3_monster();
void stage4_4_monster();
void stage4_B_monster();

#endif