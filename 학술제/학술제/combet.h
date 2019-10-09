// made by ������

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"map.h"
#include"menu.h"
#include"exp.h"


void damage_character_to_monster(CHA clist[3], MON mlist[3], int cnum, int mnum, int snum);			//ĳ���͹迭, ���͹迭, ĳ���͹�ȣ, ���͹�ȣ, ��ų��ȣ
void damage_monster_to_character(CHA clist[3], MON mlist[3], int cnum, int mnum);
int choice_monster_to_character();
int check_exter(CHA clist[3], MON mlist[3]);
int check_exter_boss(CHA clist[3], MON mlist[3], int stage);
void kill_monster(CHA clist[3], MON mlist[3], STAGE stlist[6], int cnum, int stnum);
void kill_character(CHA clist[3], MON mlist[3], STAGE stlist[6], int mnum);

int hit_damage;

void damage_character_to_monster(CHA clist[3], MON mlist[3], int cnum, int mnum, int snum) {
	if (mlist[mnum].def >= 10)
		mlist[mnum].hp = mlist[mnum].hp - (clist[cnum].att + clist[cnum].skill[snum].add_att + (clist[cnum].readership / 10) - (mlist[mnum].def / 10));
	else
		mlist[mnum].hp = mlist[mnum].hp - (clist[cnum].att + clist[cnum].skill[snum].add_att - (mlist[mnum].def / 10));
	if (clist[cnum].readership >= 10)
		hit_damage = (clist[cnum].att + clist[cnum].skill[snum].add_att) * clist[cnum].readership / 10 - (mlist[mnum].def / 10);
	else
		hit_damage = (clist[cnum].att + clist[cnum].skill[snum].add_att - (mlist[mnum].def / 10));
}

void damage_monster_to_character(CHA clist[3], MON mlist[3], int cnum, int mnum) {
	extern void stun(int mnum);
	if (mlist[mnum].is_stun == 0) {
		if (clist[cnum].armor == 0) {
			clist[cnum].hp = clist[cnum].hp - (mlist[mnum].att - (clist[cnum].def / 10));
			hit_damage = mlist[mnum].att - (clist[cnum].def / 10);
		}
		if (clist[cnum].armor > 0) {
			clist[cnum].armor--;
			hit_damage = 0;
		}
	}
	if (mlist[mnum].is_stun == 1) {
		stun(mnum);
	}
}

int choice_monster_to_character() {
	srand((unsigned)time(NULL));

	if (clist[0].hp > 0 && clist[1].hp > 0 && clist[2].hp > 0) {
		int n = rand() % 10;			//n�� 6���� �۰ų� ������ cnum1 �� ��Ŀ�� ����
		int m = rand() % 2;				//�ƴҰ�� m�� 0�϶� cnum0 �� ���� ����, m�� 1�϶� cnum2 �� ���� ����
		if (n <= 6)
			return 1;
		else {
			if (m == 0)
				return 0;
			else
				return 2;
		}
	}
	if (clist[0].hp > 0 && clist[1].hp > 0 && clist[2].hp <= 0) {
		int n = rand() % 10;			//n�� 6���� �۰ų� ������ cnum1 �� ��Ŀ�� ����
		if (n <= 6)
			return 1;
		else
			return 0;
	}
	if (clist[0].hp <= 0 && clist[1].hp > 0 && clist[2].hp > 0) {
		int n = rand() % 10;			//n�� 6���� �۰ų� ������ cnum1 �� ��Ŀ�� ����
		if (n <= 6)
			return 1;
		else
			return 2;
	}
	if (clist[0].hp > 0 && clist[1].hp > 0 && clist[2].hp > 0) {
		int m = rand() % 2;				//�ƴҰ�� m�� 0�϶� cnum0 �� ���� ����, m�� 1�϶� cnum2 �� ���� ����
		if (m == 0)
			return 0;
		else
			return 2;
	}
	if (clist[0].hp > 0 && clist[1].hp <= 0 && clist[2].hp <= 0) {
		return 0;
	}
	if (clist[0].hp <= 0 && clist[1].hp > 0 && clist[2].hp <= 0) {
		return 1;
	}
	if (clist[0].hp <= 0 && clist[1].hp <= 0 && clist[2].hp > 0) {
		return 2;
	}
}



