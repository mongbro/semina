// made by 김종은

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
	int condition;					//0일 경우 살아있음, 1일경우 죽어있음
	int spare_stat;					//렙업시 추가포인트 5
	int armor;						//공격무시 남은 횟수
	int turn;						//캐릭터가 공격이나 스킬, 아이템을 사용했는지 여부
}CHA;

void initial_charac();
void check_exp();
void check_level();

extern CHA clist[3];

#endif