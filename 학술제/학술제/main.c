// made by 김종은 & 김주윤 & 선종범

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"map.h"
#include"start_display.h"
#include"character.h"
#include"menu.h"
#include"monster.h"
#include"skill.h"
#include"stage.h"

int main() {
	skill_set();
	all_item();
	initial_exp();
	initial_charac(clist, slist);
	print_initial_disp();
	stlist[0].is_clear = 1;
	stlist[1].is_clear = 1;
	//stlist[2].is_clear = 1;
	//stlist[3].is_clear = 1;
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                   프롤로그를 진행하시겠습니까?      (Y or N)                                               ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                          ☆  프롤로그에서는 게임이 진행되는 방식과 기본적인 설명이 진행됩니다.                             ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                          ★  프롤로그에서는 캐릭터를 마음대로 제어할 수 없습니다.                                          ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                          ☆  N을 선택하면 프롤로그를  건너뛰고 메인 게임을 시작합니다.                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                          ★  첫 플레이라면 프롤로그를 진행 하는것을 권장합니다.                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		check_exp();
		a = (_getch());
		if (a == 'y' || a == 'Y') {
			//=====================        프롤로그 시작        ==============================
			prologue();
			//=====================        프롤로그 종료        ==============================
			break;
		}
		if(a=='n'||a=='N')
			break;
	}

	//=====================          본게임 시작         ===========================

	//=====================          테스트 구역         ===========================








	//=====================          테스트 종료         ===========================
	town(clist, ilist);

	//=====================          본게임 종료         ===========================
}