int check_exter(CHA clist[3], MON mlist[3]) {
	int die_character = 0, die_monster = 0;
	for (int i = 0; i < 3; i++) {
		if (clist[i].hp <= 0)
			die_character++;
	}
	for (int i = 0; i < 3; i++) {
		if (mlist[i].hp <= 0)
			die_monster++;
	}
	if (die_character == 3)
		return 1;								//ĳ���Ͱ� ��� �׾�����
	else if (die_monster == 3) 
		return 2;								//���Ͱ� ��� �׾�����
	else
		return 0;								//���� ��� �����ڰ� ������
}


int check_exter_boss(CHA clist[3], MON mlist[3], int stage) {
	int die_character = 0, die_monster = 0;
	for (int i = 0; i < 3; i++) {
		if (clist[i].hp <= 0)
			die_character++;
	}
	for (int i = 0; i < 3; i++) {
		if (mlist[i].hp <= 0)
			die_monster++;
	}
	if (die_character == 3)
		return 1;								//ĳ���Ͱ� ��� �׾�����
	else if (die_monster == 3) {
		stlist[stage].is_clear = 1;
		return 2;								//���Ͱ� ��� �׾�����
	}
	else
		return 0;								//���� ��� �����ڰ� ������
}




void kill_monster(CHA clist[3], MON mlist[3], STAGE stlist[6], int cnum, int stnum) {
	srand((unsigned)time(NULL));
	int add_gold = rand() % 10 + 1;
	int chance_drop = rand() % 3;		//33%Ȯ���� ��� => 0�϶� ���
	int item_num;
	for (int i = 0; i < 3; i++) {
		if (mlist[i].hp <= 0 && mlist[i].condition == 0) {
			printf("\n\n  %s��(��) �׾����ϴ�!!            %s��(��) %d�� ��带 ����߽��ϴ�!!\n", mlist[i].name, mlist[i].name, add_gold);
			gold += add_gold;
			if (chance_drop == 0) {
				item_num = rand() % stlist[stnum].num_item;
				printf("  %s��(��) ȹ��!!\n", stlist[stnum].drop_item[item_num].name);
				for (int j = 0; j < 30; j++) {
					if (ilist[j].name != 0)
						ilist[j] = aitem[stlist[stnum].drop_item[item_num].num];
					else
						ilist[j].ea++;
				}
			}
			clist[cnum].expe += mlist[i].mexp;
			mlist[i].condition = 1;
		}
	}
}

void kill_character(CHA clist[3], MON mlist[3], STAGE stlist[6], int mnum) {
	for (int i = 0; i < 3; i++) {
		if (clist[i].hp <= 0 && clist[i].condition == 0) {
			printf("\n\n  %s��(��) �׾����ϴ�!!", clist[i].name);
		}
		clist[i].condition = 1;
	}
}

void prologue_kill_monster(CHA clist[3], MON mlist[3], STAGE stlist[6], int cnum, int stnum) {
	srand((unsigned)time(NULL));
	int add_gold = rand() % 10 + 1;
	int chance_drop = 0;		//100%Ȯ���� ��� => 0�϶� ���
	int item_num;
	for (int i = 0; i < 3; i++) {
		if (mlist[i].hp <= 0 && mlist[i].condition == 0) {
			printf("\n\n  %s��(��) �׾����ϴ�!!                                        %s��(��) %d�� ��带 ����߽��ϴ�!!\n\n", mlist[i].name, mlist[i].name, add_gold);
			gold += add_gold;
			if (chance_drop == 0) {
				item_num = rand() % stlist[stnum].num_item;
				printf("  %s��(��) ȹ��!!\n", stlist[stnum].drop_item[item_num].name);
				
						ilist[stlist[stnum].drop_item[item_num].num].ea++;
				
			}
			clist[cnum].expe += mlist[i].mexp;
			mlist[i].condition = 1;
		}
	}
}