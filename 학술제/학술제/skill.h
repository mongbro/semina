#ifndef SKILL_H
#define SKILL_H 
#include<stdio.h>

typedef struct skill {
	char name[20];
	char info[200];
	int add_att;
	int add_def;
	int add_hp;
	int add_mp;
	int diff_mp;
	int price;
	int index;
	int ea;
	int num;
}SKILL;

extern SKILL slist[32];
extern SKILL empty_character_slist[1];  //��ų ���� ������ ĳ���� ��ų ĭ�� �̰ɳ־ �ƹ��͵� ���� �Ұ���.

void skill_set();
void skill_choice();
void initial_skill();

//��ų ���� �Լ� ����
void skill_store_choice();
void skill_store_choice_buy();
void skill_store_choice_buy1();
void skill_store_choice_buy2();
void skill_store_choice_buy3();
void s_buy1(int snum);
void s_buy2(int snum);
void s_buy3(int snum);

//��ų �κ��Լ� ����
void skill_inventory_choice();
void skill_inventory1();
void skill_inventory2();
void skill_inventory3();
void skill_equip1(int character, int snum);
void skill_equip2(int character, int snum);
void skill_equip3(int character, int snum);
void skill_inven_info1(int snum);
void skill_inven_info2(int snum);
void skill_inven_info3(int snum);

#endif