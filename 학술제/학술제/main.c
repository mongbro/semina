// made by 김종은 & 김주윤 & 선종범

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
	//=====================        게임 시작         ==============================

	skill_set();
	all_item();
	initial_exp();
	initial_charac(clist, slist);
	print_initial_disp();
	stlist[0].is_clear = 1;
	stlist[1].is_clear = 1;

	//////=====================        프롤로그         ==============================


	//stage_prologue();
	//prologue();


	//=====================          본게임 시작         ===========================













	///////////////////////////        아이템 시험               //////////////////////////////
	clist[0].readership = 100;

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
}