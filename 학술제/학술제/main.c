// made by ������ & ������ & ������

#include<stdio.h>
#include<string.h>
#include"map.h"
#include"start_display.h"
#include"character.h"
#include"menu.h"
#include"monster.h"
#include"skill.h"
#include"stage.h"

int main() {
	//=====================        ���� ����         ==============================

	skill_set();
	all_item();
	initial_exp();
	initial_charac(clist, slist);
	print_initial_disp();


	//////=====================        ���ѷα�         ==============================


	//prologue_stage();
	//prologue();


	//=====================          ������ ����         ===========================













	///////////////////////////        ������ ����               //////////////////////////////

	clist[0].expe = 56;
	clist[1].expe = 70;
	clist[2].expe = 95;


	ilist[0].ea++;
	ilist[6].ea++;
	ilist[3].ea++;
	ilist[5].ea++;

	ilist[10].ea++;
	ilist[15].ea++;
	ilist[13].ea++;

	ilist[20].ea++;
	ilist[25].ea++;
	ilist[23].ea++;

	ilist[30].ea++;
	ilist[35].ea++;
	ilist[33].ea++;

	gold += 50;
	
	town(clist, ilist);








	//clist[0].hp = 50;
	//clist[0].mp = 50;
	//clist[1].hp = 50;
	//clist[1].mp = 50;
	//clist[2].hp = 50;
	//clist[2].mp = 50;
	//strcpy(ilist[13].name, "����1");
	//strcpy(ilist[17].name, "����2");
	//strcpy(ilist[23].name, "����1");
	//strcpy(ilist[27].name, "����2");
	//strcpy(ilist[33].name, "����1");
	//strcpy(ilist[37].name, "����2");
	//
	//ilist[13].add_readership = 10;
	//ilist[17].add_readership = 20;
	//ilist[23].add_noteship = 10;
	//ilist[27].add_noteship = 20;
	//ilist[33].add_wealth = 10;
	//ilist[37].add_wealth = 20;

	//ilist[0].ea = 0;
	//ilist[3].ea = 1;
	//ilist[13].ea = 1;
	//ilist[17].ea = 1;
	//ilist[23].ea = 1;
	//ilist[27].ea = 1;
	//ilist[33].ea = 1;
	//ilist[37].ea = 1;

	//dun_inventory(clist);
	//town_inventory0(clist);
	///////////////////////////        ������ ����               //////////////////////////////
}