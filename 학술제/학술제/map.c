// made by 김종은

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"combat.h"
#include"menu.h"
#include"exp.h"

void print_line() {
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void print_map() {
	printf("\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  %s                                                           ○                                             %18s\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("                                                                 ○                                             %18s\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  %s                                                           ○                                                             \n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("                                                                 ○                                                             \n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  %s                                                           ○                                             %18s\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("                                                                 ○                                             %18s\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  %s                                                           ○                                                             \n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("                                                                 ○                                                             \n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  %s                                                           ○                                             %18s\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("                                                                 ○                                             %18s\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  %s                                                           ○                                                             \n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                                 ○                                                             \n");
	printf("\n");
}

void print_hp() {
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  %s의 체력 : %3d / %3d                                        ○                          %18s의 체력 : %3d / %3d\n", clist[0].name, clist[0].hp, clist[0].fhp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("                                                                 ○                          %18s의 체력 : %3d / %3d\n", mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  %s의 체력 : %3d / %3d                                        ○                                                             \n", clist[0].name, clist[0].hp, clist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("                                                                 ○                                                             \n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  %s의 체력 : %3d / %3d                                        ○                          %18s의 체력 : %3d / %3d\n", clist[1].name, clist[1].hp, clist[1].fhp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("                                                                 ○                          %18s의 체력 : %3d / %3d\n", mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  %s의 체력 : %3d / %3d                                        ○                                                             \n", clist[1].name, clist[1].hp, clist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("                                                                 ○                                                             \n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  %s의 체력 : %3d / %3d                                        ○                          %18s의 체력 : %3d / %3d\n", clist[2].name, clist[2].hp, clist[2].fhp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("                                                                 ○                          %18s의 체력 : %3d / %3d\n", mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  %s의 체력 : %3d / %3d                                        ○                                                             \n", clist[2].name, clist[2].hp, clist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                                 ○                                                             \n");
	printf("\n");
}

void print_choice_mon() {
	if (mlist[0].hp > 0)
		printf("  1. %s                                                        = %s을 공격합니다.\n", mlist[0].name, mlist[0].name);
	if (mlist[0].hp <= 0)
		printf("                                                                \n");
	if (mlist[1].hp > 0)
		printf("  2. %s                                                        = %s을 공격합니다.\n", mlist[1].name, mlist[1].name);
	if (mlist[1].hp <= 0)
		printf("                                                                \n");
	if (mlist[2].hp > 0)
		printf("  3. %s                                                        = %s을 공격합니다.\n", mlist[2].name, mlist[2].name);
	if (mlist[2].hp <= 0)
		printf("                                                                \n");
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
		kill_monster(2, 0);
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
}

////////////////////////////////////////////////////////////   여기까지 프롤로그   ////////////////////////////////////////////////////////////

void c_choice() {
	while (1) {
		for (int i = 0; i < 3; i++) {
			if (clist[i].turn == 0) {
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
					printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[i].name);
					printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
					printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
					printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
					printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
					printf("\n\n  기술을 선택하시오.\n");
					print_line();
					a = _getch();
					if (a == '1') {
						c_attack(i);
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
						c_skill(i);
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
						i--;
						continue;
					}
					else
						continue;
				}
			}
		}
		break;
	}
}

void c_attack(int cnum) {
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
		printf("  %s의 공격!!                                              = 선택한 캐릭터의 공격!\n\n", clist[cnum].name);

		if (mlist[0].hp > 0)
			printf("  1. %s                                                        = %s을 공격합니다.\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  1.                                                              \n");

		if (mlist[1].hp > 0)
			printf("  2. %s                                                        = %s을 공격합니다.\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  2.                                                              \n");

		if (mlist[2].hp > 0)
			printf("  3. %s                                                        = %s을 공격합니다.\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  3.                                                              \n");

		printf("\n\n  공격할 적을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (mlist[0].hp > 0) {
				damage_character_to_monster(cnum, 0, 0);
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

void cs_attack(int cnum, int snum) {
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
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  1. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  공격할 적을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			damage_character_to_monster(cnum, 0, snum);
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			clist[cnum].turn = 1;
			break;
		}
		if (a == '2') {
			damage_character_to_monster(cnum, 1, snum);
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			clist[cnum].turn = 1;
			break;
		}
		if (a == '3') {
			damage_character_to_monster(cnum, 2, snum);
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			clist[cnum].turn = 1;
			break;
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void c_skill(int cnum) {
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
		printf("  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.\n\n", clist[cnum].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s의 스킬을 선택합니다.\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s의 스킬을 선택합니다.\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].name);
		printf("\n\n  스킬을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (
				clist[cnum].mp >= clist[cnum].skill[1].diff_mp) {
				if (clist[cnum].skill[1].num == 3 || clist[cnum].skill[1].num == 4)
					double_attack(cnum, slist[clist[cnum].skill[1].num].num);
				if (clist[cnum].skill[1].num == 5 || clist[cnum].skill[1].num == 6 || clist[cnum].skill[1].num == 7 || clist[cnum].skill[1].num == 13 || clist[cnum].skill[1].num == 15)
					wide_attack(cnum, slist[clist[cnum].skill[1].num].num);
				if (clist[cnum].skill[1].num == 14)
					stun_attack(cnum, slist[clist[cnum].skill[1].num].num);
				if (clist[cnum].skill[1].num == 16)
					armor(cnum, slist[clist[cnum].skill[1].num].num);
				else {
					cs_attack(cnum, 1);
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
				if (clist[cnum].skill[2].num == 3 || clist[cnum].skill[2].num == 4)
					double_attack(cnum, slist[clist[cnum].skill[2].num].num);
				if (clist[cnum].skill[2].num == 5 || clist[cnum].skill[2].num == 6 || clist[cnum].skill[2].num == 7 || clist[cnum].skill[2].num == 13 || clist[cnum].skill[2].num == 15)
					wide_attack(cnum, slist[clist[cnum].skill[2].num].num);
				if (clist[cnum].skill[2].num == 14)
					stun_attack(cnum, slist[clist[cnum].skill[2].num].num);
				if (clist[cnum].skill[1].num == 16)
					armor(cnum, slist[clist[cnum].skill[2].num].num);
				else {
					cs_attack(cnum, 2);
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

void turn_player() {
	while (1) {
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  플레이어의 턴!!\n\n");
		printf("  플레이어의 턴입니다!!\n");
		printf("  \n");
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
				c_choice();
		}
		if (a == '3') {
			if (stlist[3].is_clear == 1)
				c_choice();
		}
		if (a == '4') {
			if (stlist[4].is_clear == 1)
				c_choice();
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void enter_dungeon1() {
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
			stage1_1_monster();
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
				c_choice();
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
			stage1_2_monster();
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
				c_choice();
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
			stage1_3_monster();
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
				c_choice();
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
			stage1_B_monster();
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
				c_choice();
				if (check_exter_boss(1) == 2) {
					printf("  모든 과제를 성공적으로 완수했습니다!!!!\n  하지만 성적은 교수님만이 알고계십니다.");
					printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
					print_line();
					if (_getch())
						break;
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

void double_attack(int cnum, int snum) {
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
		printf("  1. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  공격할 적을 선택하세요.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (snum == 3) {
				damage_character_to_monster(cnum, 0, 0);
				damage_character_to_monster(cnum, 0, 0);
				clist[cnum].mp -= slist[snum].diff_mp;
			}
			if (snum == 4) {
				damage_character_to_monster(cnum, 0, 0);
				damage_character_to_monster(cnum, 0, 0);
				damage_character_to_monster(cnum, 0, 0);
				clist[cnum].mp -= slist[snum].diff_mp;
			}
		}
		if (a == '2') {
			if (snum == 3) {
				damage_character_to_monster(cnum, 1, 0);
				damage_character_to_monster(cnum, 1, 0);
				clist[cnum].mp -= slist[snum].diff_mp;
			}
			if (snum == 4) {
				damage_character_to_monster(cnum, 1, 0);
				damage_character_to_monster(cnum, 1, 0);
				damage_character_to_monster(cnum, 1, 0);
				clist[cnum].mp -= slist[snum].diff_mp;
			}
		}

		if (a == '3') {
			if (snum == 3) {
				damage_character_to_monster(cnum, 2, 0);
				damage_character_to_monster(cnum, 2, 0);
				clist[cnum].mp -= slist[snum].diff_mp;
			}
			if (snum == 4) {
				damage_character_to_monster(cnum, 2, 0);
				damage_character_to_monster(cnum, 2, 0);
				damage_character_to_monster(cnum, 2, 0);
				clist[cnum].mp -= slist[snum].diff_mp;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void wide_attack(int cnum, int snum) {
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
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("     %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("     %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("     %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  광역기 입니다.\n\n  계속 진행하시려면 아무키나 눌러주세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;

		if (_getch()) {
			if (snum != 15) {
				damage_character_to_monster(cnum, 0, snum);
				damage_character_to_monster(cnum, 1, snum);
				damage_character_to_monster(cnum, 2, snum);
				clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			}
			if (snum == 15) {
				mlist[0].is_stun = 1;
				mlist[1].is_stun = 1;
				mlist[2].is_stun = 1;
				clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			}
		}
	}
}

void stun_attack(int cnum, int snum) {
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
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  1. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  공격할 적을 선택하세요.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n");
		print_line();
		a = _getch();
		if (a == '1') {
			mlist[0].is_stun = 1;
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
		}
		if (a == '2') {
			mlist[1].is_stun = 1;
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
		}
		if (a == '3') {
			mlist[2].is_stun = 1;
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
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
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		if (snum == 16)
			printf("\n\n  해당 캐릭터가 %d회의 공격을 무시합니다.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n", 1);
		if (snum == 17)
			printf("\n\n  해당 캐릭터가 %d회의 공격을 무시합니다.\n\n  뒤로가고 싶으시면 'b'를 눌러주세요.\n\n", 2);
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		if (_getch()) {
			if (snum == 16)
				clist[cnum].armor = 1;
			if (snum == 17)
				clist[cnum].armor = 2;
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
					damage_monster_to_character(who, 0);
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
				if (mlist[i].is_stun == 1)
					stun(i);
			}
		}
	}
}

void stun(int mnum) {
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
		printf("  %s은(는) 현재 스턴상태입니다!!!                                \n", mlist[mnum].name);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		mlist[mnum].turn = 1;
		print_line();
		if (_getch())
			break;
	}
}