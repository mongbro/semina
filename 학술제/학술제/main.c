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
	stlist[0].is_clear = 1;
	stlist[1].is_clear = 1;
	//////=====================        ���ѷα�         ==============================


	
	//prologue();


	//=====================          ������ ����         ===========================

	//=====================          �׽�Ʈ ����         ===========================

	clist[0].skill[2] = slist[6];
	clist[1].skill[1] = slist[14];
	clist[1].skill[2] = slist[16];
	clist[2].skill[1] = slist[22];
	clist[2].skill[2] = slist[25];
	slist[6].ea = 1;
	slist[14].ea = 1;
	slist[16].ea = 1;
	slist[22].ea = 1;
	slist[25].ea = 1;



	//=====================          �׽�Ʈ ����         ===========================
	town(clist, ilist);

}