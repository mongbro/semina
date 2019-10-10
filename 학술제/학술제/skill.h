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
	int ea;
	int num;
}SKILL;

extern SKILL slist[32];

void skill_set();
void initial_skill();

#endif