// made by ±Ë¡æ¿∫

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
	initial_exp();
	strcpy(clist[0].name, "¡∂¿Â");
	strcpy(clist[1].name, "º≠±‚");
	strcpy(clist[2].name, "¡ˆ∞©");
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

	slist[3].ea = 1;
	slist[4].ea = 1;

	clist[0].skill[0] = slist[0];
	clist[0].skill[1] = slist[3];
	clist[0].skill[2] = slist[4];

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