// made by 김종은

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"combat.h"
#include"menu.h"
#include"exp.h"
#include"map.h"

void print_line() {
	printf("\n  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}

void print_map() {
	printf("\n  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  ■  %s                                                           ○                                     %18s  ■\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("  ■                                                                 ○                                     %18s  ■\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  ■  %s                                                           ○                                                         ■\n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("  ■                                                                 ○                                                       ■\n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  ■  %s                                                           ○                                     %18s  ■\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("  ■                                                                 ○                                     %18s  ■\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  ■  %s                                                           ○                                                         ■\n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("  ■                                                                 ○                                                       ■\n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  ■  %s                                                           ○                                     %18s  ■\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("  ■                                                                 ○                                     %18s  ■\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  ■  %s                                                           ○                                                         ■\n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("  ■                                                                 ○                                                       ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■");
}

void print_hp() {
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  ■  %s의 체력 : %3d / %3d                                    ○                      %18s의 체력 : %3d / %3d  ■\n", clist[0].name, clist[0].hp, clist[0].fhp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("  ■                                                             ○                      %18s의 체력 : %3d / %3d  ■\n", mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  ■  %s의 체력 : %3d / %3d                                    ○                                                             ■\n", clist[0].name, clist[0].hp, clist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("  ■                                                             ○                                                           ■\n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  ■  %s의 체력 : %3d / %3d                                    ○                      %18s의 체력 : %3d / %3d  ■\n", clist[1].name, clist[1].hp, clist[1].fhp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("  ■                                                             ○                      %18s의 체력 : %3d / %3d  ■\n", mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  ■  %s의 체력 : %3d / %3d                                    ○                                                             ■\n", clist[1].name, clist[1].hp, clist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("  ■                                                             ○                                                           ■\n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  ■  %s의 체력 : %3d / %3d                                    ○                      %18s의 체력 : %3d / %3d  ■\n", clist[2].name, clist[2].hp, clist[2].fhp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("  ■                                                             ○                      %18s의 체력 : %3d / %3d  ■\n", mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  ■  %s의 체력 : %3d / %3d                                    ○                                                             ■\n", clist[2].name, clist[2].hp, clist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                             ○                                                               ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■");
}

void print_choice_mon() {
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	if (mlist[0].hp > 0)
		printf("  ■  1. %-18s                                                        = %18s을 공격합니다.  ■\n", mlist[0].name, mlist[0].name);
	if (mlist[0].hp <= 0)
		printf("  ■                                                                                                                              ■\n");
	if (mlist[1].hp > 0)
		printf("  ■  2. %-18s                                                        = %18s을 공격합니다.  ■\n", mlist[1].name, mlist[1].name);
	if (mlist[1].hp <= 0)
		printf("  ■                                                                                                                              ■\n");
	if (mlist[2].hp > 0)
		printf("  ■  3. %-18s                                                        = %18s을 공격합니다.  ■\n", mlist[2].name, mlist[2].name);
	if (mlist[2].hp <= 0)
		printf("  ■                                                                                                                              ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■                                                                                                                            ■\n");
	printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void hit1() {
	system("cls");
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
}

void hit2() {
	system("cls");
}

void event_hit() {
	hit1();
	hit2();
	hit1();
	hit2();
	hit1();
	hit2();
	hit1();
	hit2();
	hit1();
	hit2();
}

////////////////////////////////////////////////////////////   여기부터 프롤로그   ////////////////////////////////////////////////////////////

void prologue() {
	stage_prologue();
	while (1) {
		system("cls");
		print_line();
		printf("  프롤로그입니다.~~~~~~\n    이 게임은 저장기능을 지원하지 않습니다!!!!!\n    신중하게 선택을 해주세요!!!!!\n    방향키를 누르면 여러 페이지가 한번에 넘어갈 수도 있습니다.ㅠㅠ\n\n\n    계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("  설명1111111111111111설명11111111111111설명11111111111111\n\n계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("  설명222222222222222설명222222222222222설명222222222222222\n\n계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("  설명333333333333333설명333333333333333설명333333333333333\n\n계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	turn_player();

	while (1) {															//////////////// 프롤로그 c0 기술선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[0].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		printf("\n    ※아군 캐릭터는 조장, 서기, 지갑 순으로 진행됩니다.\n    ※취소 기능은 지원하지 않습니다!! \n    신중히 선택하세요.");
		check_level();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c0 스킬선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.\n\n", clist[0].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s의 스킬을 선택합니다.\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s의 스킬을 선택합니다.\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].add_def, clist[0].skill[2].diff_mp, clist[0].name);
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c0 대상 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[0].name, clist[0].skill[1].name);
		print_choice_mon();
		printf("\n\n  계속 하시려면 '3'을 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '3')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// 프롤로그 c0 기술 효과
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		damage_character_to_monster(0, 2, 2);
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  %s가 %d의 데미지를 입음!!!                                   = %s이(가) %d의 데미지를 입었습니다.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		clist[0].mp -= clist[0].skill[2].diff_mp;
		kill_monster(0, 0);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// 프롤로그 c1 기술선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[1].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '1'을 누르세요.\n");
		print_line();
		printf("\n    ※조장은 공격에 특화(딜러)되어있고, 서기는 방어(탱커), 지갑은 회복에 특화(힐러)되어 있습니다.");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c1 대상 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터의 공격입니다.\n\n", clist[1].name);
		print_choice_mon();
		printf("\n\n  계속 하시려면 '3'을 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '3') {
			damage_character_to_monster(1, 2, 0);
			break;
		}
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// 프롤로그 c1 공격 효과
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터입니다.\n\n", clist[1].name);
		printf("  %s이(가) %d의 데미지를 입음!!!                               = %s이(가) %d의 데미지를 입었습니다.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		prologue_kill_monster(1, 0);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// 프롤로그 c2 기술선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[2].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '1'을 누르세요.\n");
		print_line();
		printf("\n    ※각자 특성은 있지만 모두 기본공격은 할 수 있습니다.");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c2 대상 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터의 공격입니다.\n\n", clist[2].name);
		print_choice_mon();
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		damage_character_to_monster(2, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// 프롤로그 c2 공격 효과
		system("cls");								///////////////이거 본편에 추가





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터입니다.\n\n", clist[2].name);
		printf("  %s이(가) %d의 데미지를 입음!!!                               = %s이(가) %d의 데미지를 입었습니다.\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		kill_monster(2, 0);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	turn_monster();

	{
		int who;
		who = choice_monster_to_character();
		while (1) {															//////////////// 프롤로그 m0 공격 
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  %s이(가) %s을(를) 공격!!                                              = 선택된 몬스터입니다.\n\n", mlist[0].name, clist[who].name);
			printf("\n\n");
			printf("\n\n");
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			damage_monster_to_character(who, 0);
			print_line();
			if (_getch())
				break;
		}

		event_hit();

		while (1) {															//////////////// 프롤로그 m0 공격 효과
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("\n\n");
			printf("  %s이(가) %d의 데미지를 입음!!!                                = %s이(가) %d의 데미지를 입었습니다.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			kill_character(0);
			printf("\n\n");
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			print_line();
			if (_getch())
				break;
		}
	}

	{
		int who;
		who = choice_monster_to_character();
		while (1) {															//////////////// 프롤로그 m1 공격
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  %s이(가) %s을(를) 공격!!                                              = 선택된 몬스터입니다.\n\n", mlist[1].name, clist[who].name);
			printf("\n\n");
			printf("\n\n");
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			damage_monster_to_character(who, 1);
			print_line();
			if (_getch())
				break;
		}

		event_hit();

		while (1) {															//////////////// 프롤로그 m1 공격 효과
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("\n\n");
			printf("  %s이(가) %d의 데미지를 입음!!!                                = %s이(가) %d의 데미지를 입었습니다.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			kill_character(1);
			printf("\n\n");
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			print_line();
			if (_getch())
				break;
		}
	}

	turn_player();

	while (1) {															//////////////// 프롤로그 c0 기술 효과
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[0].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		printf("\n    ※취소 기능은 지원하지 않습니다!! \n    신중히 선택하세요.");
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c0 스킬 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.\n\n", clist[0].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s의 스킬을 선택합니다.\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s의 스킬을 선택합니다.\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].add_def, clist[0].skill[2].diff_mp, clist[0].name);
		printf("\n\n  계속 하시려면 '1'를 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c0 대상 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[0].name, clist[0].skill[1].name);
		print_choice_mon();
		printf("\n\n  계속 하시려면 '1'을 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// 프롤로그 c0 기술 효과
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		damage_character_to_monster(0, 0, 1);
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[0].name, clist[0].skill[0].name);
		printf("  %s가 %d의 데미지를 입음!!!                                   = %s이(가) %d의 데미지를 입었습니다.\n", mlist[0].name, hit_damage, mlist[0].name, hit_damage);
		prologue_kill_monster(0, 0);
		clist[0].mp -= clist[0].skill[1].diff_mp;
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// 프롤로그 c1 기술선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[1].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '1'을 누르세요.\n");
		print_line();
		printf("\n    ※조장은 공격에 특화(딜러)되어있고, 서기는 방어(탱커), 지갑은 회복에 특화(힐러)되어 있습니다.\n    ※특화되어있는  능력 외에 기본공격은 누구나 가능합니다.\n");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c1 대상 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터의 공격입니다.\n\n", clist[1].name);
		print_choice_mon();
		printf("\n\n  계속 하시려면 '2'을 누르세요.\n");
		print_line();
		damage_character_to_monster(1, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// 프롤로그 c1 공격 효과
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터입니다.\n\n", clist[1].name);
		printf("  %s이(가) %d의 데미지를 입음!!!                               = %s이(가) %d의 데미지를 입었습니다.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		prologue_kill_monster(1, 0);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// 프롤로그 c2 기술선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[2].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '3'을 누르세요.\n");
		print_line();
		printf("\n    ※각자 특성은 있지만 모두 기본공격은 할 수 있습니다.");
		a = _getch();
		if (a == '3') {
			dun_inventory();
			break;
		}
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c2 기술선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[2].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '1'을 누르세요.\n");
		print_line();
		printf("\n    ※각자 특성은 있지만 모두 기본공격은 할 수 있습니다.");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// 프롤로그 c2 대상 선택
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터의 공격입니다.\n\n", clist[2].name);
		print_choice_mon();
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		damage_character_to_monster(2, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// 프롤로그 c2 공격 효과
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터입니다.\n\n", clist[2].name);
		printf("  %s이(가) %d의 데미지를 입음!!!                               = %s이(가) %d의 데미지를 입었습니다.\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		prologue_kill_monster(2, 0);
		printf("\n\n");

		if (check_exter() == 1) {
			printf("  캐릭터가 모두 밤샘에 지켜 쓰러졌습니다!!!!\n  해당 과제를 제출기한에 맞추지 못했습니다.\n\n");
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			print_line();
			if (_getch())
				break;
		}
		if (check_exter() == 2) {
			printf("  모든 과제를 성공적으로 완수했습니다!!!!\n  하지만 성적은 교수님만이 알고계십니다.");
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			print_line();
			stlist[0].is_clear = 1;
			stlist[1].is_clear = 1;
			if (_getch())
				break;
		}
		if (check_exter() == 0) {
			printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
			print_line();
			if (_getch())
				break;
		}
	}
/////////////////////////////////////////////////////////////   전투 프롤로그 종료/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////   마을 프롤로그 시작/////////////////////////////////////////////////////////////
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                  ■             ■                 ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                  ■             ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■        ■■■■■■■■■■■   ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■       1.아이템 상점        ■            ■          ■       ■■■■■         ■        2. 스킬 상점        ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■                ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■     3. 정보 및 인벤토리    ■                                  ■                ■     4. 과제 하러 가는길    ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■                        ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■      ■■■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		check_exp();
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매            2. 판매                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                    ■■■■    ■        ■   ■          ■                                               ■\n");
		printf("  ■                                    ■      ■  ■        ■     ■      ■                                                 ■\n");
		printf("  ■                                    ■■■■    ■        ■       ■  ■                                                   ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■■■■      ■■■■           ■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■            1. 조장 전용 장비          2. 서기 전용 장비          3. 지갑 전용 장비          4. 소비 아이템                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                    능력치1                       능력치2                            가격                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     1. %15s            체력회복 : %2d                                                    %3d  골드               ■\n", ilist[0].name, ilist[0].add_hp, ilist[0].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     2. %15s            체력회복 : %2d                                                    %3d  골드               ■\n", ilist[1].name, ilist[1].add_hp, ilist[1].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     3. %15s            체력회복 : %2d                                                    %3d  골드               ■\n", ilist[2].name, ilist[2].add_hp, ilist[2].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     4. %15s                                            마나회복 : %2d                    %3d  골드               ■\n", ilist[3].name, ilist[3].add_mp, ilist[3].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     5. %15s                                            마나회복 : %2d                    %3d  골드               ■\n", ilist[4].name, ilist[4].add_mp, ilist[4].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     6. %15s                                            마나회복 : %2d                    %3d  골드               ■\n", ilist[5].name, ilist[5].add_mp, ilist[5].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     7. %15s            체력회복 : %2d                   마나회복 : %2d                    %3d  골드               ■\n", ilist[6].name, ilist[6].add_hp, ilist[6].add_mp, ilist[6].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 4를 눌러주세요.");
		a = (_getch());
		if (a == '4')
			break;
		else
			continue;
	}

	while (1) {
		system("cls");
		char a;
		int check;

		check = 4 - 1;
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                        능력치1             능력치2             소지 개수      가격       ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     %15s                                      hp : %2d              mp : %2d             %2d 개      %3d 골드      ■\n", ilist[check].name, ilist[check].add_hp, ilist[check].add_mp, ilist[check].ea, ilist[check].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      구매 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= ilist[check].price) {
				gold -= ilist[check].price;
				ilist[check].ea++;
				printf("  %s 을(를) 1개 획득!\n\n  계속 하시려면 아무키나 누르세요.", ilist[check].name);
				if (_getch())
					break;
			}
			else {
				printf("  소지금액이 부족합니다!!!\n\n  계속 하시려면 아무키나 누르세요.\n");
				if (_getch());
				break;
			}
		}
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                    능력치1                       능력치2                            가격                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     1. %15s            체력회복 : %2d                                                    %3d  골드               ■\n", ilist[0].name, ilist[0].add_hp, ilist[0].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     2. %15s            체력회복 : %2d                                                    %3d  골드               ■\n", ilist[1].name, ilist[1].add_hp, ilist[1].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     3. %15s            체력회복 : %2d                                                    %3d  골드               ■\n", ilist[2].name, ilist[2].add_hp, ilist[2].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     4. %15s                                            마나회복 : %2d                    %3d  골드               ■\n", ilist[3].name, ilist[3].add_mp, ilist[3].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     5. %15s                                            마나회복 : %2d                    %3d  골드               ■\n", ilist[4].name, ilist[4].add_mp, ilist[4].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     6. %15s                                            마나회복 : %2d                    %3d  골드               ■\n", ilist[5].name, ilist[5].add_mp, ilist[5].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■     7. %15s            체력회복 : %2d                   마나회복 : %2d                    %3d  골드               ■\n", ilist[6].name, ilist[6].add_hp, ilist[6].add_mp, ilist[6].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                    ■■■■    ■        ■   ■          ■                                               ■\n");
		printf("  ■                                    ■      ■  ■        ■     ■      ■                                                 ■\n");
		printf("  ■                                    ■■■■    ■        ■       ■  ■                                                   ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■■■■      ■■■■           ■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■            1. 조장 전용 장비          2. 서기 전용 장비          3. 지갑 전용 장비          4. 소비 아이템                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매            2. 판매                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 2를 눌러주세요.");
		a = (_getch());
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                   ■■■■■      ■■■■■    ■          ■                                             ■\n");
		printf("  ■                                 ■          ■  ■          ■  ■          ■                                             ■\n");
		printf("  ■                                 ■              ■          ■  ■          ■                                             ■\n");
		printf("  ■                                   ■■■■■    ■■■■■■    ■          ■                                             ■\n");
		printf("  ■                                             ■  ■              ■          ■                                             ■\n");
		printf("  ■                                 ■          ■  ■              ■          ■                                             ■\n");
		printf("  ■                                   ■■■■■      ■■■■■■  ■■■■■  ■■■■■                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■            1. 조장 전용 장비          2. 서기 전용 장비          3. 지갑 전용 장비          4. 소비 아이템                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 4를 눌러주세요.");
		a = (_getch());
		if (a == '4')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                      이름                      능력치1                       능력치2            남은 개수     가격         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i].ea > 0) {
				printf("  ■   %d. %20s                    hp 회복 : %2d                  mp 회복 : %2d          %2d 개      %2d 골드        ■\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea, ilist[i].price);
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				n[index - 1] = i;
				ilist[i].index = index;
				index++;
			}
		}
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 2를 눌러주세요.\n\n  판매 할때는 구매한 값의 절반가격으로 판매합니다.\n\n  프롤로그이기때문에 원래 가격으로 판매됩니다.");
		a = (_getch());
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                        능력치1             능력치2             소지 개수      가격       ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■       %20s                    hp 회복 : %2d                  mp 회복 : %2d          %2d 개      %2d 골드       ■\n", ilist[3].name, ilist[3].add_hp, ilist[3].add_mp, ilist[3].ea, ilist[3].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      판매 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.\n\n  판매 할때는 구매한 값의 절반가격으로 판매합니다.\n\n  프롤로그이기때문에 원래 가격으로 판매됩니다.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());
		if (a == '1') {
			if (ilist[3].ea > 1) {
				ilist[3].ea--;
				gold += ilist[3].price;
				break;
			}
			if (ilist[3].ea == 1) {
				ilist[3].ea--;
				gold += ilist[3].price;
				break;
			}
			else {
				printf("  남은 %s 이(가) 없습니다!!", ilist[3].name);
				break;
			}
		}
		else
			continue;
	}

	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                      이름                      능력치1                       능력치2            남은 개수     가격         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i].ea > 0) {
				printf("  ■   %d. %20s                    hp 회복 : %2d                  mp 회복 : %2d          %2d 개      %2d 골드        ■\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea, ilist[i].price);
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				n[index - 1] = i;
				ilist[i].index = index;
				index++;
			}
		}
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.\n\n  판매 할때는 구매한 값의 절반가격으로 판매합니다.\n\n  프롤로그이기때문에 원래 가격으로 판매됩니다.");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                   ■■■■■      ■■■■■    ■          ■                                             ■\n");
		printf("  ■                                 ■          ■  ■          ■  ■          ■                                             ■\n");
		printf("  ■                                 ■              ■          ■  ■          ■                                             ■\n");
		printf("  ■                                   ■■■■■    ■■■■■■    ■          ■                                             ■\n");
		printf("  ■                                             ■  ■              ■          ■                                             ■\n");
		printf("  ■                                 ■          ■  ■              ■          ■                                             ■\n");
		printf("  ■                                   ■■■■■      ■■■■■■  ■■■■■  ■■■■■                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■            1. 조장 전용 장비          2. 서기 전용 장비          3. 지갑 전용 장비          4. 소비 아이템                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매            2. 판매                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                  ■             ■                 ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                  ■             ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■        ■■■■■■■■■■■   ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■       1.아이템 상점        ■            ■          ■       ■■■■■         ■        2. 스킬 상점        ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■                ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■     3. 정보 및 인벤토리    ■                                  ■                ■     4. 과제 하러 가는길    ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■                        ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■      ■■■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 2를 눌러주세요.");
		check_exp();
		a = (_getch());
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                                ■                                               ■■■■■■■■   ■                      ■\n");
		printf("  ■                              ■■■                                                           ■   ■                      ■\n");
		printf("  ■                            ■■  ■■                                           ■■■■■■■■   ■                      ■\n");
		printf("  ■                          ■■      ■■                                                       ■   ■                      ■\n");
		printf("  ■                        ■■          ■■                                                     ■   ■                      ■\n");
		printf("  ■                      ■■              ■■                                                        ■                      ■\n");
		printf("  ■                    ■■                  ■■                                      ■■■■■■■■■                      ■\n");
		printf("  ■                  ■■                      ■■                                                    ■                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■              ■■■■■■■■■■■■■■■■■■■                                ■                                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매          2. 인벤                                                                                              ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                    ■■■■    ■        ■   ■          ■                                               ■\n");
		printf("  ■                                    ■      ■  ■        ■     ■      ■                                                 ■\n");
		printf("  ■                                    ■■■■    ■        ■       ■  ■                                                   ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■■■■      ■■■■           ■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                           1. 조장 전용 스킬          2. 서기 전용 스킬          3. 지갑 전용 스킬                          ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 3를 눌러주세요.");
		a = (_getch());
		if (a == '3')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		int index = 1;

		for (int i = 21; i < 31; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");

		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                             능력치                   소모 마나                  가격                   ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 21; i < 31; i++) {
			if (slist[i].ea == 0) {
				switch (i) {
				case 21:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                  추가 공격력 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 22:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 23:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 24:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 25:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 26:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 27:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 28:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 29:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 30:
					if (index == 10) {
						printf("  ■                                                                                                                            ■\n");
						printf("  ■   %d. %-20s                     회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ■                                                                                                                            ■\n");
						slist[i].index = 0;
						index++;
						break;
					}
					else {
						printf("  ■                                                                                                                            ■\n");
						printf("  ■   %d. %-20s                       회복량 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ■                                                                                                                            ■\n");
						slist[i].index = index;
						index++;
					}

				}

			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 2를 눌러주세요.");

		a = (_getch());

		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[22].ea == 1)
			strcpy(exist, "보유중");
		else
			strcpy(exist, "없음");

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나              보유 여부      가격       ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      %-20s                              회복량 : %2d      소모 마나 : %2d           %6s       %3d 골드     ■\n", slist[22].name, slist[22].add_hp, slist[22].diff_mp, exist, slist[22].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[22].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      구매 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= slist[22].price) {
				gold -= slist[22].price;
				slist[22].ea = 1;
				printf(" %20s 을(를) 획득!\n\n  뒤로 가시려면 아무키나 누르세요.\n", slist[22].name);
				if (_getch())
					break;
			}
			else {
				printf("  소지금액이 부족합니다!!!\n\n  계속 하시려면 아무키나 누르세요.\n");
				if (_getch())
					break;
			}
		}
		else
			continue;
	}

	while (1) {
		char a;
		int index = 1;

		for (int i = 21; i < 31; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");

		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                             능력치                   소모 마나                  가격                   ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 21; i < 31; i++) {
			if (slist[i].ea == 0) {
				switch (i) {
				case 21:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                  추가 공격력 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 22:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 23:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 24:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 25:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 26:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 27:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 28:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 29:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 30:
					if (index == 10) {
						printf("  ■                                                                                                                            ■\n");
						printf("  ■   %d. %-20s                     회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ■                                                                                                                            ■\n");
						slist[i].index = 0;
						index++;
						break;
					}
					else {
						printf("  ■                                                                                                                            ■\n");
						printf("  ■   %d. %-20s                       회복량 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ■                                                                                                                            ■\n");
						slist[i].index = index;
						index++;
					}

				}

			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");

		a = (_getch());

		if (a == 'b'||a=='B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                       ■                                                           ■                      ■\n");
		printf("  ■                         ■            ■                            ■■■■■■■■■■■         ■                      ■\n");
		printf("  ■                       ■■■          ■                                    ■■■                 ■                      ■\n");
		printf("  ■                     ■■  ■■        ■                                    ■■■                 ■                      ■\n");
		printf("  ■                   ■■      ■■      ■■■■                            ■■  ■■         ■■■■                      ■\n");
		printf("  ■                 ■■          ■■    ■                                ■■      ■■             ■                      ■\n");
		printf("  ■               ■■              ■■  ■                              ■■          ■■           ■                      ■\n");
		printf("  ■                                       ■                            ■■              ■■         ■                      ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                  ■                  ■                                 ■                      ■                         ■\n");
		printf("  ■                    ■■■■■■■■■                                   ■■■■■■■■■■■■■                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                    ■■■■    ■        ■   ■          ■                                               ■\n");
		printf("  ■                                    ■      ■  ■        ■     ■      ■                                                 ■\n");
		printf("  ■                                    ■■■■    ■        ■       ■  ■                                                   ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■■■■      ■■■■           ■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                           1. 조장 전용 스킬          2. 서기 전용 스킬          3. 지갑 전용 스킬                          ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b'|| a=='B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                                ■                                               ■■■■■■■■   ■                      ■\n");
		printf("  ■                              ■■■                                                           ■   ■                      ■\n");
		printf("  ■                            ■■  ■■                                           ■■■■■■■■   ■                      ■\n");
		printf("  ■                          ■■      ■■                                                       ■   ■                      ■\n");
		printf("  ■                        ■■          ■■                                                     ■   ■                      ■\n");
		printf("  ■                      ■■              ■■                                                        ■                      ■\n");
		printf("  ■                    ■■                  ■■                                      ■■■■■■■■■                      ■\n");
		printf("  ■                  ■■                      ■■                                                    ■                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■              ■■■■■■■■■■■■■■■■■■■                                ■                                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매          2. 인벤                                                                                              ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 2를 눌러주세요.");
		a = (_getch());
		if (a == '2')
			break;
		else
			continue;
	}

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
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■     1. 조장 전용 스킬      ■          ■     2. 서기 전용 스킬      ■          ■     3. 지갑 전용 스킬      ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 3를 눌러주세요.");
		a = (_getch());
		if (a == '3')
			break;
		else
			continue;
	}

	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 11; i++) {
			slist[i + 20].index = -1;
		}

		system("cls");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                                                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 1; i < 11; i++) {
			if (slist[i + 20].ea == 1) {
				if (index != 10) {
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                                                                                                  ■\n", index, slist[i + 20].name);
					printf("  ■                                                                                                                            ■\n");
					slist[i + 20].index = index;
					index++;
					continue;
				}
				if (index == 10) {
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                                                                                                 ■\n", index, slist[i + 20].name);
					printf("  ■                                                                                                                            ■\n");
					slist[i + 20].index = 0;
					index++;
				}
			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.\n\n  여기에서 원하는 스킬을 선택하여 총 2개까지 장착 가능합니다.\n");
		a = (_getch());

		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      %-20s                           회복량 : %2d         소모 마나 : %2d                                     ■\n", slist[22].name, slist[22].add_hp, slist[22].diff_mp);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[22].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      장비 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 1를 눌러주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());

		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[2].skill[1].ea == 1) {
			if (clist[2].skill[1].num == 21) {
				printf("  ■      1.%-20s                          추가 공격력 : %2d     소모 마나 : %2d                                   ■\n", clist[2].skill[1].name, clist[2].skill[1].add_att, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 21 && clist[2].skill[1].num < 28 && clist[2].skill[1].num != 24) {
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 27) {
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[1].name, clist[2].skill[1].add_mp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num == 24)
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                      ■\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", slist[clist[2].skill[1].num].info);
		}
		else {
			printf("  ■      1. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[2].skill[2].ea == 1) {
			if (clist[2].skill[2].num == 21) {
				printf("  ■      2.%-20s                          추가 공격력 : %2d     소모 마나 : %2d                                   ■\n", clist[2].skill[2].name, clist[2].skill[2].add_att, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 21 && clist[2].skill[2].num < 28 && clist[2].skill[2].num != 24) {
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 27) {
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[2].name, clist[2].skill[2].add_mp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num == 24)
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                      ■\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", slist[clist[2].skill[2].num].info);
		}
		else {
			printf("  ■      2. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  계속 하시려면 1를 눌러주세요.\n\n  여기에서 원하는 스킬을 선택하여 총 2개까지 장착 가능합니다.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[2].skill[1].ea == 1 && clist[2].skill[2].ea == 1) {
				if (clist[2].skill[2].num == slist[22].num && clist[2].skill[1].ea == 1) {
					clist[2].skill[2] = clist[2].skill[1];
					clist[2].skill[1] = slist[22];
				}
				else
					clist[2].skill[1] = slist[22];
			}
			if (clist[2].skill[1].ea == 1 && clist[2].skill[2].ea != 1) {
				clist[2].skill[2] = clist[2].skill[1];
				clist[2].skill[1] = slist[22];
			}
			if (clist[2].skill[2].num == slist[22].num && clist[2].skill[1].ea == 1) {
				clist[2].skill[2] = clist[2].skill[1];
				clist[2].skill[1] = slist[22];
			}
			if (clist[2].skill[2].num == slist[22].num) {
				clist[2].skill[2] = empty_character_slist[0];
				clist[2].skill[1] = slist[22];
				break;
			}
			else {
				clist[2].skill[1] = slist[22];
				break;
			}
		}
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[2].skill[1].ea == 1) {
			if (clist[2].skill[1].num == 21) {
				printf("  ■      1.%-20s                          추가 공격력 : %2d     소모 마나 : %2d                                   ■\n", clist[2].skill[1].name, clist[2].skill[1].add_att, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 21 && clist[2].skill[1].num < 28 && clist[2].skill[1].num != 24) {
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 27) {
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[1].name, clist[2].skill[1].add_mp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num == 24)
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                      ■\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", slist[clist[2].skill[1].num].info);
		}
		else {
			printf("  ■      1. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[2].skill[2].ea == 1) {
			if (clist[2].skill[2].num == 21) {
				printf("  ■      2.%-20s                          추가 공격력 : %2d     소모 마나 : %2d                                   ■\n", clist[2].skill[2].name, clist[2].skill[2].add_att, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 21 && clist[2].skill[2].num < 28 && clist[2].skill[2].num != 24) {
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 27) {
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[2].name, clist[2].skill[2].add_mp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num == 24)
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                      ■\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", slist[clist[2].skill[2].num].info);
		}
		else {
			printf("  ■      2. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  계속 하시려면 b를 눌러주세요.\n\n  여기에서 원하는 스킬을 선택하여 총 2개까지 장착 가능합니다.\n");

		a = (_getch());

		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 11; i++) {
			slist[i + 20].index = -1;
		}

		system("cls");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                                                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 1; i < 11; i++) {
			if (slist[i + 20].ea == 1) {
				if (index != 10) {
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                                                                                                  ■\n", index, slist[i + 20].name);
					printf("  ■                                                                                                                            ■\n");
					slist[i + 20].index = index;
					index++;
					continue;
				}
				if (index == 10) {
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                                                                                                 ■\n", index, slist[i + 20].name);
					printf("  ■                                                                                                                            ■\n");
					slist[i + 20].index = 0;
					index++;
				}
			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());

		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

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
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■     1. 조장 전용 스킬      ■          ■     2. 서기 전용 스킬      ■          ■     3. 지갑 전용 스킬      ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                                ■                                               ■■■■■■■■   ■                      ■\n");
		printf("  ■                              ■■■                                                           ■   ■                      ■\n");
		printf("  ■                            ■■  ■■                                           ■■■■■■■■   ■                      ■\n");
		printf("  ■                          ■■      ■■                                                       ■   ■                      ■\n");
		printf("  ■                        ■■          ■■                                                     ■   ■                      ■\n");
		printf("  ■                      ■■              ■■                                                        ■                      ■\n");
		printf("  ■                    ■■                  ■■                                      ■■■■■■■■■                      ■\n");
		printf("  ■                  ■■                      ■■                                                    ■                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■              ■■■■■■■■■■■■■■■■■■■                                ■                                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매          2. 인벤                                                                                              ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b'||a=='B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                  ■             ■                 ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                  ■             ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■        ■■■■■■■■■■■   ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■       1.아이템 상점        ■            ■          ■       ■■■■■         ■        2. 스킬 상점        ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■                ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■     3. 정보 및 인벤토리    ■                                  ■                ■     4. 과제 하러 가는길    ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■                        ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■      ■■■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 3를 눌러주세요.");
		check_exp();
		a = (_getch());
		if (a == '3')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		statm_check();
		statp_check();
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■       1. 캐릭터 정보       ■                                                    ■        2. 인벤토리         ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 1를 눌러주세요.\n");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■          1. 조장           ■          ■          2. 서기           ■          ■          3. 지갑           ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 1를 눌러주세요.\n");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                           ■               ■                        착용중인 아이템                       ■\n");
		printf("  ■       ■■■■■■■          ■■■■■  ■               ■                                                              ■\n");
		printf("  ■             ■                      ■    ■               ■         이름                    능력치1                      ■\n");
		printf("  ■           ■  ■                  ■      ■■■           ■                                                              ■\n");
		printf("  ■         ■      ■              ■  ■    ■               ■                                                              ■\n");
		if (clist[0].item[0].num == 0) {
			printf("  ■       ■    ■    ■          ■      ■  ■               ■    현재 장비 미착용중                                        ■\n");
		}
		else {
			printf("  ■       ■    ■    ■          ■      ■  ■               ■  %20s         리더십 + %2d                    ■\n", clist[0].item[0].name, clist[0].item[0].add_readership);
		}
		printf("  ■             ■                    ■■■                   ■                                                              ■\n");
		printf("  ■     ■■■■■■■■■          ■      ■                 ■                                                              ■\n");
		printf("  ■                                 ■      ■                 ■                                                              ■\n");
		if (clist[0].item[1].num == 0) {
			printf("  ■                                   ■■■                   ■    현재 장비 미착용중                                        ■\n");
		}
		else {
			printf("  ■                                   ■■■                   ■  %20s         리더십 + %2d                    ■\n", clist[0].item[1].name, clist[0].item[1].add_readership);
		}
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■              1. 리더십       :       %3d                   ■                   공격력       :       %3d                   ■\n", clist[0].readership + clist[0].item[0].add_readership + clist[0].item[1].add_readership, clist[0].att + clist[0].readership);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                   방어력       :       %3d                   ■\n", clist[0].def + clist[0].noteship);
		printf("  ■              2. 필기력       :       %3d                   ■                                                              ■\n", clist[0].noteship);
		printf("  ■                                                            ■                   총 hp        :       %3d                   ■\n", clist[0].fhp);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■              3.   부         :       %3d                   ■                   총 mp        :       %3d                   ■\n", clist[0].wealth, clist[0].fmp + (clist[0].wealth * 2));
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■              남은 스텟       :       %2d                    ■                            소지 골드 : %5d                 ■\n", clist[0].spare_stat, gold);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                               레벨  :  %2d           경험치  :  %4d / %4d    ( %2d %% )                                     ■\n", clist[0].level, clist[0].expe, fexp[clist[0].level], clist[0].persent);
		printf("  ■                    ■■      ■■      ■■      ■■      ■■      ■■      ■■      ■■      ■■                    ■\n");
		printf("  ■        ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■        ■\n");
		printf("  ■        ■           10        20        30        40        50        60        70        80        90           ■        ■\n");
		printf("  ■        ■  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[0].persent)
				printf("■");
			else
				printf("□");
		}
		printf("  ■        ■\n");
		printf("  ■        ■                                                                                                        ■        ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 1를 눌러주세요.\n\n  리더십을 공격력을 증가시켜주고 필기력은 방어력, 부는 최대mp를 증가시켜줍니다.\n\n  스텟은 한번 투자하면 다시는 회수할 수 없습니다.\n");
		a = (_getch());
		if (a == '1') {
			if (clist[0].spare_stat > 0) {
				if (a == '1') {
					clist[0].spare_stat--;
					clist[0].readership++;
				}
				if (a == '2') {
					clist[0].spare_stat--;
					clist[0].noteship++;
				}
				if (a == '3') {
					clist[0].spare_stat--;
					clist[0].wealth++;
				}
			}
		}
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                           ■               ■                        착용중인 아이템                       ■\n");
		printf("  ■       ■■■■■■■          ■■■■■  ■               ■                                                              ■\n");
		printf("  ■             ■                      ■    ■               ■         이름                    능력치1                      ■\n");
		printf("  ■           ■  ■                  ■      ■■■           ■                                                              ■\n");
		printf("  ■         ■      ■              ■  ■    ■               ■                                                              ■\n");
		if (clist[0].item[0].num == 0) {
			printf("  ■       ■    ■    ■          ■      ■  ■               ■    현재 장비 미착용중                                        ■\n");
		}
		else {
			printf("  ■       ■    ■    ■          ■      ■  ■               ■  %20s         리더십 + %2d                    ■\n", clist[0].item[0].name, clist[0].item[0].add_readership);
		}
		printf("  ■             ■                    ■■■                   ■                                                              ■\n");
		printf("  ■     ■■■■■■■■■          ■      ■                 ■                                                              ■\n");
		printf("  ■                                 ■      ■                 ■                                                              ■\n");
		if (clist[0].item[1].num == 0) {
			printf("  ■                                   ■■■                   ■    현재 장비 미착용중                                        ■\n");
		}
		else {
			printf("  ■                                   ■■■                   ■  %20s         리더십 + %2d                    ■\n", clist[0].item[1].name, clist[0].item[1].add_readership);
		}
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■              1. 리더십       :       %3d                   ■                   공격력       :       %3d                   ■\n", clist[0].readership, clist[0].att);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                   방어력       :       %3d                   ■\n", clist[0].def);
		printf("  ■              2. 필기력       :       %3d                   ■                                                              ■\n", clist[0].noteship);
		printf("  ■                                                            ■                   총 hp        :       %3d                   ■\n", clist[0].fhp);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■              3.   부         :       %3d                   ■                   총 mp        :       %3d                   ■\n", clist[0].wealth, clist[0].fmp);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■              남은 스텟       :       %2d                    ■                            소지 골드 : %5d                 ■\n", clist[0].spare_stat, gold);
		printf("  ■                                                            ■                                                              ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                               레벨  :  %2d           경험치  :  %4d / %4d    ( %2d %% )                                     ■\n", clist[0].level, clist[0].expe, fexp[clist[0].level], clist[0].persent);
		printf("  ■                    ■■      ■■      ■■      ■■      ■■      ■■      ■■      ■■      ■■                    ■\n");
		printf("  ■        ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■        ■\n");
		printf("  ■        ■           10        20        30        40        50        60        70        80        90           ■        ■\n");
		printf("  ■        ■  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[0].persent)
				printf("■");
			else
				printf("□");
		}
		printf("  ■        ■\n");
		printf("  ■        ■                                                                                                        ■        ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 b를 눌러주세요.\n\n  리더십과 필기력은 1당 공격력과 방어력이 1씩 증가합니다.\n\n  부는 1당 최대mp량이 2씩 증가합니다.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■          1. 조장           ■          ■          2. 서기           ■          ■          3. 지갑           ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 b를 눌러주세요.\n");
		a = (_getch());
		if (a == 'b'|| a=='B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■       1. 캐릭터 정보       ■                                                    ■        2. 인벤토리         ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 2를 눌러주세요.\n");
		a = (_getch());
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■     1. 조장 전용 아이템    ■                                                    ■     2. 서기 전용 아이템    ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■■■■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■                            ■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                              ■                            ■                                              ■\n");
		printf("  ■                                              ■       5. 전체 아이템       ■                                              ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■                            ■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■■■■          ■                            ■    ■\n");
		printf("  ■    ■     3. 지갑 전용 아이템    ■                                                    ■       4. 소비 아이템       ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 1를 눌러주세요.\n\n  마을 안에서는 장비형 아이템만 장착이 가능합니다.\n");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i + 10].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                              능력치1                                                   남은 개수         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 10].ea > 0) {
				printf("  ■   %d. %-20s                 리더십(공격력) : %2d                                             %2d 개            ■\n", index, ilist[i + 10].name, ilist[i + 10].add_readership, ilist[i + 10].ea);
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				n[index - 1] = i;
				ilist[i + 10].index = index;
				index++;
			}
		}
		printf("  ■   %d. 장비 해제                                                                                                             ■\n", index);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속 하시려면 b를 눌러주세요.\n\n  여기에서 원하는 아이템을 선택하여 총 2개까지 장착 가능합니다.\n\n  아이템 변경사항은 캐릭터 정보에서 확인 가능합니다.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■     1. 조장 전용 아이템    ■                                                    ■     2. 서기 전용 아이템    ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■■■■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■                            ■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                              ■                            ■                                              ■\n");
		printf("  ■                                              ■       5. 전체 아이템       ■                                              ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■                            ■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■■■■          ■                            ■    ■\n");
		printf("  ■    ■     3. 지갑 전용 아이템    ■                                                    ■       4. 소비 아이템       ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 b를 눌러주세요.");
		a = (_getch());
		if (a == 'b'||a=='B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■       1. 캐릭터 정보       ■                                                    ■        2. 인벤토리         ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■                            ■                                                    ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  계속 하시려면 b를 눌러주세요.\n");
		a = (_getch());
		if (a == 'b'|| a=='B')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                  ■             ■                 ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■                  ■             ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■        ■■■■■■■■■■■   ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■       1.아이템 상점        ■            ■          ■       ■■■■■         ■        2. 스킬 상점        ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■            ■          ■       ■                 ■                            ■    ■\n");
		printf("  ■    ■                            ■              ■■■■■         ■                 ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■                ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■                                                                      ■                                                    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■                                                    ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■■■■■■■■■■■■■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■                                  ■                ■                            ■    ■\n");
		printf("  ■    ■     3. 정보 및 인벤토리    ■                                  ■                ■     4. 과제 하러 가는길    ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■      ■                ■                            ■    ■\n");
		printf("  ■    ■                            ■               ■         ■                        ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■      ■■■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  이상으로 프롤로그를 모두 종료합니다. 수고하셨습니다!\n\n  계속 하시려면 1를 눌러주세요.");
		check_exp();
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}
}

////////////////////////////////////////////////////////////   여기까지 프롤로그   ////////////////////////////////////////////////////////////

void c_choice(int stnum) {
	while (1) {
		for (int i = 0; i < 3; i++) {
			if (clist[i].turn == 0) {
				hit_damage = 0;
				if (clist[i].hp > 0) {
					char a;
					system("cls");
					print_line();
					print_map();
					print_line();
					printf("\n");
					print_hp();
					print_line();
					printf("\n");
					printf("  ■  %s의 기술!!                                               = 공격하는 아군 캐릭터의 이름입니다.                          ■\n", clist[i].name);
					printf("  ■                                                                                                                            ■\n");
					printf("  ■  1. 기본공격                                                 = 캐릭터의 기본 공격을 합니다.                                ■\n");
					printf("  ■  2. 스킬                                                     = 캐릭터의 스킬을 선택합니다.                                 ■\n");
					printf("  ■  3. 메뉴                                                     = 인벤토리에서 사용 가능한 아이템을 선택합니다.               ■\n");
					printf("  ■  4. 도망치기!                                                = 이번 스테이지는 포기합니다.                                 ■\n");
					printf("  ■                                                                                                                            ■\n");
					printf("  ■                                                                                                                            ■\n");
					printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					printf("\n\n  기술을 선택하시오.\n");
					print_line();
					a = _getch();
					if (a == '1') {
						c_attack(i, stnum);
						if (check_exter() == 2) {
							printf("\n\n  첫번째 적들을 모두 처치했습니다!!\n\n");
							printf("  계속 하시려면 아무키나 누르세요.\n");
							print_line();
							if (_getch())
								break;
						}
						if (clist[i].turn == 0)
							i--;
						continue;
					}
					if (a == '2') {
						c_skill(i, stnum);
						if (check_exter() == 2) {
							printf("\n\n  첫번째 적들을 모두 처치했습니다!!\n\n");
							printf("  계속 하시려면 아무키나 누르세요.\n");
							print_line();
							if (_getch())
								break;
						}
						if (clist[i].turn == 0)
							i--;
						continue;
					}
					if (a == '3') {
						dun_menu();
						i--;
						continue;
					}
					if (a == '4')
						town();
					else {
						i--;
						continue;
					}
				}
			}
		}
		break;
	}
}

void c_attack(int cnum, int stnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  ■  %s의 공격!!                                                   = 선택한 캐릭터의 공격!                                   ■\n", clist[cnum].name);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (mlist[0].hp > 0) 
			printf("  ■  1. %s                                                       = %s을 공격합니다.                                    ■\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  ■                                                                                                                            ■\n");

		if (mlist[1].hp > 0)
			printf("  ■  2. %s                                                       = %s을 공격합니다.                                    ■\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  ■                                                                                                                            ■\n");

		if (mlist[2].hp > 0)
			printf("  ■  3. %s                                                       = %s을 공격합니다.                                    ■\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  ■                                                                                                                            ■\n");

		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  공격할 적을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (mlist[0].hp > 0) {
				damage_character_to_monster(cnum, 0, 0);
				hit_monster(cnum, 0, stnum);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("\n  해당 몬스터는 이미 쓰러졌습니다.\n\n 아무키나 누르세요.");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (mlist[1].hp > 0) {
				damage_character_to_monster(cnum, 1, 0);
				hit_monster(cnum, 1, stnum);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("\n  해당 몬스터는 이미 쓰러졌습니다.\n\n 아무키나 누르세요.");
				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (mlist[2].hp > 0) {
				damage_character_to_monster(cnum, 2, 0);
				hit_monster(cnum, 2, stnum);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("\n  해당 몬스터는 이미 쓰러졌습니다.\n\n 아무키나 누르세요.");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void cs_attack(int cnum, int snum, int stnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  ■  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.                             ■\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ■                                                                                                                            ■\n");
		if (mlist[0].hp > 0)
			printf("  ■  1. %s                                                       = %s을 공격합니다.                                    ■\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  ■                                                                                                                            ■\n");

		if (mlist[1].hp > 0)
			printf("  ■  2. %s                                                       = %s을 공격합니다.                                    ■\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  ■                                                                                                                            ■\n");

		if (mlist[2].hp > 0)
			printf("  ■  3. %s                                                       = %s을 공격합니다.                                    ■\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  ■                                                                                                                            ■\n");		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n\n  공격할 적을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			damage_character_to_monster(cnum, 0, snum);
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			hit_monster(cnum, 0, stnum);
			clist[cnum].turn = 1;
			break;
		}
		if (a == '2') {
			damage_character_to_monster(cnum, 1, snum);
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			hit_monster(cnum, 1,stnum);
			clist[cnum].turn = 1;
			break;
		}
		if (a == '3') {
			damage_character_to_monster(cnum, 2, snum);
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			hit_monster(cnum, 2, stnum);
			clist[cnum].turn = 1;
			break;
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void c_skill(int cnum, int stnum) {
	if (cnum == 0) {
		while (1) {
			char a;
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  ■  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.                             ■\n", clist[cnum].name);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■  1. %-13s  : 추가 att + %2d  추가 def + %2d  mp소모 - %2d    %-41s = %s의 스킬  ■\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].skill[1].info, clist[cnum].name);
			printf("  ■  2. %-13s  : 추가 att + %2d  추가 def + %2d  mp소모 - %2d    %-41s = %s의 스킬  ■\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].skill[2].info, clist[cnum].name);

			printf("  ■                                                                                                                            ■\n");
			printf("  ■                                                                                                                            ■\n");
			printf("  ■                                                                                                                            ■\n");
			printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("\n\n  스킬을 선택하세요.\n");
			print_line();
			a = _getch();
			if (a == '1') {
				if (clist[cnum].mp >= clist[cnum].skill[1].diff_mp) {
					if (clist[cnum].skill[1].num == 3 || clist[cnum].skill[1].num == 4) {
						if (clist[cnum].skill[1].num == 3)
							double_attack(cnum, 3, stnum);
						if (clist[cnum].skill[1].num == 4)
							double_attack(cnum, 4, stnum);
						break;
					}
					if (clist[cnum].skill[1].num == 5 || clist[cnum].skill[1].num == 6 || clist[cnum].skill[1].num == 7) {
						wide_attack(cnum, slist[clist[cnum].skill[1].num].num, stnum);
						break;
					}
					else {
						cs_attack(cnum, 1, stnum);
						break;
					}
				}
				else {
					printf("\n  현재 마나가 부족합니다.\n\n  계속 하시려면 아무키나 누르세요.\n");
					if (_getch())
						continue;
				}
			}
			if (a == '2') {
				if (clist[cnum].mp >= clist[cnum].skill[2].diff_mp) {
					if (clist[cnum].skill[2].num == 3 || clist[cnum].skill[2].num == 4) {
						double_attack(cnum, slist[clist[cnum].skill[2].num].num, stnum);
						break;
					}
					if (clist[cnum].skill[2].num == 5 || clist[cnum].skill[2].num == 6 || clist[cnum].skill[2].num == 7) {
						wide_attack(cnum, slist[clist[cnum].skill[2].num].num, stnum);
						break;
					}
					else {
						cs_attack(cnum, 2, stnum);
						break;
					}
				}
				else {
					printf("\n  현재 마나가 부족합니다.\n\n  계속 하시려면 아무키나 누르세요.\n");
					if (_getch())
						continue;
				}
			}
			if (a == 'b' || a == 'B')
				break;
		}
	}
	if (cnum == 1) {
		while (1) {
			char a;
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  ■  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.                             ■\n", clist[cnum].name);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■  1. %-13s : 추가 att + %2d 추가 def + %2d mp소모 - %2d  %-41s= %s의 스킬을 선택 ■\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].skill[1].info, clist[cnum].name);
			printf("  ■  2. %-13s : 추가 att + %2d 추가 def + %2d mp소모 - %2d  %-41s= %s의 스킬을 선택 ■\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].skill[2].info, clist[cnum].name);

			printf("  ■                                                                                                                            ■\n");
			printf("  ■                                                                                                                            ■\n");
			printf("  ■                                                                                                                            ■\n");
			printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("\n\n  스킬을 선택하세요.\n");
			print_line();
			a = _getch();
			if (a == '1') {
				if (clist[cnum].mp >= clist[cnum].skill[1].diff_mp) {
					if (clist[cnum].skill[1].num == 13 || clist[cnum].skill[1].num == 15) {
						wide_attack(cnum, slist[clist[cnum].skill[1].num].num, stnum);
						break;
					}
					if (clist[cnum].skill[1].num == 14) {
						stun_attack(cnum, slist[clist[cnum].skill[1].num].num, stnum);
						break;
					}
					if (clist[cnum].skill[1].num == 16) {
						armor(cnum, slist[clist[cnum].skill[1].num].num);
						break;
					}
					else {
						cs_attack(cnum, 1, stnum);
						break;
					}
				}
				else {
					printf("\n  현재 마나가 부족합니다.\n\n  계속 하시려면 아무키나 누르세요.\n");
					if (_getch())
						continue;
				}
			}
			if (a == '2') {
				if (clist[cnum].mp >= clist[cnum].skill[2].diff_mp) {
					if (clist[cnum].skill[2].num == 13 || clist[cnum].skill[2].num == 15) {
						wide_attack(cnum, slist[clist[cnum].skill[2].num].num, stnum);
						break;
					}
					if (clist[cnum].skill[2].num == 14) {
						stun_attack(cnum, slist[clist[cnum].skill[2].num].num, stnum);
						break;
					}
					if (clist[cnum].skill[2].num == 16) {
						armor(cnum, slist[clist[cnum].skill[2].num].num);
						break;
					}
					else {
						cs_attack(cnum, 2, stnum);
						break;
					}
				}
				else {
					printf("\n  현재 마나가 부족합니다.\n\n  계속 하시려면 아무키나 누르세요.\n");
					if (_getch())
						continue;
				}
			}
			if (a == 'b' || a == 'B')
				break;
		}
	}
	if (cnum == 2) {
		while (1) {
			char a;
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  ■  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.                             ■\n", clist[cnum].name);
			printf("  ■                                                                                                                            ■\n");
			if (clist[cnum].skill[1].num == 21)
				printf("  ■  1. %-16s : 추가 att + %2d 추가 def + %2d mp소모 - %2d  %-41s= %s의 스킬     ■\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].skill[1].info, clist[cnum].name);
			else
				printf("  ■  1. %-16s : hp 회복 + %2d  mp 회복 + %2d  mp소모 - %2d  %-41s= %s의 스킬     ■\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_hp, clist[cnum].skill[1].add_mp, clist[cnum].skill[1].diff_mp, clist[cnum].skill[1].info, clist[cnum].name);
			if (clist[cnum].skill[2].num == 21)
				printf("  ■  2. %-16s : 추가 att + %2d 추가 def + %2d mp소모 - %2d  %-41s= %s의 스킬     ■\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].skill[2].info, clist[cnum].name);
			else
				printf("  ■  1. %-16s : hp 회복 + %2d  mp 회복 + %2d  mp소모 - %2d  %-41s= %s의 스킬     ■\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_hp, clist[cnum].skill[2].add_mp, clist[cnum].skill[2].diff_mp, clist[cnum].skill[2].info, clist[cnum].name);	

			printf("  ■                                                                                                                            ■\n");
			printf("  ■                                                                                                                            ■\n");
			printf("  ■                                                                                                                            ■\n");
			printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("\n\n  스킬을 선택하세요.\n");
			print_line();
			a = _getch();
			if (a == '1') {
				if (clist[cnum].mp >= clist[cnum].skill[1].diff_mp) {
					if (clist[cnum].skill[1].num >= 22 && clist[cnum].skill[1].num <= 24) {
						character_hp_heal(cnum, 1);
						break;
					}
					if (clist[cnum].skill[1].num >= 25 && clist[cnum].skill[1].num <= 27) {
						all_character_hp_heal(cnum, 1);
						break;
					}
					if (clist[cnum].skill[1].num == 28) {
						character_mp_heal(cnum, 1);
						break;
					}
					if (clist[cnum].skill[1].num == 29) {
						all_character_mp_heal(cnum, 1);
						break;
					}
					if (clist[cnum].skill[1].num == 30) {
						all_character_hp_mp_heal(cnum, 1);
						break;
					}
					else {
						cs_attack(cnum, 1, stnum);
						break;
					}
				}
				else {
					printf("\n  현재 마나가 부족합니다.\n\n  계속 하시려면 아무키나 누르세요.\n");
					if (_getch())
						continue;
				}
			}
			if (a == '2') {
				if (clist[cnum].mp >= clist[cnum].skill[2].diff_mp) {
					if (clist[cnum].skill[2].num >= 22 && clist[cnum].skill[2].num <= 24) {
						character_hp_heal(cnum, 2);
						break;
					}
					if (clist[cnum].skill[2].num >= 25 && clist[cnum].skill[2].num <= 27) {
						all_character_hp_heal(cnum, 2);
						break;
					}
					if (clist[cnum].skill[2].num == 28) {
						character_mp_heal(cnum, 2);
						break;
					}
					if (clist[cnum].skill[2].num == 29) {
						all_character_mp_heal(cnum, 2);
						break;
					}
					if (clist[cnum].skill[2].num == 30) {
						all_character_hp_mp_heal(cnum, 2);
						break;
					}
					else {
						cs_attack(cnum, 2, stnum);
						break;
					}
				}
				else {
					printf("\n  현재 마나가 부족합니다.\n\n  계속 하시려면 아무키나 누르세요.\n");
					if (_getch())
						continue;
				}
			}
			if (a == 'b' || a == 'B')
				break;
		}
	}
}

void turn_player() {
	while (1) {
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■  플레이어의 턴!!                                                                                                           ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■  플레이어의 턴입니다!!                                                                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n\n\n");
		print_line();
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}
}

void turn_monster() {
	while (1) {
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  몬스터의 턴!!\n\n");
		printf("  몬스터의 턴입니다!!\n");
		printf("  \n");
		printf("\n\n\n");
		print_line();
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}
}

void choice_stage() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      현재 진행할 수 있는 스테이지                                                     보스                                 ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (stlist[0].is_clear == 1) {
			printf("  ■      0. 프롤로그                                                                   보스 없음                               ■\n");
		}
		else
			printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (stlist[1].is_clear == 1) {
			printf("  ■      1. 스테이지1                                                            조별과제 중간 제출                            ■\n");
		}
		else
			printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (stlist[2].is_clear == 1) {
			printf("  ■      2. 스테이지2                                                                   중간고사                               ■\n");
		}
		else
			printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (stlist[3].is_clear == 1) {
			printf("  ■      3. 스테이지3                                                              조별과제 최종 발표                          ■\n");
		}
		else
			printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (stlist[4].is_clear == 1) {
			printf("  ■      4. 스테이지4                                                                   기말고사                               ■\n");
		}
		else
			printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속하시려면 아무키나 누르세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		if (a == '0') {
			if (stlist[0].is_clear == 1)
				prologue();
		}
		if (a == '1') {
			if (stlist[1].is_clear == 1)
				enter_dungeon1();
		}
		if (a == '2') {
			if (stlist[2].is_clear == 1)
				enter_dungeon2();
		}
		if (a == '3') {
			if (stlist[3].is_clear == 1)
				enter_dungeon3();
		}
		if (a == '4') {
			if (stlist[4].is_clear == 1)
				enter_dungeon4();
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void enter_dungeon1() {

	clist[0].hp = clist[0].fhp;
	clist[1].hp = clist[1].fhp;
	clist[2].hp = clist[2].fhp;
	clist[0].mp = clist[0].fmp;
	clist[1].mp = clist[1].fmp;
	clist[2].mp = clist[2].fmp;
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
		printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
		printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
		printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
		printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
		printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
		printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
		printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
		printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                           ■■■                                                           ■\n");
		printf("  ■                                                         ■■■■                                                           ■\n");
		printf("  ■                                                       ■■  ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                             ■■                                                           ■\n");
		printf("  ■                                                       ■■■■■■■■                                                     ■\n");
		printf("  ■                                                       ■■■■■■■■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속하시려면 아무키나 누르세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		for (int i = 0; i < 3; i++) {
			mlist[i] = empty_mlist[i];
		}
		if (a != 'b' && a != 'B') {
			ditem_1_1();
			while (1) {
				system("cls");
				printf("\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
				printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
				printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
				printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
				printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
				printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
				printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
				printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
				printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                   ■■■■                                    ■■■■                                     ■\n");
				printf("  ■                                 ■■  ■■                                  ■■  ■■                                     ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                       ■■              ■■■■■■              ■■                                     ■\n");
				printf("  ■                                       ■■              ■■■■■■              ■■                                     ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                       ■■                                        ■■                                     ■\n");
				printf("  ■                                 ■■■■■■■■                            ■■■■■■■■                               ■\n");
				printf("  ■                                 ■■■■■■■■                            ■■■■■■■■                               ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("\n  계속하시려면 아무키나 누르세요.\n\n");
				if (_getch())
					break;
			}
			while (check_exter() != 1 && check_exter() != 2) {
				for (int i = 0; i < 3; i++) {
					clist[i].turn = 0;
					mlist[i].turn = 0;
				}
				turn_player();
				c_choice(11);
				if (check_exter() != 2) {
					turn_monster();
					m_choice();
					if (check_exter() == 1) {
						printf("\n\n  캐릭터가 모두 밤샘에 지쳐 쓰러졌습니다!!!!\n  해당 과제를 제출기한에 맞추지 못했습니다.\n\n");
						printf("  계속 하시려면 아무키나 누르세요.\n");
						print_line();
						if (_getch())
							break;
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				mlist[i] = empty_mlist[i];
			}
			ditem_1_2();
			while (1) {
				system("cls");
				printf("\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
				printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
				printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
				printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
				printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
				printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
				printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
				printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
				printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                       ■■                                   ■■■■■                                    ■\n");
				printf("  ■                                       ■■                                 ■■■■■■■                                  ■\n");
				printf("  ■                                   ■■■■                               ■■          ■■                                ■\n");
				printf("  ■                                 ■■  ■■                               ■■          ■■                                ■\n");
				printf("  ■                                       ■■                                             ■■                                ■\n");
				printf("  ■                                       ■■              ■■■■■■                 ■■■                                ■\n");
				printf("  ■                                       ■■              ■■■■■■               ■■■                                  ■\n");
				printf("  ■                                       ■■                                       ■■■                                    ■\n");
				printf("  ■                                       ■■                                     ■■■                                      ■\n");
				printf("  ■                                       ■■                                   ■■■                                        ■\n");
				printf("  ■                                       ■■                                 ■■■                                          ■\n");
				printf("  ■                                 ■■■■■■■■                         ■■■■■■■■■                                ■\n");
				printf("  ■                                 ■■■■■■■■                         ■■■■■■■■■                                ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("\n  계속하시려면 아무키나 누르세요.\n\n");
				if (_getch());
				break;
			}
			while (check_exter() != 1 && check_exter() != 2) {
				for (int i = 0; i < 3; i++) {
					clist[i].turn = 0;
					mlist[i].turn = 0;
				}
				turn_player();
				c_choice(12);
				m_choice();
				if (check_exter() == 1) {
					printf("\n\n  캐릭터가 모두 밤샘에 지쳐 쓰러졌습니다!!!!\n  해당 과제를 제출기한에 맞추지 못했습니다.\n\n");
					printf("  계속 하시려면 아무키나 누르세요.\n");
					print_line();
					if (_getch())
						break;
				}
			}
			for (int i = 0; i < 3; i++) {
				mlist[i] = empty_mlist[i];
			}
			ditem_1_3();
			while (1) {
				system("cls");
				printf("\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
				printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
				printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
				printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
				printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
				printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
				printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
				printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
				printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                       ■■                                      ■■■■■                                 ■\n");
				printf("  ■                                       ■■                                    ■■■■■■■                               ■\n");
				printf("  ■                                   ■■■■                                  ■■        ■■■                             ■\n");
				printf("  ■                                 ■■  ■■                                  ■■          ■■                             ■\n");
				printf("  ■                                       ■■                                    ■■        ■■                             ■\n");
				printf("  ■                                       ■■              ■■■■■■          ■■      ■■                               ■\n");
				printf("  ■                                       ■■              ■■■■■■                  ■■■                               ■\n");
				printf("  ■                                       ■■                                    ■■      ■■                               ■\n");
				printf("  ■                                       ■■                                    ■■        ■■                             ■\n");
				printf("  ■                                       ■■                                  ■■          ■■                             ■\n");
				printf("  ■                                       ■■                                  ■■        ■■■                             ■\n");
				printf("  ■                                 ■■■■■■■■                              ■■■■■■■                               ■\n");
				printf("  ■                                 ■■■■■■■■                                ■■■■■                                 ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("\n  계속하시려면 아무키나 누르세요.\n\n");
				if (_getch());
				break;
			}
			while (check_exter() != 1 && check_exter() != 2) {
				for (int i = 0; i < 3; i++) {
					clist[i].turn = 0;
					mlist[i].turn = 0;
				}
				turn_player();
				c_choice(13);
				m_choice();
				if (check_exter() == 1) {
					printf("\n\n  캐릭터가 모두 밤샘에 지쳐 쓰러졌습니다!!!!\n  해당 과제를 제출기한에 맞추지 못했습니다.\n\n");
					printf("  계속 하시려면 아무키나 누르세요.\n");
					print_line();
					if (_getch())
						break;
				}
			}
			for (int i = 0; i < 3; i++) {
				mlist[i] = empty_mlist[i];
			}
			ditem_1_4();
			while (1) {
				system("cls");
				printf("\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
				printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
				printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
				printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
				printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
				printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
				printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
				printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
				printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                       ■■                                  ■■■■■■■                                 ■\n");
				printf("  ■                                       ■■                                  ■■■■■■■■                               ■\n");
				printf("  ■                                   ■■■■                                  ■■        ■■■                             ■\n");
				printf("  ■                                 ■■  ■■                                  ■■          ■■                             ■\n");
				printf("  ■                                       ■■                                  ■■          ■■                             ■\n");
				printf("  ■                                       ■■              ■■■■■■        ■■        ■■■                             ■\n");
				printf("  ■                                       ■■              ■■■■■■        ■■■■■■■■                               ■\n");
				printf("  ■                                       ■■                                  ■■■■■■■■■                             ■\n");
				printf("  ■                                       ■■                                  ■■          ■■■                           ■\n");
				printf("  ■                                       ■■                                  ■■            ■■                           ■\n");
				printf("  ■                                       ■■                                  ■■            ■■                           ■\n");
				printf("  ■                                 ■■■■■■■■                            ■■■■■■■■■■                           ■\n");
				printf("  ■                                 ■■■■■■■■                            ■■■■■■■■■                             ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■                                                                                                                            ■\n");
				printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
				printf("\n  계속하시려면 아무키나 누르세요.\n\n");
				if (_getch());
				break;
			}
			while (check_exter_boss(1) != 1 || check_exter_boss(1) != 2) {
				for (int i = 0; i < 3; i++) {
					clist[i].turn = 0;
					mlist[i].turn = 0;
				}
				turn_player();
				c_choice(14);
				if (check_exter_boss(1) == 2) {
					printf("  모든 과제를 성공적으로 완수했습니다!!!!\n  하지만 성적은 교수님만이 알고계십니다.");
					printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
					stlist[2].is_clear = 1;
					print_line();
					if (_getch())
						town();
				}
				turn_monster();
				m_choice();
				if (check_exter_boss(1) == 1) {
					printf("  캐릭터가 모두 밤샘에 지켜 쓰러졌습니다!!!!\n  해당 과제를 제출기한에 맞추지 못했습니다.\n\n");
					printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
					print_line();
					if (_getch())
						break;
				}
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void enter_dungeon2() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
		printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
		printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
		printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
		printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
		printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
		printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
		printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
		printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                         ■■■■■                                                         ■\n");
		printf("  ■                                                       ■■■■■■■                                                       ■\n");
		printf("  ■                                                     ■■          ■■                                                     ■\n");
		printf("  ■                                                     ■■          ■■                                                     ■\n");
		printf("  ■                                                                   ■■                                                     ■\n");
		printf("  ■                                                                 ■■■                                                     ■\n");
		printf("  ■                                                               ■■■                                                       ■\n");
		printf("  ■                                                             ■■■                                                         ■\n");
		printf("  ■                                                           ■■■                                                           ■\n");
		printf("  ■                                                         ■■■                                                             ■\n");
		printf("  ■                                                       ■■■                                                               ■\n");
		printf("  ■                                                     ■■■■■■■■■                                                     ■\n");
		printf("  ■                                                     ■■■■■■■■■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속하시려면 아무키나 누르세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		if (a != 'b' && a != 'B') {
			stage2_1_monster();
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void enter_dungeon3() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
		printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
		printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
		printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
		printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
		printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
		printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
		printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
		printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                         ■■■■■                                                         ■\n");
		printf("  ■                                                       ■■■■■■■                                                       ■\n");
		printf("  ■                                                     ■■        ■■■                                                     ■\n");
		printf("  ■                                                     ■■          ■■                                                     ■\n");
		printf("  ■                                                       ■■        ■■                                                     ■\n");
		printf("  ■                                                       ■■      ■■                                                       ■\n");
		printf("  ■                                                               ■■■                                                       ■\n");
		printf("  ■                                                       ■■      ■■                                                       ■\n");
		printf("  ■                                                       ■■        ■■                                                     ■\n");
		printf("  ■                                                     ■■          ■■                                                     ■\n");
		printf("  ■                                                     ■■        ■■■                                                     ■\n");
		printf("  ■                                                       ■■■■■■■                                                       ■\n");
		printf("  ■                                                         ■■■■■                                                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속하시려면 아무키나 누르세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		if (a != 'b' && a != 'B') {
			stage3_1_monster();
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void enter_dungeon4() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■             ■■■■■■      ■■■■■■■■■            ■                ■■■■■      ■■■■■■■■■           ■\n");
		printf("  ■           ■            ■    ■      ■      ■          ■■■            ■          ■    ■                           ■\n");
		printf("  ■           ■            ■            ■                  ■  ■          ■                  ■                           ■\n");
		printf("  ■           ■                          ■                ■      ■        ■                  ■                           ■\n");
		printf("  ■             ■■■■■■              ■                ■      ■        ■                  ■■■■■■■■             ■\n");
		printf("  ■                         ■            ■              ■          ■      ■        ■■■    ■                           ■\n");
		printf("  ■           ■            ■            ■              ■■■■■■■      ■            ■    ■                           ■\n");
		printf("  ■           ■            ■            ■            ■              ■      ■          ■    ■                           ■\n");
		printf("  ■             ■■■■■■              ■            ■              ■        ■■■■■■    ■■■■■■■■■           ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                               ■■                                                         ■\n");
		printf("  ■                                                             ■■■                                                         ■\n");
		printf("  ■                                                           ■■■■                                                         ■\n");
		printf("  ■                                                         ■■  ■■                                                         ■\n");
		printf("  ■                                                       ■■    ■■                                                         ■\n");
		printf("  ■                                                     ■■      ■■                                                         ■\n");
		printf("  ■                                                   ■■■      ■■                                                         ■\n");
		printf("  ■                                                   ■■■■■■■■■■                                                     ■\n");
		printf("  ■                                                   ■■■■■■■■■■                                                     ■\n");
		printf("  ■                                                               ■■                                                         ■\n");
		printf("  ■                                                               ■■                                                         ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  계속하시려면 아무키나 누르세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		if (a != 'b' && a != 'B') {
			stage4_1_monster();
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void double_attack(int cnum, int snum, int stnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %-4s의 %20s 스킬!!                               = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, slist[snum].name);
		printf("  1. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, slist[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, slist[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, slist[snum].name, mlist[2].name);
		printf("\n\n  공격할 적을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (mlist[0].condition == 0) {
				if (snum == 3) {
					damage_character_to_monster(cnum, 0, 0);
					damage_character_to_monster(cnum, 0, 0);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_monster(cnum, 2, stnum);
					clist[cnum].turn = 1;
					break;
				}
				if (snum == 4) {
					damage_character_to_monster(cnum, 0, 0);
					damage_character_to_monster(cnum, 0, 0);
					damage_character_to_monster(cnum, 0, 0);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_monster(cnum, 2, stnum);
					clist[cnum].turn = 1;
					break;
				}
			}
			else {
				printf("  이미 죽은 상대입니다.\n\n  계속하시려면 아무키나 누르세요.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (mlist[0].condition == 0) {
				if (snum == 3) {
					damage_character_to_monster(cnum, 1, 0);
					damage_character_to_monster(cnum, 1, 0);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_monster(cnum, 2, stnum);
					clist[cnum].turn = 1;
					break;
				}
				if (snum == 4) {
					damage_character_to_monster(cnum, 1, 0);
					damage_character_to_monster(cnum, 1, 0);
					damage_character_to_monster(cnum, 1, 0);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_monster(cnum, 2, stnum);
					clist[cnum].turn = 1;
					break;
				}
			}
			else {
				printf("  이미 죽은 상대입니다.\n\n  계속하시려면 아무키나 누르세요.\n");
				if (_getch())
					continue;
			}
		}

		if (a == '3') {
			if (mlist[0].condition == 0) {
				if (snum == 3) {
					damage_character_to_monster(cnum, 2, 0);
					damage_character_to_monster(cnum, 2, 0);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_monster(cnum, 2, stnum);
					clist[cnum].turn = 1;
					break;
				}
				if (snum == 4) {
					damage_character_to_monster(cnum, 2, 0);
					damage_character_to_monster(cnum, 2, 0);
					damage_character_to_monster(cnum, 2, 0);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_monster(cnum, 2, stnum);
					clist[cnum].turn = 1;
					break;
				}
			}
			else {
				printf("  이미 죽은 상대입니다.\n\n  계속하시려면 아무키나 누르세요.\n");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void wide_attack(int cnum, int snum, int stnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, slist[snum].name);
		printf("     %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, slist[snum].name, mlist[0].name);
		printf("     %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, slist[snum].name, mlist[1].name);
		printf("     %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, slist[snum].name, mlist[2].name);
		printf("\n\n  광역기 입니다.\n\n  계속 진행하시려면 아무키나 눌러주세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;

		if (a != 'b' && a != 'B') {
			if (snum != 15) {
				damage_character_to_monster(cnum, 0, snum);
				damage_character_to_monster(cnum, 1, snum);
				damage_character_to_monster(cnum, 2, snum);
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_monster(cnum, 0, stnum);
				clist[cnum].turn = 1;
				break;
			}
			if (snum == 15) {
				mlist[0].is_stun = 1;
				mlist[1].is_stun = 1;
				mlist[2].is_stun = 1;
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_monster(cnum, 0, stnum);
				hit_monster(cnum, 1, stnum);
				hit_monster(cnum, 2, stnum);
				clist[cnum].turn = 1;
				break;
			}
		}
	}
}

void stun_attack(int cnum, int snum, int stnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, slist[snum].name);
		printf("  1. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, slist[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, slist[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, slist[snum].name, mlist[2].name);
		printf("\n\n  공격할 적을 선택하세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (mlist[0].condition == 0) {
				mlist[0].is_stun = 2;
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_monster(cnum, 0, stnum);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("  이미 죽은 상대입니다.\n\n  계속하시려면 아무키나 누르세요.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (mlist[1].condition == 0) {
				mlist[1].is_stun = 2;
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_monster(cnum, 1, stnum);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("  이미 죽은 상대입니다.\n\n  계속하시려면 아무키나 누르세요.\n");
				if(_getch())
					continue;
			}
		}
		if (a == '3') {
			if (mlist[2].condition == 0) {
				mlist[2].is_stun = 2;
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_monster(cnum, 2, stnum);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("  이미 죽은 상대입니다.\n\n  계속하시려면 아무키나 누르세요.\n");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void armor(int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, slist[snum].name);
		if (snum == 16)
			printf("\n\n  해당 캐릭터가 %d회의 공격을 무시합니다.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n", 1);
		if (snum == 17)
			printf("\n\n  해당 캐릭터가 %d회의 공격을 무시합니다.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n", 2);
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		if (a != 'b' && a != 'B') {
			if (snum == 16) {
				clist[cnum].mp -= slist[snum].diff_mp;
				clist[cnum].armor = 1;
				clist[cnum].turn = 1;
				break;
			}
			if (snum == 17) {
				clist[cnum].mp -= slist[snum].diff_mp;
				clist[cnum].armor = 2;
				clist[cnum].turn = 1;
				break;
			}
		}
	}
}

void m_choice() {
	for (int i = 0; i < 3; i++) {
		if (mlist[i].turn == 0) {
			if (mlist[i].hp > 0) {
				int who;
				who = choice_monster_to_character();
				while (1) {
					system("cls");
					print_line();
					print_map();
					print_line();
					printf("\n");
					print_hp();
					print_line();
					printf("\n");
					printf("  %s이(가) %s을(를) 공격!!                                              = 선택된 몬스터입니다.\n\n", mlist[i].name, clist[who].name);
					printf("\n\n");
					printf("\n\n");
					printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
					damage_monster_to_character(who, i);
					print_line();
					if (_getch())
						break;
				}
				if (mlist[i].is_stun == 0) {
					event_hit();

					while (1) {
						system("cls");
						print_line();
						print_map();
						print_line();
						printf("\n");
						print_hp();
						print_line();
						printf("\n");
						printf("\n\n");
						printf("  %s이(가) %d의 데미지를 입음!!!                                = %s이(가) %d의 데미지를 입었습니다.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
						kill_character(0);
						mlist[i].turn = 1;
						printf("\n\n");
						printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
						print_line();
						if (_getch())
							break;
					}
				}
				if (mlist[i].is_stun > 0) {
					stun(i);
					mlist[i].is_stun--;
				}
			}
		}
	}
}

void stun(int mnum) {
	while (1) {
		printf("  %s은(는) 현재 스턴상태입니다!!!                                \n", mlist[mnum].name);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		mlist[mnum].turn = 1;
		print_line();
		if (_getch())
			break;
	}
}

void hit_monster(int cnum, int mnum, int stnum) {

	event_hit();

	while (1) {
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s의 공격!!                                                   = 선택한 캐릭터입니다.\n\n", clist[cnum].name);
		printf("  총 %d의 데미지!!!                               = %s이(가) %d의 데미지를 입었습니다.\n", hit_damage, mlist[mnum].name, hit_damage);
		kill_monster(cnum, stnum);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}
}

void statp_check() {
	for (int i = 0; i < 3; i++) {
		clist[i].att += clist[i].readership + clist[i].item[0].add_readership + clist[i].item[1].add_readership;
		clist[i].def += clist[i].noteship + clist[i].item[0].add_noteship + clist[i].item[1].add_noteship;
		clist[i].fhp += clist[i].item[0].add_hp + clist[i].item[1].add_hp;
		clist[i].fmp += clist[i].item[0].add_mp + clist[i].item[1].add_mp + ((clist[i].wealth + clist[i].item[0].add_wealth + clist[i].item[1].add_wealth) * 2);
	}
}

void statm_check() {
	for (int i = 0; i < 3; i++) {
		clist[i].att = 0;
		clist[i].def = 0;
		clist[i].fhp = 100;
		clist[i].fmp = 100;
	}
}

void character_hp_heal(int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %-4s의 %-20s 스킬!!                               = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("                                                      현재 남은 hp\n");
		printf("  1. %s                                                  %3d      = %s스킬로 %s을 회복합니다.\n", clist[0].name, clist[0].hp, clist[cnum].skill[snum].name, clist[0].name);
		printf("  2. %s                                                  %3d      = %s스킬로 %s을 회복합니다.\n", clist[1].name, clist[1].hp, clist[cnum].skill[snum].name, clist[1].name);
		printf("  3. %s                                                  %3d      = %s스킬로 %s을 회복합니다.\n", clist[2].name, clist[2].hp, clist[cnum].skill[snum].name, clist[2].name);
		printf("\n\n  회복할 캐릭터를 선택하세요.\n");
		print_line();
		a = _getch();

		if (a == '1') {
			if (clist[0].condition == 1) {					//죽었는데 회복하려는 경우
				printf("  해당 캐릭터는 이미 죽었습니다. 다른 캐릭터를 선택하려면 아무키나 눌러주세요. \n");
				if (_getch())
					continue;
			}
			if (clist[0].condition == 0) {					//살아있는데 회복하려는 경우
				if (clist[0].fhp < clist[0].hp + clist[cnum].skill[snum].add_hp)
					clist[0].hp = clist[0].fhp;
				else
					clist[0].hp += clist[cnum].skill[snum].add_hp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			}
		}
		if (a == '2') {
			if (clist[1].condition == 1) {					//죽었는데 회복하려는 경우
				printf("  해당 캐릭터는 이미 죽었습니다. 다른 캐릭터를 선택하려면 아무키나 눌러주세요. \n");
				if (_getch())
					continue;
			}
			if (clist[1].condition == 0) {					//살아있는데 회복하려는 경우
				if (clist[1].fhp < clist[1].hp + clist[cnum].skill[snum].add_hp)
					clist[1].hp = clist[1].fhp;
				else
					clist[1].hp += clist[cnum].skill[snum].add_hp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			}
		}
		if (a == '3') {
			if (clist[2].condition == 1) {					//죽었는데 회복하려는 경우
				printf("  해당 캐릭터는 이미 죽었습니다. 다른 캐릭터를 선택하려면 아무키나 눌러주세요. \n");
				if (_getch())
					continue;
			}
			if (clist[2].condition == 0) {					//살아있는데 회복하려는 경우
				if (clist[2].fhp < clist[2].hp + clist[cnum].skill[snum].add_hp)
					clist[2].hp = clist[2].fhp;
				else
					clist[2].hp += clist[cnum].skill[snum].add_hp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			}
		}
		clist[cnum].turn = 1;
		break;
		if (a == 'b' || a == 'B')
			break;
	}
}

void all_character_hp_heal(int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %-4s의 %-20s 스킬!!                               = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("                                                      현재 남은 hp\n");
		printf("     %s                                                  %3d      = %s스킬로 %s을 회복합니다.\n", clist[0].name, clist[0].hp, clist[cnum].skill[snum].name, clist[0].name);
		printf("     %s                                                  %3d      = %s스킬로 %s을 회복합니다.\n", clist[1].name, clist[1].hp, clist[cnum].skill[snum].name, clist[1].name);
		printf("     %s                                                  %3d      = %s스킬로 %s을 회복합니다.\n", clist[2].name, clist[2].hp, clist[cnum].skill[snum].name, clist[2].name);
		print_line();
		printf("\n\n  광역기 입니다.\n\n  계속 진행하시려면 아무키나 눌러주세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		a = _getch();		
		if (a == 'b' || a == 'B')
			break;
		else {
			for (int i = 0; i < 3; i++) {
				if (clist[i].condition == 0) {					//살아있는데 회복하려는 경우
					if (clist[i].fhp <= clist[i].hp + clist[cnum].skill[snum].add_hp)
						clist[i].hp = clist[i].fhp;
					else
						clist[i].hp += clist[cnum].skill[snum].add_hp;
				}
			}
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			clist[cnum].turn = 1;
			break;
		}
	}
}

void character_mp_heal(int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %-4s의 %-20s 스킬!!                               = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("                                                      현재 남은 mp\n");
		printf("  1. %s                                               %3d      = %s스킬로 %s을 회복합니다.\n", clist[0].name, clist[0].mp, clist[cnum].skill[snum].name, clist[0].name);
		printf("  2. %s                                               %3d      = %s스킬로 %s을 회복합니다.\n", clist[1].name, clist[1].mp, clist[cnum].skill[snum].name, clist[1].name);
		printf("  3. %s                                               %3d      = %s스킬로 %s을 회복합니다.\n", clist[2].name, clist[2].mp, clist[cnum].skill[snum].name, clist[2].name);
		printf("\n\n  회복할 캐릭터를 선택하세요.\n");
		print_line();
		a = _getch();
		for (int i = 0; i < 3; i++) {
			if (a == i + 49) {
				if (clist[i].condition == 1) {					//죽었는데 회복하려는 경우
					printf("  해당 캐릭터는 이미 죽었습니다. 다른 캐릭터를 선택하려면 아무키나 눌러주세요. \n");
					if (_getch())
						continue;
				}

				if (clist[i].condition == 0) {					//살아있는데 회복하려는 경우
					if (clist[i].fmp < clist[i].mp + clist[cnum].skill[snum].add_mp)
						clist[i].mp = clist[i].fmp;
					else
						clist[i].mp += clist[cnum].skill[snum].add_mp;

					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
				}
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void all_character_mp_heal(int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %-4s의 %-20s 스킬!!                               = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("                                                      현재 남은 mp\n");
		printf("     %s                                               %3d      = %s스킬로 %s을 회복합니다.\n", clist[0].name, clist[0].mp, clist[cnum].skill[snum].name, clist[0].name);
		printf("     %s                                               %3d      = %s스킬로 %s을 회복합니다.\n", clist[1].name, clist[1].mp, clist[cnum].skill[snum].name, clist[1].name);
		printf("     %s                                               %3d      = %s스킬로 %s을 회복합니다.\n", clist[2].name, clist[2].mp, clist[cnum].skill[snum].name, clist[2].name);
		print_line();
		printf("\n\n  광역기 입니다.\n\n  계속 진행하시려면 아무키나 눌러주세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		else {
			for (int i = 0; i < 3; i++) {
				if (clist[i].condition == 0) {					//살아있는데 회복하려는 경우
					if (clist[i].fmp < clist[i].mp + clist[cnum].skill[snum].add_mp)
						clist[i].mp = clist[i].fmp;
					else
						clist[i].mp += clist[cnum].skill[snum].add_mp;
				}
			}
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
		}
	}
}

void all_character_hp_mp_heal(int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %-4s의 %-20s 스킬!!                               = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("                                    현재 남은 hp      현재 남은 mp\n");
		printf("     %s                             %3d               %3d      = %s스킬로 %s을 회복합니다.\n", clist[0].name, clist[0].hp, clist[0].mp, clist[cnum].skill[snum].name, clist[0].name);
		printf("     %s                             %3d               %3d      = %s스킬로 %s을 회복합니다.\n", clist[1].name, clist[1].hp, clist[1].mp, clist[cnum].skill[snum].name, clist[1].name);
		printf("     %s                             %3d               %3d      = %s스킬로 %s을 회복합니다.\n", clist[2].name, clist[2].hp, clist[2].mp, clist[cnum].skill[snum].name, clist[2].name);
		print_line();
		printf("\n\n  광역기 입니다.\n\n  계속 진행하시려면 아무키나 눌러주세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		else {
			for (int i = 0; i < 3; i++) {
				if (clist[i].condition == 0) {					//살아있는데 회복하려는 경우
					if (clist[i].condition == 0) {
						if (clist[i].fhp < clist[i].hp + clist[cnum].skill[snum].add_hp)
							clist[i].hp = clist[i].fhp;
						else
							clist[i].hp += clist[cnum].skill[snum].add_hp;

						if (clist[i].fmp < clist[i].mp + clist[cnum].skill[snum].add_mp)
							clist[i].mp = clist[i].fmp;
						else
							clist[i].mp += clist[cnum].skill[snum].add_mp;
					}
				}
			}
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
		}
	}
}