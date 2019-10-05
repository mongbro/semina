// made by 김종은

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
	int level;						//캐릭터 레벨
	int expe;						//캐릭터의 현재 경험치
	int persent;					//현재 경험치/풀경험치
	int fhp;						//총 hp
	int fmp;						//총 mp
	int hp;							//남은 hp
	int mp;							//남은 mp
	int att;						//실제로 들어가는 데미지
	int def;						//공격에 대한 방어력 => def == 10 일때 att == 100 공격을 받으면 실제 데미지 99
	int readership;					//리더십 : 공격력 관련 스텟
	int noteship;					//필기력 : 방어력 관련 스텟
	int wealth;						//부 : 마나 관련 스텟      
	int condition;				//0일 경우 살아있음, 1일경우 죽어있음
	int spare_stat;
}CHA;

void initial_charac(CHA clist[3], SKILL slist[30]);
void check_equip_p();
void check_equip_m();
void check_exp();

CHA clist[3] = { 0 };

void initial_charac(CHA clist[3], SKILL slist[30]) {
	skill_set();
	initial_exp();
	strcpy(clist[0].name, "조장");
	strcpy(clist[1].name, "서기");
	strcpy(clist[2].name, "지갑");
	for (int i = 0; i < 3; i++) {
		clist[i].level = 1;
		clist[i].fhp = 100;
		clist[i].fmp = 100;
		clist[i].hp = clist[i].fhp;
		clist[i].mp = clist[i].fmp;
		clist[i].att = 10;
		clist[i].def = 10;
		clist[i].readership = 10;
		clist[i].noteship = 10;
		clist[i].wealth = 10;
		clist[i].condition = 0;
		clist[i].spare_stat = 0;
	}
	clist[0].skill[0] = slist[0];
	clist[0].skill[1] = slist[1];
	clist[0].skill[2] = slist[2];

	clist[0].item[0] = ilist[10];
	clist[1].item[0] = ilist[20];
	clist[2].item[0] = ilist[30];
}

void check_equip_p() {
	for (int i = 0; i < 3; i++) {
		if (clist[i].item[0].num != 0) {
			clist[i].fhp += clist[i].item[0].add_hp;
			clist[i].fmp += clist[i].item[0].add_mp;
			clist[i].hp = clist[i].fhp;
			clist[i].mp = clist[i].fmp;
			clist[i].noteship += clist[i].item[0].add_noteship;
			clist[i].readership += clist[i].item[0].add_readership;
			clist[i].wealth += clist[i].item[0].add_wealth;
		}
		if (clist[i].item[1].num != 0) {
			clist[i].fhp += clist[i].item[1].add_hp;
			clist[i].fmp += clist[i].item[1].add_mp;
			clist[i].hp = clist[i].fhp;
			clist[i].mp = clist[i].fmp;
			clist[i].noteship += clist[i].item[1].add_noteship;
			clist[i].readership += clist[i].item[1].add_readership;
			clist[i].wealth += clist[i].item[1].add_wealth;
		}
	}
}

void check_exp() {
	clist[0].persent = clist[0].expe / (fexp[clist[0].level] / 100);
	clist[1].persent = clist[1].expe / (fexp[clist[1].level] / 100);
	clist[2].persent = clist[2].expe / (fexp[clist[2].level] / 100);
}

void check_equip_m() {
	for (int i = 0; i < 3; i++) {
		if (clist[i].item[0].num != 0) {
			clist[i].fhp -= clist[i].item[0].add_hp;
			clist[i].fmp -= clist[i].item[0].add_mp;
			clist[i].hp = clist[i].fhp;
			clist[i].mp = clist[i].fmp;
			clist[i].noteship -= clist[i].item[0].add_noteship;
			clist[i].readership -= clist[i].item[0].add_readership;
			clist[i].wealth -= clist[i].item[0].add_wealth;
		}
		if (clist[i].item[1].num != 0) {
			clist[i].fhp -= clist[i].item[1].add_hp;
			clist[i].fmp -= clist[i].item[1].add_mp;
			clist[i].hp = clist[i].fhp;
			clist[i].mp = clist[i].fmp;
			clist[i].noteship -= clist[i].item[1].add_noteship;
			clist[i].readership -= clist[i].item[1].add_readership;
			clist[i].wealth -= clist[i].item[1].add_wealth;
		}
	}
}