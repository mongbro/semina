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
extern SKILL empty_character_slist[1];  //스킬 장착 해제시 캐릭터 스킬 칸에 이걸넣어서 아무것도 없게 할거임.

void skill_set();
void skill_choice();
void initial_skill();

//스킬 상점 함수 선언
void skill_store_choice();
void skill_store_choice_buy();
void skill_store_choice_buy1();
void skill_store_choice_buy2();
void skill_store_choice_buy3();
void s_buy1(int snum);
void s_buy2(int snum);
void s_buy3(int snum);

//스킬 인벤함수 선언
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