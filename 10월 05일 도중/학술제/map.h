// made by ������

#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"character.h"
#include"monster.h"
#include"combet.h"
#include"menu.h"


void print_line();
void hit1();
void hit2();
void event_hit();
void print_map(CHA clist[3], MON mlist[3]);
void print_hp(CHA clist[3], MON mlist[3]);
void print_choice_mon(CHA clist[3], MON mlist[3]);
void dungeon(CHA clist[3], MON mlist[3]);
void prologue();
void c_choice(CHA clist[3], MON mlist[3], int cnum);
void c_attack(CHA clist[3], MON mlist[3], int cnum);
void cs_attack(CHA clist[3], MON mlist[3], int cnum, int snum);
void c_skill(CHA clist[3], MON mlist[3], int cnum);
void turn_player();
void turn_monster();

void print_line() {
	printf("�������������������������������������������������������������������\n");
}

void print_map(CHA clist[3], MON mlist[3]) {
	printf("\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  %s                                                           ��                                                        %s\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("                                                                 ��                                                        %s\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  %s                                                           ��                                                             \n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  %s                                                           ��                                                        %s\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("                                                                 ��                                                        %s\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  %s                                                           ��                                                             \n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  %s                                                           ��                                                        %s\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("                                                                 ��                                                        %s\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  %s                                                           ��                                                             \n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                                 ��                                                             \n");
	printf("\n");
}

void print_hp(CHA clist[3], MON mlist[3]) {
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                     %s�� ü�� : %3d / %3d\n", clist[0].name, clist[0].hp, clist[0].fhp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("                                                                 ��                                     %s�� ü�� : %3d / %3d\n", mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                                             \n", clist[0].name, clist[0].hp, clist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                     %s�� ü�� : %3d / %3d\n", clist[1].name, clist[1].hp, clist[1].fhp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("                                                                 ��                                     %s�� ü�� : %3d / %3d\n", mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                                             \n", clist[1].name, clist[1].hp, clist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                     %s�� ü�� : %3d / %3d\n", clist[2].name, clist[2].hp, clist[2].fhp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("                                                                 ��                                     %s�� ü�� : %3d / %3d\n", mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                                             \n", clist[2].name, clist[2].hp, clist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                                 ��                                                             \n");
	printf("\n");
}

void print_choice_mon(CHA clist[3], MON mlist[3]) {
	if (mlist[0].hp > 0)
		printf("  1. %s                                                        = %s�� �����մϴ�.\n", mlist[0].name, mlist[0].name);
	if (mlist[0].hp <= 0)
		printf("                                                                \n");
	if (mlist[1].hp > 0)
		printf("  2. %s                                                        = %s�� �����մϴ�.\n", mlist[1].name, mlist[1].name);
	if (mlist[1].hp <= 0)
		printf("                                                                \n");
	if (mlist[2].hp > 0)
		printf("  3. %s                                                        = %s�� �����մϴ�.\n", mlist[2].name, mlist[2].name);
	if (mlist[2].hp <= 0)
		printf("                                                                \n");
}

void dungeon(CHA clist[3], MON mlist[3]) {
	system("cls");
	print_line();
	printf("\n");
	printf("%s                                                          ��                                                          %s\n", clist[0].name, mlist[0].name);
	printf("%s                                                          ��                                                          %s\n", clist[1].name, mlist[1].name);
	printf("%s                                                          ��                                                          %s\n", clist[2].name, mlist[2].name);
	printf("\n");
	print_line();
	print_hp(clist, mlist);
	print_line();
	printf("\n");
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

////////////////////////////////////////////////////////////   ������� ���ѷα�   ////////////////////////////////////////////////////////////

void prologue() {
	while (1) {
		system("cls");
		print_line();
		printf("  ���ѷα��Դϴ�.~~~~~~\n    �� ������ �������� �������� �ʽ��ϴ�!!!!!\n    �����ϰ� ������ ���ּ���!!!!!\n    ����Ű�� ������ ���� �������� �ѹ��� �Ѿ ���� �ֽ��ϴ�.�Ф�\n\n\n    ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("  ����1111111111111111����11111111111111����11111111111111\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("  ����222222222222222����222222222222222����222222222222222\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("  ����333333333333333����333333333333333����333333333333333\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	turn_player();

	while (1) {															//////////////// ���ѷα� c0 �������
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[0].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		printf("\n    �ؾƱ� ĳ���ʹ� ����, ����, ���� ������ ����˴ϴ�.\n    ����� ����� �������� �ʽ��ϴ�!! \n    ������ �����ϼ���.");
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c0 ��ų����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.\n\n", clist[0].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].add_def, clist[0].skill[2].diff_mp, clist[0].name);
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c0 ��� ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		print_choice_mon(clist, mlist);
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '3')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c0 ��� ȿ��
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		damage_character_to_monster(clist, mlist, 0, 2, 2);
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  %s�� %d�� �������� ����!!!                                   = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		clist[0].mp -= clist[0].skill[2].diff_mp;
		kill_monster(clist, mlist, stlist, 0, 0);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c1 �������
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[1].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '1'�� ��������.\n");
		print_line();
		printf("\n    �������� ���ݿ� Ưȭ(����)�Ǿ��ְ�, ����� ���(��Ŀ), ������ ȸ���� Ưȭ(����)�Ǿ� �ֽ��ϴ�.");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c1 ��� ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[1].name);
		print_choice_mon(clist, mlist);
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '3') {
			damage_character_to_monster(clist, mlist, 1, 2, 0);
			break;
		}
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c1 ���� ȿ��
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[1].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		prologue_kill_monster(clist, mlist, stlist, 1, 0);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c2 �������
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[2].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '1'�� ��������.\n");
		print_line();
		printf("\n    �ذ��� Ư���� ������ ��� �⺻������ �� �� �ֽ��ϴ�.");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c2 ��� ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[2].name);
		print_choice_mon(clist, mlist);
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		damage_character_to_monster(clist, mlist, 2, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c2 ���� ȿ��
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[2].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		kill_monster(clist, mlist, stlist, 2, 0);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	turn_monster();

	{
		int who;
		who = choice_monster_to_character();
		while (1) {															//////////////// ���ѷα� m0 ���� 
			system("cls");
			print_line();
			print_map(clist, mlist);
			print_line();
			printf("\n");
			print_hp(clist, mlist);
			print_line();
			printf("\n");
			printf("  %s��(��) %s��(��) ����!!                                              = ���õ� �����Դϴ�.\n\n", mlist[0].name, clist[who].name);
			printf("\n\n");
			printf("\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			damage_monster_to_character(clist, mlist, who, 0);
			print_line();
			if (_getch())
				break;
		}

		event_hit();

		while (1) {															//////////////// ���ѷα� m0 ���� ȿ��
			system("cls");
			print_line();
			print_map(clist, mlist);
			print_line();
			printf("\n");
			print_hp(clist, mlist);
			print_line();
			printf("\n");
			printf("\n\n");
			printf("  %s��(��) %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			kill_character(clist, mlist, stlist, 0);
			printf("\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}
	}

	{
		int who;
		who = choice_monster_to_character();
		while (1) {															//////////////// ���ѷα� m1 ����
			system("cls");
			print_line();
			print_map(clist, mlist);
			print_line();
			printf("\n");
			print_hp(clist, mlist);
			print_line();
			printf("\n");
			printf("  %s��(��) %s��(��) ����!!                                              = ���õ� �����Դϴ�.\n\n", mlist[1].name, clist[who].name);
			printf("\n\n");
			printf("\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			damage_monster_to_character(clist, mlist, who, 1);
			print_line();
			if (_getch())
				break;
		}

		event_hit();

		while (1) {															//////////////// ���ѷα� m1 ���� ȿ��
			system("cls");
			print_line();
			print_map(clist, mlist);
			print_line();
			printf("\n");
			print_hp(clist, mlist);
			print_line();
			printf("\n");
			printf("\n\n");
			printf("  %s��(��) %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			kill_character(clist, mlist, stlist, 1);
			printf("\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}
	}

	turn_player();

	while (1) {															//////////////// ���ѷα� c0 ��� ȿ��
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[0].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		printf("\n    ����� ����� �������� �ʽ��ϴ�!! \n    ������ �����ϼ���.");
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c0 ��ų ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.\n\n", clist[0].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].add_def, clist[0].skill[2].diff_mp, clist[0].name);
		printf("\n\n  ��� �Ͻ÷��� '1'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c0 ��� ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		print_choice_mon(clist, mlist);
		printf("\n\n  ��� �Ͻ÷��� '1'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c0 ��� ȿ��
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		damage_character_to_monster(clist, mlist, 0, 0, 1);
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[0].name);
		printf("  %s�� %d�� �������� ����!!!                                   = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[0].name, hit_damage, mlist[0].name, hit_damage);
		prologue_kill_monster(clist, mlist, stlist, 0, 0);
		clist[0].mp -= clist[0].skill[1].diff_mp;
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c1 �������
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[1].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '1'�� ��������.\n");
		print_line();
		printf("\n    �������� ���ݿ� Ưȭ(����)�Ǿ��ְ�, ����� ���(��Ŀ), ������ ȸ���� Ưȭ(����)�Ǿ� �ֽ��ϴ�.\n    ��Ưȭ�Ǿ��ִ�  �ɷ� �ܿ� �⺻������ ������ �����մϴ�.\n");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c1 ��� ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[1].name);
		print_choice_mon(clist, mlist);
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		damage_character_to_monster(clist, mlist, 1, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c1 ���� ȿ��
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[1].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		prologue_kill_monster(clist, mlist, stlist, 1, 0);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c2 �������
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[2].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
		print_line();
		printf("\n    �ذ��� Ư���� ������ ��� �⺻������ �� �� �ֽ��ϴ�.");
		a = _getch();
		if (a == '3') {
			dun_inventory(clist);
			break;
		}
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c2 �������
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[2].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '1'�� ��������.\n");
		print_line();
		printf("\n    �ذ��� Ư���� ������ ��� �⺻������ �� �� �ֽ��ϴ�.");
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c2 ��� ����
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[2].name);
		print_choice_mon(clist, mlist);
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		damage_character_to_monster(clist, mlist, 2, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c2 ���� ȿ��
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[2].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		kill_monster(clist, mlist, stlist, 2, 0);
		printf("\n\n");

		if (check_exter(clist, mlist) == 1) {
			printf("  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}
		if (check_exter(clist, mlist) == 2) {
			printf("  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}
		if (check_exter(clist, mlist) == 0) {
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}

	}
}

////////////////////////////////////////////////////////////   ������� ���ѷα�   ////////////////////////////////////////////////////////////

void c_choice(CHA clist[3], MON mlist[3], int cnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[cnum].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ����� �����Ͻÿ�.\n");
		print_line();
		a = _getch();
		if (a == '1')
			c_attack(clist, mlist, cnum);
		if (a == '2')
			c_attack(clist, mlist, cnum);
		else
			continue;
	}
}
void c_attack(CHA clist[3], MON mlist[3], int cnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                              = ������ ĳ������ ����!\n\n", clist[cnum].name);

		if (mlist[0].hp > 0)
			printf("  1. %s                                                        = %s�� �����մϴ�.\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  1.                                                              \n");

		if (mlist[1].hp > 0)
			printf("  2. %s                                                        = %s�� �����մϴ�.\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  2.                                                              \n");

		if (mlist[2].hp > 0)
			printf("  3. %s                                                        = %s�� �����մϴ�.\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  3.                                                              \n");


		printf("\n\n  ������ ���� �����ϼ���.\n");
		print_line();
		a = _getch();
		if (a == '1')
			damage_character_to_monster(clist, mlist, cnum, 0, 0);
		if (a == '2')
			damage_character_to_monster(clist, mlist, cnum, 1, 0);
		if (a == '3')
			damage_character_to_monster(clist, mlist, cnum, 2, 0);
		else
			continue;
	}
}

void cs_attack(CHA clist[3], MON mlist[3], int cnum, int snum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  1. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[0].name, clist[0].skill[1].name, mlist[0].name);
		printf("  2. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[1].name, clist[0].skill[1].name, mlist[1].name);
		printf("  3. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[2].name, clist[0].skill[1].name, mlist[2].name);
		printf("\n\n  ������ ���� �����ϼ���.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			damage_character_to_monster(clist, mlist, cnum, 0, 1);
			clist[cnum].mp -= clist[cnum].skill[0].diff_mp;
		}
		if (a == '2') {
			damage_character_to_monster(clist, mlist, cnum, 1, 2);
			clist[cnum].mp -= clist[cnum].skill[1].diff_mp;
		}
		else
			continue;
	}
}

void c_skill(CHA clist[3], MON mlist[3], int cnum) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.\n\n", clist[cnum].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].name);
		printf("\n\n  ��ų�� �����ϼ���.\n");
		print_line();
		a = _getch();
		if (a == '1')
			cs_attack(clist, mlist, cnum, 1);
		if (a == '2')
			cs_attack(clist, mlist, cnum, 2);
		else
			continue;
	}
}

void turn_player() {
	while (1) {
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  �÷��̾��� ��!!\n\n");
		printf("  �÷��̾��� ���Դϴ�!!\n");
		printf("  \n");
		printf("\n\n\n");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
}

void turn_monster() {
	while (1) {
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  ������ ��!!\n\n");
		printf("  ������ ���Դϴ�!!\n");
		printf("  \n");
		printf("\n\n\n");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
}