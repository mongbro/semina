// made by ������

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
	printf("�������������������������������������������������������������������\n");
}

void print_map() {
	printf("\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  %s                                                           ��                                             %18s\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("                                                                 ��                                             %18s\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  %s                                                           ��                                                             \n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  %s                                                           ��                                             %18s\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("                                                                 ��                                             %18s\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  %s                                                           ��                                                             \n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  %s                                                           ��                                             %18s\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("                                                                 ��                                             %18s\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  %s                                                           ��                                                             \n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                                 ��                                                             \n");
	printf("\n");
}

void print_hp() {
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                          %18s�� ü�� : %3d / %3d\n", clist[0].name, clist[0].hp, clist[0].fhp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("                                                                 ��                          %18s�� ü�� : %3d / %3d\n", mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                                             \n", clist[0].name, clist[0].hp, clist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                          %18s�� ü�� : %3d / %3d\n", clist[1].name, clist[1].hp, clist[1].fhp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("                                                                 ��                          %18s�� ü�� : %3d / %3d\n", mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                                             \n", clist[1].name, clist[1].hp, clist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("                                                                 ��                                                             \n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                          %18s�� ü�� : %3d / %3d\n", clist[2].name, clist[2].hp, clist[2].fhp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("                                                                 ��                          %18s�� ü�� : %3d / %3d\n", mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  %s�� ü�� : %3d / %3d                                        ��                                                             \n", clist[2].name, clist[2].hp, clist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("                                                                 ��                                                             \n");
	printf("\n");
}

void print_choice_mon() {
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		print_choice_mon();
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
		print_map();
		print_line();
		printf("\n");
		damage_character_to_monster(0, 2, 2);
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  %s�� %d�� �������� ����!!!                                   = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		clist[0].mp -= clist[0].skill[2].diff_mp;
		kill_monster(0, 0);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[1].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
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

	while (1) {															//////////////// ���ѷα� c1 ���� ȿ��
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[1].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		prologue_kill_monster(1, 0);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[2].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		damage_character_to_monster(2, 1, 0);
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c2 ���� ȿ��
		system("cls");								///////////////�̰� ���� �߰�





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[2].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		kill_monster(2, 0);
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
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  %s��(��) %s��(��) ����!!                                              = ���õ� �����Դϴ�.\n\n", mlist[0].name, clist[who].name);
			printf("\n\n");
			printf("\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			damage_monster_to_character(who, 0);
			print_line();
			if (_getch())
				break;
		}

		event_hit();

		while (1) {															//////////////// ���ѷα� m0 ���� ȿ��
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("\n\n");
			printf("  %s��(��) %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			kill_character(0);
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
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  %s��(��) %s��(��) ����!!                                              = ���õ� �����Դϴ�.\n\n", mlist[1].name, clist[who].name);
			printf("\n\n");
			printf("\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			damage_monster_to_character(who, 1);
			print_line();
			if (_getch())
				break;
		}

		event_hit();

		while (1) {															//////////////// ���ѷα� m1 ���� ȿ��
			system("cls");
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("\n\n");
			printf("  %s��(��) %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			kill_character(1);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		print_choice_mon();
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
		print_map();
		print_line();
		printf("\n");
		damage_character_to_monster(0, 0, 1);
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[0].name);
		printf("  %s�� %d�� �������� ����!!!                                   = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[0].name, hit_damage, mlist[0].name, hit_damage);
		prologue_kill_monster(0, 0);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[1].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		damage_character_to_monster(1, 1, 0);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[1].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		prologue_kill_monster(1, 0);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
			dun_inventory();
			break;
		}
		else
			continue;
	}

	while (1) {															//////////////// ���ѷα� c2 �������
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ������ �����Դϴ�.\n\n", clist[2].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		damage_character_to_monster(2, 1, 0);
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  %s�� ����!!                                                   = ������ ĳ�����Դϴ�.\n\n", clist[2].name);
		printf("  %s��(��) %d�� �������� ����!!!                               = %s��(��) %d�� �������� �Ծ����ϴ�.\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		kill_monster(2, 0);
		printf("\n\n");

		if (check_exter() == 1) {
			printf("  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}
		if (check_exter() == 2) {
			printf("  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			stlist[0].is_clear = 1;
			stlist[1].is_clear = 1;
			if (_getch())
				break;
		}
		if (check_exter() == 0) {
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}

	}
}

////////////////////////////////////////////////////////////   ������� ���ѷα�   ////////////////////////////////////////////////////////////

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
					printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[i].name);
					printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
					printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
					printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
					printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
					printf("\n\n  ����� �����Ͻÿ�.\n");
					print_line();
					a = _getch();
					if (a == '1') {
						c_attack(i);
						if (check_exter() == 2) {
							printf("\n\n  ù��° ������ ��� óġ�߽��ϴ�!!\n\n");
							printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
							printf("\n\n  ù��° ������ ��� óġ�߽��ϴ�!!\n\n");
							printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		if (a == '1') {
			if (mlist[0].hp > 0) {
				damage_character_to_monster(cnum, 0, 0);
				clist[cnum].turn = 1;
				break;
			}
			else {
				printf("\n  �ش� ���ʹ� �̹� ���������ϴ�.\n\n �ƹ�Ű�� ��������.");
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
				printf("\n  �ش� ���ʹ� �̹� ���������ϴ�.\n\n �ƹ�Ű�� ��������.");
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
				printf("\n  �ش� ���ʹ� �̹� ���������ϴ�.\n\n �ƹ�Ű�� ��������.");
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
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  1. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  ������ ���� �����ϼ���.\n");
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
		printf("  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.\n\n", clist[cnum].name);
		printf("  1. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].name);
		printf("  2. %s  : att + %2d def + %2d mp - %2d                            = %s�� ��ų�� �����մϴ�.\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].name);
		printf("\n\n  ��ų�� �����ϼ���.\n");
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
				printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		print_map();
		print_line();
		printf("\n");
		print_hp();
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

void choice_stage() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ���� ������ �� �ִ� ��������                                                     ����                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (stlist[0].is_clear == 1) {
			printf("  ��      0. ���ѷα�                                                                   ���� ����                               ��\n");
		}
		else
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (stlist[1].is_clear == 1) {
			printf("  ��      1. ��������1                                                            �������� �߰� ����                            ��\n");
		}
		else
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (stlist[2].is_clear == 1) {
			printf("  ��      2. ��������2                                                                   �߰����                               ��\n");
		}
		else
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (stlist[3].is_clear == 1) {
			printf("  ��      3. ��������3                                                              �������� ���� ��ǥ                          ��\n");
		}
		else
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (stlist[4].is_clear == 1) {
			printf("  ��      4. ��������4                                                                   �⸻���                               ��\n");
		}
		else
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
		printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
		printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
		printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
		printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
		printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
		printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
		printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
		printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                           ����                                                           ��\n");
		printf("  ��                                                         �����                                                           ��\n");
		printf("  ��                                                       ���  ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                             ���                                                           ��\n");
		printf("  ��                                                       ���������                                                     ��\n");
		printf("  ��                                                       ���������                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		for (int i = 0; i < 3; i++) {
			mlist[i] = empty_mlist[i];
		}
		if (a != 'b' && a != 'B') {
			stage1_1_monster();
			while (1) {
				system("cls");
				printf("\n");
				printf("  �����������������������������������������������������������������\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
				printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
				printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
				printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
				printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
				printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
				printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
				printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
				printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                   �����                                    �����                                     ��\n");
				printf("  ��                                 ���  ���                                  ���  ���                                     ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                       ���              �������              ���                                     ��\n");
				printf("  ��                                       ���              �������              ���                                     ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                       ���                                        ���                                     ��\n");
				printf("  ��                                 ���������                            ���������                               ��\n");
				printf("  ��                                 ���������                            ���������                               ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n");
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
					printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
					printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("  �����������������������������������������������������������������\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
				printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
				printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
				printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
				printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
				printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
				printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
				printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
				printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                       ���                                   ������                                    ��\n");
				printf("  ��                                       ���                                 ��������                                  ��\n");
				printf("  ��                                   �����                               ���          ���                                ��\n");
				printf("  ��                                 ���  ���                               ���          ���                                ��\n");
				printf("  ��                                       ���                                             ���                                ��\n");
				printf("  ��                                       ���              �������                 ����                                ��\n");
				printf("  ��                                       ���              �������               ����                                  ��\n");
				printf("  ��                                       ���                                       ����                                    ��\n");
				printf("  ��                                       ���                                     ����                                      ��\n");
				printf("  ��                                       ���                                   ����                                        ��\n");
				printf("  ��                                       ���                                 ����                                          ��\n");
				printf("  ��                                 ���������                         ����������                                ��\n");
				printf("  ��                                 ���������                         ����������                                ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n");
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
					printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
					printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("  �����������������������������������������������������������������\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
				printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
				printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
				printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
				printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
				printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
				printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
				printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
				printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                       ���                                      ������                                 ��\n");
				printf("  ��                                       ���                                    ��������                               ��\n");
				printf("  ��                                   �����                                  ���        ����                             ��\n");
				printf("  ��                                 ���  ���                                  ���          ���                             ��\n");
				printf("  ��                                       ���                                    ���        ���                             ��\n");
				printf("  ��                                       ���              �������          ���      ���                               ��\n");
				printf("  ��                                       ���              �������                  ����                               ��\n");
				printf("  ��                                       ���                                    ���      ���                               ��\n");
				printf("  ��                                       ���                                    ���        ���                             ��\n");
				printf("  ��                                       ���                                  ���          ���                             ��\n");
				printf("  ��                                       ���                                  ���        ����                             ��\n");
				printf("  ��                                 ���������                              ��������                               ��\n");
				printf("  ��                                 ���������                                ������                                 ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n");
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
					printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
					printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("  �����������������������������������������������������������������\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
				printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
				printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
				printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
				printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
				printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
				printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
				printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
				printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                       ���                                  ��������                                 ��\n");
				printf("  ��                                       ���                                  ���������                               ��\n");
				printf("  ��                                   �����                                  ���        ����                             ��\n");
				printf("  ��                                 ���  ���                                  ���          ���                             ��\n");
				printf("  ��                                       ���                                  ���          ���                             ��\n");
				printf("  ��                                       ���              �������        ���        ����                             ��\n");
				printf("  ��                                       ���              �������        ���������                               ��\n");
				printf("  ��                                       ���                                  ����������                             ��\n");
				printf("  ��                                       ���                                  ���          ����                           ��\n");
				printf("  ��                                       ���                                  ���            ���                           ��\n");
				printf("  ��                                       ���                                  ���            ���                           ��\n");
				printf("  ��                                 ���������                            �����������                           ��\n");
				printf("  ��                                 ���������                            ����������                             ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n");
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
					printf("  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
					print_line();
					if (_getch())
						break;
				}
				turn_monster();
				m_choice();
				if (check_exter_boss(1) == 1) {
					printf("  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
		printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
		printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
		printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
		printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
		printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
		printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
		printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
		printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                         ������                                                         ��\n");
		printf("  ��                                                       ��������                                                       ��\n");
		printf("  ��                                                     ���          ���                                                     ��\n");
		printf("  ��                                                     ���          ���                                                     ��\n");
		printf("  ��                                                                   ���                                                     ��\n");
		printf("  ��                                                                 ����                                                     ��\n");
		printf("  ��                                                               ����                                                       ��\n");
		printf("  ��                                                             ����                                                         ��\n");
		printf("  ��                                                           ����                                                           ��\n");
		printf("  ��                                                         ����                                                             ��\n");
		printf("  ��                                                       ����                                                               ��\n");
		printf("  ��                                                     ����������                                                     ��\n");
		printf("  ��                                                     ����������                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
		printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
		printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
		printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
		printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
		printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
		printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
		printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
		printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                         ������                                                         ��\n");
		printf("  ��                                                       ��������                                                       ��\n");
		printf("  ��                                                     ���        ����                                                     ��\n");
		printf("  ��                                                     ���          ���                                                     ��\n");
		printf("  ��                                                       ���        ���                                                     ��\n");
		printf("  ��                                                       ���      ���                                                       ��\n");
		printf("  ��                                                               ����                                                       ��\n");
		printf("  ��                                                       ���      ���                                                       ��\n");
		printf("  ��                                                       ���        ���                                                     ��\n");
		printf("  ��                                                     ���          ���                                                     ��\n");
		printf("  ��                                                     ���        ����                                                     ��\n");
		printf("  ��                                                       ��������                                                       ��\n");
		printf("  ��                                                         ������                                                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��             �������      ����������            ��                ������      ����������           ��\n");
		printf("  ��           ��            ��    ��      ��      ��          ����            ��          ��    ��                           ��\n");
		printf("  ��           ��            ��            ��                  ��  ��          ��                  ��                           ��\n");
		printf("  ��           ��                          ��                ��      ��        ��                  ��                           ��\n");
		printf("  ��             �������              ��                ��      ��        ��                  ���������             ��\n");
		printf("  ��                         ��            ��              ��          ��      ��        ����    ��                           ��\n");
		printf("  ��           ��            ��            ��              ��������      ��            ��    ��                           ��\n");
		printf("  ��           ��            ��            ��            ��              ��      ��          ��    ��                           ��\n");
		printf("  ��             �������              ��            ��              ��        �������    ����������           ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                               ���                                                         ��\n");
		printf("  ��                                                             ����                                                         ��\n");
		printf("  ��                                                           �����                                                         ��\n");
		printf("  ��                                                         ���  ���                                                         ��\n");
		printf("  ��                                                       ���    ���                                                         ��\n");
		printf("  ��                                                     ���      ���                                                         ��\n");
		printf("  ��                                                   ����      ���                                                         ��\n");
		printf("  ��                                                   �����������                                                     ��\n");
		printf("  ��                                                   �����������                                                     ��\n");
		printf("  ��                                                               ���                                                         ��\n");
		printf("  ��                                                               ���                                                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
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
		printf("  %-4s�� %-20s ��ų!!                               = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  1. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  ������ ���� �����ϼ���.\n");
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
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("     %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("     %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("     %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  ������ �Դϴ�.\n\n  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.\n\n  �ڷΰ��� �����ø� 'b'�� �����ּ���.\n\n");
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
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  1. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[0].name, clist[cnum].skill[snum].name, mlist[0].name);
		printf("  2. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[1].name, clist[cnum].skill[snum].name, mlist[1].name);
		printf("  3. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[2].name, clist[cnum].skill[snum].name, mlist[2].name);
		printf("\n\n  ������ ���� �����ϼ���.\n\n  �ڷΰ��� �����ø� 'b'�� �����ּ���.\n\n");
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
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[cnum].name, clist[cnum].skill[snum].name);
		if (snum == 16)
			printf("\n\n  �ش� ĳ���Ͱ� %dȸ�� ������ �����մϴ�.\n\n  �ڷΰ��� �����ø� 'b'�� �����ּ���.\n\n", 1);
		if (snum == 17)
			printf("\n\n  �ش� ĳ���Ͱ� %dȸ�� ������ �����մϴ�.\n\n  �ڷΰ��� �����ø� 'b'�� �����ּ���.\n\n", 2);
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
					printf("  %s��(��) %s��(��) ����!!                                              = ���õ� �����Դϴ�.\n\n", mlist[i].name, clist[who].name);
					printf("\n\n");
					printf("\n\n");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
						printf("  %s��(��) %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
						kill_character(0);
						mlist[i].turn = 1;
						printf("\n\n");
						printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  %s��(��) ���� ���ϻ����Դϴ�!!!                                \n", mlist[mnum].name);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		mlist[mnum].turn = 1;
		print_line();
		if (_getch())
			break;
	}
}