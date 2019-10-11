// made by 김종은

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"skill.h"
#include"item.h"
#include"map.h"
#include"exp.h"

CHA clist[3] = { 0 };

void initial_charac() {
	skill_set();
	//initial_exp();
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
		clist[i].expe = 0;
	}

	slist[1].ea = 1;
	slist[2].ea = 1;

	clist[0].skill[0] = slist[0];
	clist[0].skill[1] = slist[1];
	clist[0].skill[2] = slist[2];

	clist[0].item[0] = ilist[10];
	clist[1].item[0] = ilist[20];
	clist[2].item[0] = ilist[30];
}

void check_exp() {
	clist[0].persent = clist[0].expe / (fexp[clist[0].level] / 100);
	clist[1].persent = clist[1].expe / (fexp[clist[1].level] / 100);
	clist[2].persent = clist[2].expe / (fexp[clist[2].level] / 100);
}

void check_level() {
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 11; j++) {
			if (clist[i].level == j) {
				if (clist[i].expe >= fexp[j]) {
					printf("  ★☆ %s이(가) %d에서 %d(으)로 레벨업!!!☆★\n\n", clist[i].name, clist[i].level, clist[i].level + 1);
					clist[i].level++;
					clist[i].expe -= fexp[j];
				}
			}
		}
	}
}