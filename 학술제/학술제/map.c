// made by ������

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
	printf("\n  �����������������������������������������������������������������");
}

void print_map() {
	printf("\n  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  ��  %s                                                       ��                                         %18s  ��\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("  ��                                                             ��                                         %18s  ��\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  ��  %s                                                       ��                                                             ��\n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("  ��                                                             ��                                                             ��\n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  ��  %s                                                       ��                                         %18s  ��\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("  ��                                                             ��                                         %18s  ��\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  ��  %s                                                       ��                                                             ��\n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("  ��                                                             ��                                                             ��\n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  ��  %s                                                       ��                                         %18s  ��\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("  ��                                                             ��                                         %18s  ��\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  ��  %s                                                       ��                                                             ��\n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("  ��                                                             ��                                                           ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��");
}

void print_hp() {
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  ��  %s�� ü�� : %3d / %3d         ���� : %3d / %3d           ��                      %18s�� ü�� : %3d / %3d  ��\n", clist[0].name, clist[0].hp, clist[0].fhp, clist[0].mp, clist[0].fmp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("  ��                                                             ��                      %18s�� ü�� : %3d / %3d  ��\n", mlist[0].name, mlist[0].hp, mlist[0].fhp);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  ��  %s�� ü�� : %3d / %3d         ���� : %3d / %3d           ��                                                             ��\n", clist[0].name, clist[0].hp, clist[0].fhp, clist[0].mp, clist[0].fmp);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("  ��                                                             ��                                                             ��\n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  ��  %s�� ü�� : %3d / %3d         ���� : %3d / %3d           ��                      %18s�� ü�� : %3d / %3d  ��\n", clist[1].name, clist[1].hp, clist[1].fhp, clist[1].mp, clist[1].fmp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("  ��                                                             ��                      %18s�� ü�� : %3d / %3d  ��\n", mlist[1].name, mlist[1].hp, mlist[1].fhp);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  ��  %s�� ü�� : %3d / %3d         ���� : %3d / %3d           ��                                                             ��\n", clist[1].name, clist[1].hp, clist[1].fhp, clist[1].mp, clist[1].fmp);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("  ��                                                             ��                                                             ��\n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  ��  %s�� ü�� : %3d / %3d         ���� : %3d / %3d           ��                      %18s�� ü�� : %3d / %3d  ��\n", clist[2].name, clist[2].hp, clist[2].fhp, clist[2].mp, clist[2].fmp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("  ��                                                             ��                      %18s�� ü�� : %3d / %3d  ��\n", mlist[2].name, mlist[2].hp, mlist[2].fhp);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  ��  %s�� ü�� : %3d / %3d         ���� : %3d / %3d           ��                                                             ��\n", clist[2].name, clist[2].hp, clist[2].fhp, clist[2].mp, clist[2].fmp);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("  ��                                                             ��                                                             ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��");
}

void print_choice_mon() {
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	if (mlist[0].hp > 0)
		printf("  ��  1. %-18s                                       =                      %18s�� �����մϴ�.       ��\n", mlist[0].name, mlist[0].name);
	if (mlist[0].hp <= 0)
		printf("  ��                                                                                                                            ��\n");
	if (mlist[1].hp > 0)
		printf("  ��  2. %-18s                                       =                      %18s�� �����մϴ�.       ��\n", mlist[1].name, mlist[1].name);
	if (mlist[1].hp <= 0)
		printf("  ��                                                                                                                            ��\n");
	if (mlist[2].hp > 0)
		printf("  ��  3. %-18s                                       =                      %18s�� �����մϴ�.       ��\n", mlist[2].name, mlist[2].name);
	if (mlist[2].hp <= 0)
		printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  �����������������������������������������������������������������\n");
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
	stage_prologue();
	statm_check();
	statp_check();
	clist[0].hp = clist[0].fhp;
	clist[1].hp = clist[1].fhp;
	clist[2].hp = clist[2].fhp;
	clist[0].mp = clist[0].fmp;
	clist[1].mp = clist[1].fmp;
	clist[2].mp = clist[2].fmp;
	while (1) {
		system("cls");
		print_line();
		printf("\n");
		printf("  �� ���ѷα��Դϴ�.~~~~~~                                                                                                      ��\n");
		printf("  �� �� ������ �������� �������� �ʽ��ϴ�!!!!!                                                                                ��\n");
		printf("  �� �����ϰ� ������ ���ּ���!!!!!                                                                                              ��\n");
		printf("  �� ����Ű�� ������ ���� �������� �ѹ��� �Ѿ ���� �ֽ��ϴ�.�Ф�                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ��� �Ͻ÷��� �ƹ�Ű�� ��������.                                                                                           ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		if (_getch())
			break;
	}

	while (1) {
		system("cls");
		print_line();
		printf("\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������� ���ϱ� ���� �������� �ϰ� �� �������� ������ ������ ����ġ�� ������ ��ԵǴ� �̾߱� �Դϴ�.                       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ��� �Ͻ÷��� �ƹ�Ű�� ��������.                                                                                           ��\n");
		printf("  ��                                                                                                                            ��");
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
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		printf("\n    �ؾƱ� ĳ���ʹ� ����, ����, ���� ������ ����˴ϴ�.\n    ����� ����� �������� �ʽ��ϴ�!! \n    ������ �����ϼ���.");
		check_level();
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
		printf("  �� %s�� ��ų!!                                                = ������ ĳ������ �̸��Դϴ�.                                 ��\n", clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. %s  : att + %2d def + %2d mp - %2d                         = %s�� ��ų�� �����մϴ�.                                   ��\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("  �� 2. %s  : att + %2d def + %2d mp - %2d                         = %s�� ��ų�� �����մϴ�.                                   ��\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].add_def, clist[0].skill[2].diff_mp, clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  ��  %s�� %s ��ų!!                                          = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[0].name, clist[0].skill[1].name);
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
		printf("  �� %s�� %s ��ų!!                                           = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[0].name, clist[0].skill[1].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� %s�� %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.                       ��\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		kill_monster(0, 0);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c1 �������
		hit_damage = 0;
		char a;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[1].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  ��  %s�� ����!!                                               = ������ ĳ������ �����Դϴ�.                                 ��\n", clist[1].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '3') {
			break;
		}
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c1 ���� ȿ��
		damage_character_to_monster(1, 2, 0);
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ����!!                                                = ������ ĳ�����Դϴ�.                                        ��\n", clist[1].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� %s��(��) %d�� �������� ����!!!                            = %s��(��) %d�� �������� �Ծ����ϴ�.                       ��\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		printf("  ��                                                                                                                            ��\n");
		prologue_kill_monster(1, 0);
		printf("  ��                                                                                                                            ��");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c2 �������
		char a;
		hit_damage = 0;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  ��  %s�� ����!!                                               = ������ ĳ������ �����Դϴ�.                                 ��\n", clist[2].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {
		damage_character_to_monster(2, 1, 0);
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ����!!                                                = ������ ĳ�����Դϴ�.                                        ��\n", clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� %s��(��) %d�� �������� ����!!!                            = %s��(��) %d�� �������� �Ծ����ϴ�.                       ��\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
			hit_damage = 0;
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  �� %s��(��) %s��(��) ����!!                                = ���õ� �����Դϴ�.                                        ��\n", mlist[0].name, clist[who].name);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��");
			print_line();
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
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  �� %s��(��) %d�� �������� ����!!!                              = %s��(��) %d�� �������� �Ծ����ϴ�.                         ��\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��");
			print_line();
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
			hit_damage = 0;
			print_line();
			print_map();
			print_line();
			printf("\n");
			print_hp();
			print_line();
			printf("\n");
			printf("  �� %s��(��) %s��(��) ����!!                                = ���õ� �����Դϴ�.                                        ��\n", mlist[1].name, clist[who].name);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��");
			print_line();
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
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  �� %s��(��) %d�� �������� ����!!!                              = %s��(��) %d�� �������� �Ծ����ϴ�.                         ��\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��");
			print_line();
			printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
			print_line();
			if (_getch())
				break;
		}
	}

	turn_player();

	while (1) {															//////////////// ���ѷα� c0 ��� ȿ��
		char a;
		hit_damage = 0;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  �� %s�� ��ų!!                                                = ������ ĳ������ �̸��Դϴ�.                                 ��\n", clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. %s  : att + %2d def + %2d mp - %2d                         = %s�� ��ų�� �����մϴ�.                                   ��\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("  �� 1. %s  : att + %2d def + %2d mp - %2d                         = %s�� ��ų�� �����մϴ�.                                   ��\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].add_def, clist[0].skill[2].diff_mp, clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  ��  %s�� %s ��ų!!                                          = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[0].name, clist[0].skill[1].name);
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
		printf("  �� %s�� %s ��ų!!                                               = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[0].name, clist[0].skill[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� %s�� %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.                       ��\n", mlist[0].name, hit_damage, mlist[0].name, hit_damage);
		prologue_kill_monster(0, 0);
		printf("  ��                                                                                                                            ��");
		print_line();
		clist[0].mp -= clist[0].skill[1].diff_mp;
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c1 �������
		char a;
		hit_damage = 0;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[1].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  ��  %s�� ����!!                                               = ������ ĳ������ �����Դϴ�.                                 ��\n", clist[1].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c1 ���� ȿ��
		damage_character_to_monster(1, 1, 0);
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  ��  %s�� ����!!                                               = ������ ĳ������ �����Դϴ�.                                 ��\n", clist[1].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� %s�� %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.                       ��\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		prologue_kill_monster(1, 0);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}

	while (1) {															//////////////// ���ѷα� c2 �������
		char a;
		hit_damage = 0;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		hit_damage = 0;
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  �� %s�� ���!!                                                = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. �⺻����                                                  = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
		printf("  �� 2. ��ų                                                      = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
		printf("  �� 3. ������                                                    = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
		printf("  �� 4. ����ġ��!                                                 = �̹� ���������� �����մϴ�.                                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
		printf("  ��  %s�� ����!!                                               = ������ ĳ������ �����Դϴ�.                                 ��\n", clist[2].name);
		print_choice_mon();
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}

	event_hit();

	while (1) {															//////////////// ���ѷα� c2 ���� ȿ��
		damage_character_to_monster(2, 1, 0);
		system("cls");
		print_line();
		print_map();
		print_line();
		printf("\n");
		print_hp();
		print_line();
		printf("\n");
		printf("  ��  %s�� ����!!                                               = ������ ĳ������ �����Դϴ�.                                 ��\n", clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� %s�� %d�� �������� ����!!!                                = %s��(��) %d�� �������� �Ծ����ϴ�.                       ��\n", mlist[1].name, hit_damage, mlist[1].name, hit_damage);
		prologue_kill_monster(2, 0);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
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
/////////////////////////////////////////////////////////////   ���� ���ѷα� ����/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////   ���� ���ѷα� ����/////////////////////////////////////////////////////////////
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                  ��             ��                 �����������������    ��\n");
		printf("  ��    ��                            ��                  ��             ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��        ������������   ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    ��       1.������ ����        ��            ��          ��       ������         ��        2. ��ų ����        ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    �����������������          ��������������                �����������������    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��          ��������������                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��     3. ���� �� �κ��丮    ��                                  ��                ��     4. ���� �Ϸ� ���±�    ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��                        ��                            ��    ��\n");
		printf("  ��    �����������������      �������������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      1. ����            2. �Ǹ�                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                    �����    ��        ��   ��          ��                                               ��\n");
		printf("  ��                                    ��      ��  ��        ��     ��      ��                                                 ��\n");
		printf("  ��                                    �����    ��        ��       ��  ��                                                   ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    �����      �����           ��                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            1. ���� ���� ���          2. ���� ���� ���          3. ���� ���� ���          4. �Һ� ������                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                    �ɷ�ġ1                       �ɷ�ġ2                            ����                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     1. %15s            ü��ȸ�� : %2d                                                    %3d  ���               ��\n", ilist[0].name, ilist[0].add_hp, ilist[0].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     2. %15s            ü��ȸ�� : %2d                                                    %3d  ���               ��\n", ilist[1].name, ilist[1].add_hp, ilist[1].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     3. %15s            ü��ȸ�� : %2d                                                    %3d  ���               ��\n", ilist[2].name, ilist[2].add_hp, ilist[2].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     4. %15s                                            ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[3].name, ilist[3].add_mp, ilist[3].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     5. %15s                                            ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[4].name, ilist[4].add_mp, ilist[4].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     6. %15s                                            ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[5].name, ilist[5].add_mp, ilist[5].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     7. %15s            ü��ȸ�� : %2d                   ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[6].name, ilist[6].add_hp, ilist[6].add_mp, ilist[6].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 4�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1             �ɷ�ġ2             ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     %15s                                      hp : %2d              mp : %2d             %2d ��      %3d ���      ��\n", ilist[check].name, ilist[check].add_hp, ilist[check].add_mp, ilist[check].ea, ilist[check].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ���� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= ilist[check].price) {
				gold -= ilist[check].price;
				ilist[check].ea++;
				printf("  %s ��(��) 1�� ȹ��!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.", ilist[check].name);
				if (_getch())
					break;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                    �ɷ�ġ1                       �ɷ�ġ2                            ����                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     1. %15s            ü��ȸ�� : %2d                                                    %3d  ���               ��\n", ilist[0].name, ilist[0].add_hp, ilist[0].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     2. %15s            ü��ȸ�� : %2d                                                    %3d  ���               ��\n", ilist[1].name, ilist[1].add_hp, ilist[1].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     3. %15s            ü��ȸ�� : %2d                                                    %3d  ���               ��\n", ilist[2].name, ilist[2].add_hp, ilist[2].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     4. %15s                                            ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[3].name, ilist[3].add_mp, ilist[3].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     5. %15s                                            ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[4].name, ilist[4].add_mp, ilist[4].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     6. %15s                                            ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[5].name, ilist[5].add_mp, ilist[5].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     7. %15s            ü��ȸ�� : %2d                   ����ȸ�� : %2d                    %3d  ���               ��\n", ilist[6].name, ilist[6].add_hp, ilist[6].add_mp, ilist[6].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                    �����    ��        ��   ��          ��                                               ��\n");
		printf("  ��                                    ��      ��  ��        ��     ��      ��                                                 ��\n");
		printf("  ��                                    �����    ��        ��       ��  ��                                                   ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    �����      �����           ��                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            1. ���� ���� ���          2. ���� ���� ���          3. ���� ���� ���          4. �Һ� ������                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      1. ����            2. �Ǹ�                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 2�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                   ������      ������    ��          ��                                             ��\n");
		printf("  ��                                 ��          ��  ��          ��  ��          ��                                             ��\n");
		printf("  ��                                 ��              ��          ��  ��          ��                                             ��\n");
		printf("  ��                                   ������    �������    ��          ��                                             ��\n");
		printf("  ��                                             ��  ��              ��          ��                                             ��\n");
		printf("  ��                                 ��          ��  ��              ��          ��                                             ��\n");
		printf("  ��                                   ������      �������  ������  ������                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            1. ���� ���� ���          2. ���� ���� ���          3. ���� ���� ���          4. �Һ� ������                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 4�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                      �̸�                      �ɷ�ġ1                       �ɷ�ġ2            ���� ����     ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i].ea > 0) {
				printf("  ��   %d. %20s                    hp ȸ�� : %2d                  mp ȸ�� : %2d          %2d ��      %2d ���        ��\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea, ilist[i].price);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i].index = index;
				index++;
			}
		}
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.\n\n  �Ǹ� �Ҷ��� ������ ���� ���ݰ������� �Ǹ��մϴ�.\n\n  ���ѷα��̱⶧���� ���� �������� �Ǹŵ˴ϴ�.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1             �ɷ�ġ2             ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��       %20s                    hp ȸ�� : %2d                  mp ȸ�� : %2d          %2d ��      %2d ���       ��\n", ilist[3].name, ilist[3].add_hp, ilist[3].add_mp, ilist[3].ea, ilist[3].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      �Ǹ� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.\n\n  �Ǹ� �Ҷ��� ������ ���� ���ݰ������� �Ǹ��մϴ�.\n\n  ���ѷα��̱⶧���� ���� �������� �Ǹŵ˴ϴ�.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
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
				printf("  ���� %s ��(��) �����ϴ�!!", ilist[3].name);
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                      �̸�                      �ɷ�ġ1                       �ɷ�ġ2            ���� ����     ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i].ea > 0) {
				printf("  ��   %d. %20s                    hp ȸ�� : %2d                  mp ȸ�� : %2d          %2d ��      %2d ���        ��\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea, ilist[i].price);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i].index = index;
				index++;
			}
		}
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.\n\n  �Ǹ� �Ҷ��� ������ ���� ���ݰ������� �Ǹ��մϴ�.\n\n  ���ѷα��̱⶧���� ���� �������� �Ǹŵ˴ϴ�.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                   ������      ������    ��          ��                                             ��\n");
		printf("  ��                                 ��          ��  ��          ��  ��          ��                                             ��\n");
		printf("  ��                                 ��              ��          ��  ��          ��                                             ��\n");
		printf("  ��                                   ������    �������    ��          ��                                             ��\n");
		printf("  ��                                             ��  ��              ��          ��                                             ��\n");
		printf("  ��                                 ��          ��  ��              ��          ��                                             ��\n");
		printf("  ��                                   ������      �������  ������  ������                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            1. ���� ���� ���          2. ���� ���� ���          3. ���� ���� ���          4. �Һ� ������                 ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      1. ����            2. �Ǹ�                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                  ��             ��                 �����������������    ��\n");
		printf("  ��    ��                            ��                  ��             ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��        ������������   ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    ��       1.������ ����        ��            ��          ��       ������         ��        2. ��ų ����        ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    �����������������          ��������������                �����������������    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��          ��������������                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��     3. ���� �� �κ��丮    ��                                  ��                ��     4. ���� �Ϸ� ���±�    ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��                        ��                            ��    ��\n");
		printf("  ��    �����������������      �������������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 2�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                                ��                                               ���������   ��                      ��\n");
		printf("  ��                              ����                                                           ��   ��                      ��\n");
		printf("  ��                            ���  ���                                           ���������   ��                      ��\n");
		printf("  ��                          ���      ���                                                       ��   ��                      ��\n");
		printf("  ��                        ���          ���                                                     ��   ��                      ��\n");
		printf("  ��                      ���              ���                                                        ��                      ��\n");
		printf("  ��                    ���                  ���                                      ����������                      ��\n");
		printf("  ��                  ���                      ���                                                    ��                      ��\n");
		printf("  ��                                                                                    ����������                      ��\n");
		printf("  ��              ��������������������                                ��                                      ��\n");
		printf("  ��                                                                                    ����������                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      1. ����          2. �κ�                                                                                              ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                    �����    ��        ��   ��          ��                                               ��\n");
		printf("  ��                                    ��      ��  ��        ��     ��      ��                                                 ��\n");
		printf("  ��                                    �����    ��        ��       ��  ��                                                   ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    �����      �����           ��                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                           1. ���� ���� ��ų          2. ���� ���� ��ų          3. ���� ���� ��ų                          ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 3�� �����ּ���.");
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

		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                             �ɷ�ġ                   �Ҹ� ����                  ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 21; i < 31; i++) {
			if (slist[i].ea == 0) {
				switch (i) {
				case 21:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                  �߰� ���ݷ� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 22:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 23:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 24:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 25:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 26:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 27:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 28:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 29:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 30:
					if (index == 10) {
						printf("  ��                                                                                                                            ��\n");
						printf("  ��   %d. %-20s                     ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ��                                                                                                                            ��\n");
						slist[i].index = 0;
						index++;
						break;
					}
					else {
						printf("  ��                                                                                                                            ��\n");
						printf("  ��   %d. %-20s                       ȸ���� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ��                                                                                                                            ��\n");
						slist[i].index = index;
						index++;
					}

				}

			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 2�� �����ּ���.(10�� 0�� ������ �ּ���.)");

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
			strcpy(exist, "������");
		else
			strcpy(exist, "����");

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����              ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %-20s                              ȸ���� : %2d      �Ҹ� ���� : %2d           %6s       %3d ���     ��\n", slist[22].name, slist[22].add_hp, slist[22].diff_mp, exist, slist[22].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[22].info);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ���� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= slist[22].price) {
				gold -= slist[22].price;
				slist[22].ea = 1;
				printf(" %20s ��(��) ȹ��!\n\n  �ڷ� ���÷��� �ƹ�Ű�� ��������.\n", slist[22].name);
				if (_getch())
					break;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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

		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                             �ɷ�ġ                   �Ҹ� ����                  ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 21; i < 31; i++) {
			if (slist[i].ea == 0) {
				switch (i) {
				case 21:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                  �߰� ���ݷ� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 22:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 23:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 24:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 25:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 26:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 27:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 28:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 29:
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                      ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ��                                                                                                                            ��\n");
					slist[i].index = index;
					index++;
					break;
				case 30:
					if (index == 10) {
						printf("  ��                                                                                                                            ��\n");
						printf("  ��   %d. %-20s                     ȸ���� : %2d            �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ��                                                                                                                            ��\n");
						slist[i].index = 0;
						index++;
						break;
					}
					else {
						printf("  ��                                                                                                                            ��\n");
						printf("  ��   %d. %-20s                       ȸ���� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ��                                                                                                                            ��\n");
						slist[i].index = index;
						index++;
					}

				}

			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");

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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                       ��                                                           ��                      ��\n");
		printf("  ��                         ��            ��                            ������������         ��                      ��\n");
		printf("  ��                       ����          ��                                    ����                 ��                      ��\n");
		printf("  ��                     ���  ���        ��                                    ����                 ��                      ��\n");
		printf("  ��                   ���      ���      �����                            ���  ���         �����                      ��\n");
		printf("  ��                 ���          ���    ��                                ���      ���             ��                      ��\n");
		printf("  ��               ���              ���  ��                              ���          ���           ��                      ��\n");
		printf("  ��                                       ��                            ���              ���         ��                      ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                  ��                  ��                                 ��                      ��                         ��\n");
		printf("  ��                    ����������                                   ��������������                         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                    �����    ��        ��   ��          ��                                               ��\n");
		printf("  ��                                    ��      ��  ��        ��     ��      ��                                                 ��\n");
		printf("  ��                                    �����    ��        ��       ��  ��                                                   ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    ��      ��  ��        ��         ��                                                     ��\n");
		printf("  ��                                    �����      �����           ��                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                           1. ���� ���� ��ų          2. ���� ���� ��ų          3. ���� ���� ��ų                          ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                                ��                                               ���������   ��                      ��\n");
		printf("  ��                              ����                                                           ��   ��                      ��\n");
		printf("  ��                            ���  ���                                           ���������   ��                      ��\n");
		printf("  ��                          ���      ���                                                       ��   ��                      ��\n");
		printf("  ��                        ���          ���                                                     ��   ��                      ��\n");
		printf("  ��                      ���              ���                                                        ��                      ��\n");
		printf("  ��                    ���                  ���                                      ����������                      ��\n");
		printf("  ��                  ���                      ���                                                    ��                      ��\n");
		printf("  ��                                                                                    ����������                      ��\n");
		printf("  ��              ��������������������                                ��                                      ��\n");
		printf("  ��                                                                                    ����������                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      1. ����          2. �κ�                                                                                              ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 2�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��     1. ���� ���� ��ų      ��          ��     2. ���� ���� ��ų      ��          ��     3. ���� ���� ��ų      ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 3�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                                                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 1; i < 11; i++) {
			if (slist[i + 20].ea == 1) {
				if (index != 10) {
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                                                                                                  ��\n", index, slist[i + 20].name);
					printf("  ��                                                                                                                            ��\n");
					slist[i + 20].index = index;
					index++;
					continue;
				}
				if (index == 10) {
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                                                                                                 ��\n", index, slist[i + 20].name);
					printf("  ��                                                                                                                            ��\n");
					slist[i + 20].index = 0;
					index++;
				}
			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  ���⿡�� ���ϴ� ��ų�� �����Ͽ� �� 2������ ���� �����մϴ�.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %-20s                           ȸ���� : %2d         �Ҹ� ���� : %2d                                     ��\n", slist[22].name, slist[22].add_hp, slist[22].diff_mp);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[22].info);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 1�� �����ּ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].skill[1].ea == 1) {
			if (clist[2].skill[1].num == 21) {
				printf("  ��      1.%-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                   ��\n", clist[2].skill[1].name, clist[2].skill[1].add_att, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 21 && clist[2].skill[1].num < 28 && clist[2].skill[1].num != 24) {
				printf("  ��      1.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 27) {
				printf("  ��      1.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[1].name, clist[2].skill[1].add_mp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num == 24)
				printf("  ��      1.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                      ��\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", slist[clist[2].skill[1].num].info);
		}
		else {
			printf("  ��      1. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].skill[2].ea == 1) {
			if (clist[2].skill[2].num == 21) {
				printf("  ��      2.%-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                   ��\n", clist[2].skill[2].name, clist[2].skill[2].add_att, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 21 && clist[2].skill[2].num < 28 && clist[2].skill[2].num != 24) {
				printf("  ��      2.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 27) {
				printf("  ��      2.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[2].name, clist[2].skill[2].add_mp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num == 24)
				printf("  ��      2.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                      ��\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", slist[clist[2].skill[2].num].info);
		}
		else {
			printf("  ��      2. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��� �Ͻ÷��� 1�� �����ּ���.\n\n  ���⿡�� ���ϴ� ��ų�� �����Ͽ� �� 2������ ���� �����մϴ�.\n");

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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].skill[1].ea == 1) {
			if (clist[2].skill[1].num == 21) {
				printf("  ��      1.%-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                   ��\n", clist[2].skill[1].name, clist[2].skill[1].add_att, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 21 && clist[2].skill[1].num < 28 && clist[2].skill[1].num != 24) {
				printf("  ��      1.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 27) {
				printf("  ��      1.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[1].name, clist[2].skill[1].add_mp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num == 24)
				printf("  ��      1.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                      ��\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", slist[clist[2].skill[1].num].info);
		}
		else {
			printf("  ��      1. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].skill[2].ea == 1) {
			if (clist[2].skill[2].num == 21) {
				printf("  ��      2.%-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                   ��\n", clist[2].skill[2].name, clist[2].skill[2].add_att, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 21 && clist[2].skill[2].num < 28 && clist[2].skill[2].num != 24) {
				printf("  ��      2.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 27) {
				printf("  ��      2.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                       ��\n", clist[2].skill[2].name, clist[2].skill[2].add_mp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num == 24)
				printf("  ��      2.%-20s                          ȸ���� : %2d      �Ҹ� ���� : %2d                                      ��\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", slist[clist[2].skill[2].num].info);
		}
		else {
			printf("  ��      2. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.\n\n  ���⿡�� ���ϴ� ��ų�� �����Ͽ� �� 2������ ���� �����մϴ�.\n");

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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                                                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 1; i < 11; i++) {
			if (slist[i + 20].ea == 1) {
				if (index != 10) {
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                                                                                                  ��\n", index, slist[i + 20].name);
					printf("  ��                                                                                                                            ��\n");
					slist[i + 20].index = index;
					index++;
					continue;
				}
				if (index == 10) {
					printf("  ��                                                                                                                            ��\n");
					printf("  ��   %d. %-20s                                                                                                 ��\n", index, slist[i + 20].name);
					printf("  ��                                                                                                                            ��\n");
					slist[i + 20].index = 0;
					index++;
				}
			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��     1. ���� ���� ��ų      ��          ��     2. ���� ���� ��ų      ��          ��     3. ���� ���� ��ų      ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                    ��                      ��\n");
		printf("  ��                                ��                                               ���������   ��                      ��\n");
		printf("  ��                              ����                                                           ��   ��                      ��\n");
		printf("  ��                            ���  ���                                           ���������   ��                      ��\n");
		printf("  ��                          ���      ���                                                       ��   ��                      ��\n");
		printf("  ��                        ���          ���                                                     ��   ��                      ��\n");
		printf("  ��                      ���              ���                                                        ��                      ��\n");
		printf("  ��                    ���                  ���                                      ����������                      ��\n");
		printf("  ��                  ���                      ���                                                    ��                      ��\n");
		printf("  ��                                                                                    ����������                      ��\n");
		printf("  ��              ��������������������                                ��                                      ��\n");
		printf("  ��                                                                                    ����������                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      1. ����          2. �κ�                                                                                              ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                  ��             ��                 �����������������    ��\n");
		printf("  ��    ��                            ��                  ��             ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��        ������������   ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    ��       1.������ ����        ��            ��          ��       ������         ��        2. ��ų ����        ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    �����������������          ��������������                �����������������    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��          ��������������                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��     3. ���� �� �κ��丮    ��                                  ��                ��     4. ���� �Ϸ� ���±�    ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��                        ��                            ��    ��\n");
		printf("  ��    �����������������      �������������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� 3�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��       1. ĳ���� ����       ��                                                    ��        2. �κ��丮         ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� 1�� �����ּ���.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��          1. ����           ��          ��          2. ����           ��          ��          3. ����           ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� 1�� �����ּ���.\n");
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}

	while (1) {
		char a;
		statm_check();
		statp_check();
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                           ��               ��                        �������� ������                       ��\n");
		printf("  ��       ��������          ������  ��               ��                                                              ��\n");
		printf("  ��             ��                      ��    ��               ��         �̸�                    �ɷ�ġ1                      ��\n");
		printf("  ��           ��  ��                  ��      ����           ��                                                              ��\n");
		printf("  ��         ��      ��              ��  ��    ��               ��                                                              ��\n");
		if (clist[0].item[0].num == 0) {
			printf("  ��       ��    ��    ��          ��      ��  ��               ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��       ��    ��    ��          ��      ��  ��               ��  %20s         ������ + %2d                    ��\n", clist[0].item[0].name, clist[0].item[0].add_readership);
		}
		printf("  ��             ��                    ����                   ��                                                              ��\n");
		printf("  ��     ����������          ��      ��                 ��                                                              ��\n");
		printf("  ��                                 ��      ��                 ��                                                              ��\n");
		if (clist[0].item[1].num == 0) {
			printf("  ��                                   ����                   ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��                                   ����                   ��  %20s         ������ + %2d                    ��\n", clist[0].item[1].name, clist[0].item[1].add_readership);
		}
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��          ��  1. ������       :       %3d                   ��                   ���ݷ�       :       %3d                   ��\n", clist[0].readership, clist[0].att);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                   ����       :       %3d                   ��\n", clist[0].def);
		printf("  ��              2. �ʱ��       :       %3d                   ��                                                              ��\n", clist[0].noteship);
		printf("  ��                                                            ��                   �� hp        :       %3d                   ��\n", clist[0].fhp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              3.   ��         :       %3d                   ��                   �� mp        :       %3d                   ��\n", clist[0].wealth, clist[0].fmp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              ���� ����       :       %2d                    ��                            ���� ��� : %5d                 ��\n", clist[0].spare_stat, gold);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                               ����  :  %2d           ����ġ  :  %4d / %4d    ( %2d %% )                                     ��\n", clist[0].level, clist[0].expe, fexp[clist[0].level], clist[0].persent);
		printf("  ��                    ���      ���      ���      ���      ���      ���      ���      ���      ���                    ��\n");
		printf("  ��        �������������������������������������������������������        ��\n");
		printf("  ��        ��           10%%       20%%       30%%       40%%       50%%       60%%       70%%       80%%       90%%          ��        ��\n");
		printf("  ��        ��  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[0].persent)
				printf("��");
			else
				printf("��");
		}
		printf("  ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� 1�� �����ּ���.\n\n  �������� ���ݷ��� ���������ְ� �ʱ���� ����, �δ� �ִ�mp�� ���������ݴϴ�.\n\n  ������ �ѹ� �����ϸ� �ٽô� ȸ���� �� �����ϴ�.\n");
		a = (_getch());
		if (a == '1') {
			if (clist[0].spare_stat > 0) {
				if (a == '1') {
					clist[0].spare_stat--;
					clist[0].readership++;
					break;
				}
			}
		}
		else
			continue;
	}

	while (1) {
		char a;
		statm_check();
		statp_check();
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                           ��               ��                        �������� ������                       ��\n");
		printf("  ��       ��������          ������  ��               ��                                                              ��\n");
		printf("  ��             ��                      ��    ��               ��         �̸�                    �ɷ�ġ1                      ��\n");
		printf("  ��           ��  ��                  ��      ����           ��                                                              ��\n");
		printf("  ��         ��      ��              ��  ��    ��               ��                                                              ��\n");
		if (clist[0].item[0].num == 0) {
			printf("  ��       ��    ��    ��          ��      ��  ��               ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��       ��    ��    ��          ��      ��  ��               ��  %20s         ������ + %2d                    ��\n", clist[0].item[0].name, clist[0].item[0].add_readership);
		}
		printf("  ��             ��                    ����                   ��                                                              ��\n");
		printf("  ��     ����������          ��      ��                 ��                                                              ��\n");
		printf("  ��                                 ��      ��                 ��                                                              ��\n");
		if (clist[0].item[1].num == 0) {
			printf("  ��                                   ����                   ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��                                   ����                   ��  %20s         ������ + %2d                    ��\n", clist[0].item[1].name, clist[0].item[1].add_readership);
		}
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��          ��  1. ������       :       %3d    <=             ��                   ���ݷ�       :       %3d                   ��\n", clist[0].readership, clist[0].att);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                   ����       :       %3d                   ��\n", clist[0].def);
		printf("  ��              2. �ʱ��       :       %3d                   ��                                                              ��\n", clist[0].noteship);
		printf("  ��                                                            ��                   �� hp        :       %3d                   ��\n", clist[0].fhp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              3.   ��         :       %3d                   ��                   �� mp        :       %3d                   ��\n", clist[0].wealth, clist[0].fmp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              ���� ����       :       %2d                    ��                            ���� ��� : %5d                 ��\n", clist[0].spare_stat, gold);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                               ����  :  %2d           ����ġ  :  %4d / %4d    ( %2d %% )                                     ��\n", clist[0].level, clist[0].expe, fexp[clist[0].level], clist[0].persent);
		printf("  ��                    ���      ���      ���      ���      ���      ���      ���      ���      ���                    ��\n");
		printf("  ��        �������������������������������������������������������        ��\n");
		printf("  ��        ��           10%       20%       30%       40%       50%       60%       70%       80%       90%          ��        ��\n");
		printf("  ��        ��  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[0].persent)
				printf("��");
			else
				printf("��");
		}
		printf("  ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.\n\n  �����ʰ� �ʱ���� 1�� ���ݷ°� ������ 1�� �����մϴ�.\n\n  �δ� 1�� �ִ�mp���� 2�� �����մϴ�.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��          1. ����           ��          ��          2. ����           ��          ��          3. ����           ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    �����������������          �����������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��       1. ĳ���� ����       ��                                                    ��        2. �κ��丮         ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� 2�� �����ּ���.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��     1. ���� ���� ������    ��                                                    ��     2. ���� ���� ������    ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��          �����������������          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    �����������������          ��                            ��          �����������������    ��\n");
		printf("  ��                                              ��                            ��                                              ��\n");
		printf("  ��                                              ��       5. ��ü ������       ��                                              ��\n");
		printf("  ��    �����������������          ��                            ��          �����������������    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          �����������������          ��                            ��    ��\n");
		printf("  ��    ��     3. ���� ���� ������    ��                                                    ��       4. �Һ� ������       ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� 1�� �����ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                              �ɷ�ġ1                                                   ���� ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 10].ea > 0) {
				printf("  ��   %d. %-20s                 ������(���ݷ�) : %2d                                             %2d ��            ��\n", index, ilist[i + 10].name, ilist[i + 10].add_readership, ilist[i + 10].ea);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i + 10].index = index;
				index++;
			}
		}
		printf("  ��   %d. ��� ����                                                                                                             ��\n", index);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ��� �Ͻ÷��� b�� �����ּ���.\n\n  ���⿡�� ���ϴ� �������� �����Ͽ� �� 2������ ���� �����մϴ�.\n\n  ������ ��������� ĳ���� �������� Ȯ�� �����մϴ�.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}

	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��     1. ���� ���� ������    ��                                                    ��     2. ���� ���� ������    ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��          �����������������          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    �����������������          ��                            ��          �����������������    ��\n");
		printf("  ��                                              ��                            ��                                              ��\n");
		printf("  ��                                              ��       5. ��ü ������       ��                                              ��\n");
		printf("  ��    �����������������          ��                            ��          �����������������    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          ��                            ��          ��                            ��    ��\n");
		printf("  ��    ��                            ��          �����������������          ��                            ��    ��\n");
		printf("  ��    ��     3. ���� ���� ������    ��                                                    ��       4. �Һ� ������       ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��       1. ĳ���� ����       ��                                                    ��        2. �κ��丮         ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    ��                            ��                                                    ��                            ��    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.\n");
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
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    �����������������                  ��             ��                 �����������������    ��\n");
		printf("  ��    ��                            ��                  ��             ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��        ������������   ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    ��       1.������ ����        ��            ��          ��       ������         ��        2. ��ų ����        ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��            ��          ��       ��                 ��                            ��    ��\n");
		printf("  ��    ��                            ��              ������         ��                 ��                            ��    ��\n");
		printf("  ��    �����������������          ��������������                �����������������    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��                                                                      ��                                                    ��\n");
		printf("  ��    �����������������                                                    �����������������    ��\n");
		printf("  ��    ��                            ��          ��������������                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��                                  ��                ��                            ��    ��\n");
		printf("  ��    ��     3. ���� �� �κ��丮    ��                                  ��                ��     4. ���� �Ϸ� ���±�    ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��      ��                ��                            ��    ��\n");
		printf("  ��    ��                            ��               ��         ��                        ��                            ��    ��\n");
		printf("  ��    �����������������      �������������������          �����������������    ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  �̻����� ���ѷα׸� ��� �����մϴ�. �����ϼ̽��ϴ�!\n\n  ��� �Ͻ÷��� 1�� �����ּ���.");
		check_exp();
		a = (_getch());
		if (a == '1')
			break;
		else
			continue;
	}
}

////////////////////////////////////////////////////////////   ������� ���ѷα�   ////////////////////////////////////////////////////////////

void c_choice(int stnum) {
	while (1) {
		for (int i = 0; i < 3; i++) {
			//clist[i].mp = clist[i].fmp;
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
					printf("  ��  %s�� ���!!                                               = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.                          ��\n", clist[i].name);
					printf("  ��                                                                                                                            ��\n");
					printf("  ��  1. �⺻����                                                 = ĳ������ �⺻ ������ �մϴ�.                                ��\n");
					printf("  ��  2. ��ų                                                     = ĳ������ ��ų�� �����մϴ�.                                 ��\n");
					printf("  ��  3. �޴�                                                     = �κ��丮���� ��� ������ �������� �����մϴ�.               ��\n");
					printf("  ��  4. ����ġ��!                                                = �̹� ���������� �����մϴ�.                                 ��\n");
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n\n  ����� �����Ͻÿ�.\n");
					print_line();
					a = _getch();
					if (a == '1') {
						c_attack(i, stnum);
						if (check_exter() == 2) {
							printf("\n\n  ������ ��� óġ�߽��ϴ�!!\n\n");
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
						c_skill(i, stnum);
						if (check_exter() == 2) {
							printf("\n\n  ������ ��� óġ�߽��ϴ�!!\n\n");
							printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							print_line();
							if (_getch())
								break;
						}
						if (clist[i].turn == 0) {
							i--;
							continue;
						}
					}
					if (a == '3') {
						dun_menu();
						i--;
						continue;
					}
					if (a == '4') {
						printf("\n�̹� ������������ �����ðڽ��ϱ�? Y or N\n");
						a = getch();
						if (a == 'y' || a == 'Y')
							town();
						else {
							i--;
							continue;
						}
					}
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
		printf("  ��  %s�� ����!!                                                   = ������ ĳ������ ����!                                   ��\n", clist[cnum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (mlist[0].hp > 0) 
			printf("  ��  1. %-18s                                             = %18s��(��) �����մϴ�.                  ��\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[1].hp > 0)
			printf("  ��  2. %-18s                                             = %18s��(��) �����մϴ�.                  ��\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[2].hp > 0)
			printf("  ��  3. %-18s                                             = %18s��(��) �����մϴ�.                  ��\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ������ ���� �����ϼ���.\n");
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
				printf("\n  �ش� ���ʹ� �̹� ���������ϴ�.\n\n �ƹ�Ű�� ��������.");
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
				printf("\n  �ش� ���ʹ� �̹� ���������ϴ�.\n\n �ƹ�Ű�� ��������.");
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
				printf("\n  �ش� ���ʹ� �̹� ���������ϴ�.\n\n �ƹ�Ű�� ��������.");
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
		printf("  ��  %s�� %18s ��ų!!                            = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ��                                                                                                                            ��\n");
		if (mlist[0].hp > 0)
			printf("  ��  1. %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[1].hp > 0)
			printf("  ��  2. %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[2].hp > 0)
			printf("  ��  3. %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  ��                                                                                                                            ��\n");		
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n\n  ������ ���� �����ϼ���.\n");
		print_line();
		a = _getch();
		if (a == '1') {
			if (mlist[0].hp > 0) {
				damage_character_to_monster(cnum, 0, snum);
				hit_monster(cnum, 0, stnum);
				clist[cnum].mp -= slist[snum].diff_mp;
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
				damage_character_to_monster(cnum, 1, snum);
				hit_monster(cnum, 1, stnum);
				clist[cnum].mp -= slist[snum].diff_mp;
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
				damage_character_to_monster(cnum, 2, snum);
				hit_monster(cnum, 2, stnum);
				clist[cnum].mp -= slist[snum].diff_mp;
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
			if (clist[cnum].skill[2].ea == 0 && clist[cnum].skill[1].ea == 0) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��    �����ϰ� �ִ� ��ų�� �����ϴ�.                                                                                          ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("  �ڷ� ���ư��÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					break;
			}

			else {
				printf("  ��  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.                             ��\n", clist[cnum].name);
				printf("  ��                                                                                                                            ��\n");
				if (clist[cnum].skill[1].name != 0) {
					printf("  ��  1. %-13s  :     �߰� att + %2d      �߰� def + %2d      mp�Ҹ� - %2d         = %s�� ��ų                           ��\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].name);
					printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[1].info);
				}
				else {
					printf("  ��                                                                                                                            ��\n");
				}
				printf("  ��                                                                                                                            ��\n");
				if (clist[cnum].skill[2].name != 0) {
					printf("  ��  2. %-13s  :     �߰� att + %2d      �߰� def + %2d      mp�Ҹ� - %2d         = %s�� ��ų                           ��\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].name);
					printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[2].info);
				}
				else {
					printf("  ��                                                                                                                            ��\n");
				}
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n\n  ��ų�� �����ϼ���.\n");
				print_line();
				a = _getch();
				if (a == '1') {
					if (clist[cnum].skill[1].ea != 0) {
						if (clist[cnum].mp >= clist[cnum].skill[1].diff_mp) {
							if (clist[cnum].skill[1].num == 3 || clist[cnum].skill[1].num == 4) {
								if (clist[cnum].skill[1].num == 3)
									double_attack(cnum, slist[clist[cnum].skill[1].num].num, 1, stnum);
								if (clist[cnum].skill[1].num == 4)
									double_attack(cnum, slist[clist[cnum].skill[1].num].num, 1, stnum);
								break;
							}
							if (clist[cnum].skill[1].num == 5 || clist[cnum].skill[1].num == 6 || clist[cnum].skill[1].num == 7) {
								wide_attack(cnum, slist[clist[cnum].skill[1].num].num, stnum, 1);
								break;
							}
							else {
								cs_attack(cnum, clist[cnum].skill[1].num, stnum);
								break;
							}
						}
						else {
							printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							if (_getch())
								continue;
						}
					}
					else
						continue;
				}
				if (a == '2') {
					if (clist[cnum].skill[2].ea != 0) {
						if (clist[cnum].mp >= clist[cnum].skill[2].diff_mp) {
							if (clist[cnum].skill[2].num == 3 || clist[cnum].skill[2].num == 4) {
								if (clist[cnum].skill[2].num == 3)
									double_attack(cnum, slist[clist[cnum].skill[2].num].num, 2, stnum);
								if (clist[cnum].skill[2].num == 4)
									double_attack(cnum, slist[clist[cnum].skill[2].num].num, 2, stnum);
								break;
							}
							if (clist[cnum].skill[2].num == 5 || clist[cnum].skill[2].num == 6 || clist[cnum].skill[2].num == 7) {
								wide_attack(cnum, slist[clist[cnum].skill[2].num].num, stnum, 2);
								break;
							}
							else {
								cs_attack(cnum, clist[cnum].skill[2].num, stnum);
								break;
							}
						}
						else {
							printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							if (_getch())
								continue;
						}
					}
					else
						continue;
				}
				if (a == 'b' || a == 'B')
					break;
			}
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
			if (clist[cnum].skill[2].ea == 0 && clist[cnum].skill[1].ea == 0) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��    �����ϰ� �ִ� ��ų�� �����ϴ�.                                                                                          ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("  �ڷ� ���ư��÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					break;
			}
			else {
				printf("  ��  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.                             ��\n", clist[cnum].name);
				printf("  ��                                                                                                                            ��\n");
				if (clist[cnum].skill[1].ea != 0) {
					printf("  ��  1. %-13s  :     �߰� att + %2d      �߰� def + %2d      mp�Ҹ� - %2d       = %s�� ��ų                             ��\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].name);
					printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[1].info);
				}
				else {
					printf("  ��                                                                                                                            ��\n");
				
				}
				printf("  ��                                                                                                                            ��\n");
				if (clist[cnum].skill[2].ea != 0) {
					printf("  ��  2. %-13s  :     �߰� att + %2d      �߰� def + %2d      mp�Ҹ� - %2d       = %s�� ��ų                             ��\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].name);
					printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[1].info);
				}
				else {
					printf("  ��                                                                                                                            ��\n");
				
				}
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				print_line();
				a = _getch();
				if (a == '1') {
					if (clist[cnum].skill[1].ea != 0) {
						if (clist[cnum].mp >= clist[cnum].skill[1].diff_mp) {
							if (clist[cnum].skill[1].num == 13 || clist[cnum].skill[1].num == 15) {
								wide_attack(cnum, slist[clist[cnum].skill[1].num].num, stnum, 1);
								break;
							}
							if (clist[cnum].skill[1].num == 14) {
								stun_attack(cnum, slist[clist[cnum].skill[1].num].num, stnum);
								break;
							}
							if (clist[cnum].skill[1].num == 16 || clist[cnum].skill[1].num == 17) {
								armor(cnum, slist[clist[cnum].skill[1].num].num);
								break;
							}
							else {
								cs_attack(cnum, 1, stnum);
								break;
							}
						}
						else {
							printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							if (_getch())
								continue;
						}
					}
					else
						continue;


				}
				if (a == '2') {
					if (clist[cnum].skill[2].ea != 0) {
						if (clist[cnum].mp >= clist[cnum].skill[2].diff_mp) {
							if (clist[cnum].skill[2].num == 13 || clist[cnum].skill[2].num == 15) {
								wide_attack(cnum, slist[clist[cnum].skill[2].num].num, stnum, 2);
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
							printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							if (_getch())
								continue;
						}
					}
					else
						continue;
				}
				if (a == 'b' || a == 'B')
					break;
			}
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
			if (clist[cnum].skill[2].ea == 0 && clist[cnum].skill[1].ea == 0) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��    �����ϰ� �ִ� ��ų�� �����ϴ�.                                                                                          ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("  �ڷ� ���ư��÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					break;
			}
			else {
				printf("  ��  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.                             ��\n", clist[cnum].name);
				printf("  ��                                                                                                                            ��\n");
				if (clist[cnum].skill[1].ea != 0) {
					if (clist[cnum].skill[1].num == 21) {
						printf("  ��  1. %-18s  :     �߰� att + %2d      �߰� def + %2d      mp�Ҹ� - %2d       = %s�� ��ų                        ��\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_att, clist[cnum].skill[1].add_def, clist[cnum].skill[1].diff_mp, clist[cnum].name);
						printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[1].info);
					}
					else {
						printf("  ��  1. %-18s  :     hp ȸ�� + %3d       mp ȸ�� + %2d      mp�Ҹ� - %2d       = %s�� ��ų                        ��\n", clist[cnum].skill[1].name, clist[cnum].skill[1].add_hp, clist[cnum].skill[1].add_mp, clist[cnum].skill[1].diff_mp, clist[cnum].name);
						printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[1].info);
					}
				}
				if (clist[cnum].skill[2].ea != 0) {
					if (clist[cnum].skill[2].num == 21) {
						printf("  ��  1. %-18s  :     �߰� att + %2d      �߰� def + %2d      mp�Ҹ� - %2d       = %s�� ��ų                        ��\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_att, clist[cnum].skill[2].add_def, clist[cnum].skill[2].diff_mp, clist[cnum].name);
						printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[2].info);
					}
					else {
						printf("  ��  2. %-18s  :     hp ȸ�� + %3d       mp ȸ�� + %2d      mp�Ҹ� - %2d       = %s�� ��ų                        ��\n", clist[cnum].skill[2].name, clist[cnum].skill[2].add_hp, clist[cnum].skill[2].add_mp, clist[cnum].skill[2].diff_mp, clist[cnum].name);
						printf("  ��                           %-41s                                                        ��\n", clist[cnum].skill[2].info);
					}
				}
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n\n  ��ų�� �����ϼ���.\n");
				print_line();
				a = _getch();
				if (a == '1') {
					if (clist[cnum].skill[1].ea != 0) {
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
							printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							if (_getch())
								continue;
						}
					}
					else
						continue;
				}
				if (a == '2') {
					if (clist[cnum].skill[2].ea != 0) {
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
							printf("\n  ���� ������ �����մϴ�.\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
							if (_getch())
								continue;
						}
					}
					else
						continue;
				}
				if (a == 'b' || a == 'B')
					break;
			}
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
		printf("\n  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��  �÷��̾��� ��!!                                                                                                           ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��  �÷��̾��� ���Դϴ�!!                                                                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
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
		printf("  �� ������ ��!!                                                                                                              ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ ���Դϴ�!!                                                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
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
			ditem_1_1();
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
				printf("  ��                                     ����                                      ����                                     ��\n");
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
				c_choice(11);
				if (check_exter() != 2) {
					turn_monster();
					m_choice();
					if (check_exter() == 1) {
						printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
						printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("  ��                                     ����                                 ��������                                  ��\n");
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
				c_choice(12);
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
			ditem_1_3();
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
				printf("  ��                                     ����                                    ��������                               ��\n");
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
				c_choice(13);
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
			ditem_1_4();
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
				printf("  ��                                     ����                                  ���������                               ��\n");
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
				c_choice(14);
				if (check_exter_boss(1) == 2) {
					printf("\n  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
					stlist[2].is_clear = 1;
					print_line();
					if (_getch())
						town();
				}
				turn_monster();
				m_choice();
				if (check_exter_boss(1) == 1) {
					printf("\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
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
		for (int i = 0; i < 3; i++) {
			mlist[i] = empty_mlist[i];
		}
		if (a != 'b' && a != 'B') {
			ditem_2_1();
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
				printf("  ��                                   ������                                      ���                                     ��\n");
				printf("  ��                                 ��������                                  ����                                     ��\n");
				printf("  ��                               ���          ���                              �����                                     ��\n");
				printf("  ��                               ���          ���                            ���  ���                                     ��\n");
				printf("  ��                                             ���                                  ���                                     ��\n");
				printf("  ��                                           ����        �������              ���                                     ��\n");
				printf("  ��                                         ����          �������              ���                                     ��\n");
				printf("  ��                                       ����                                      ���                                     ��\n");
				printf("  ��                                     ����                                        ���                                     ��\n");
				printf("  ��                                   ����                                          ���                                     ��\n");
				printf("  ��                                 ����                                            ���                                     ��\n");
				printf("  ��                               ����������                            ���������                               ��\n");
				printf("  ��                               ����������                            ���������                               ��\n");
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
				c_choice(21);
				if (check_exter() != 2) {
					turn_monster();
					m_choice();
					if (check_exter() == 1) {
						printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
						printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
						print_line();
						if (_getch())
							break;
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				mlist[i] = empty_mlist[i];
			}
			ditem_2_2();
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
				printf("  ��                                   ������                                    ������                                 ��\n");
				printf("  ��                                 ��������                                ��������                               ��\n");
				printf("  ��                               ���          ���                            ���          ���                             ��\n");
				printf("  ��                               ���          ���                            ���          ���                             ��\n");
				printf("  ��                                             ���                                          ���                             ��\n");
				printf("  ��                                           ����        �������                    ����                             ��\n");
				printf("  ��                                         ����          �������                  ����                               ��\n");
				printf("  ��                                       ����                                        ����                                 ��\n");
				printf("  ��                                     ����                                        ����                                   ��\n");
				printf("  ��                                   ����                                        ����                                     ��\n");
				printf("  ��                                 ����                                        ����                                       ��\n");
				printf("  ��                               ����������                            ����������                             ��\n");
				printf("  ��                               ����������                            ����������                             ��\n");
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
				c_choice(22);
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
			ditem_2_3();
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
				printf("  ��                                   ������                                    ������                                 ��\n");
				printf("  ��                                 ��������                                ��������                               ��\n");
				printf("  ��                               ���          ���                            ���        ����                             ��\n");
				printf("  ��                               ���          ���                            ���          ���                             ��\n");
				printf("  ��                                             ���                              ���        ���                             ��\n");
				printf("  ��                                           ����        �������          ���      ���                               ��\n");
				printf("  ��                                         ����          �������                  ����                               ��\n");
				printf("  ��                                       ����                                  ���      ���                               ��\n");
				printf("  ��                                     ����                                    ���        ���                             ��\n");
				printf("  ��                                   ����                                    ���          ���                             ��\n");
				printf("  ��                                 ����                                      ���        ����                             ��\n");
				printf("  ��                               ����������                              ��������                               ��\n");
				printf("  ��                               ����������                                ������                                 ��\n");
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
				c_choice(23);
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
			ditem_2_4();
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
				printf("  ��                                   ������                                                ���                           ��\n");
				printf("  ��                                 ��������                                            ����                           ��\n");
				printf("  ��                               ���          ���                                        �����                           ��\n");
				printf("  ��                               ���          ���                                      ���  ���                           ��\n");
				printf("  ��                                             ���                                    ���    ���                           ��\n");
				printf("  ��                                           ����        �������              ���      ���                           ��\n");
				printf("  ��                                         ����          �������            ���        ���                           ��\n");
				printf("  ��                                       ����                                  ���          ���                           ��\n");
				printf("  ��                                     ����                                  ����          ���                           ��\n");
				printf("  ��                                   ����                                    �������������                       ��\n");
				printf("  ��                                 ����                                      �������������                       ��\n");
				printf("  ��                               ����������                                            ���                           ��\n");
				printf("  ��                               ����������                                            ���                           ��\n");
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
				c_choice(24);
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
			ditem_2_5();
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
				printf("  ��                                   ������                                ��������                                 ��\n");
				printf("  ��                                 ��������                              ���������                               ��\n");
				printf("  ��                               ���          ���                            ���        ����                             ��\n");
				printf("  ��                               ���          ���                            ���          ���                             ��\n");
				printf("  ��                                             ���                            ���          ���                             ��\n");
				printf("  ��                                           ����        �������        ���        ����                             ��\n");
				printf("  ��                                         ����          �������        ���������                               ��\n");
				printf("  ��                                       ����                                ����������                             ��\n");
				printf("  ��                                     ����                                  ���          ����                           ��\n");
				printf("  ��                                   ����                                    ���            ���                           ��\n");
				printf("  ��                                 ����                                      ���            ���                           ��\n");
				printf("  ��                               ����������                            �����������                           ��\n");
				printf("  ��                               ����������                            ����������                             ��\n");
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
				c_choice(25);
				if (check_exter_boss(2) == 2) {
					printf("\n  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
					stlist[3].is_clear = 1;
					print_line();
					if (_getch())
						town();
				}
				turn_monster();
				m_choice();
				if (check_exter_boss(2) == 1) {
					printf("\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
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

void enter_dungeon3() {
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
		for (int i = 0; i < 3; i++) {
			mlist[i] = empty_mlist[i];
		}
		if (a != 'b' && a != 'B') {
			ditem_3_1();
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
				printf("  ��                                   ������                                      ���                                     ��\n");
				printf("  ��                                 ��������                                  ����                                     ��\n");
				printf("  ��                               ���        ����                              �����                                     ��\n");
				printf("  ��                               ���          ���                            ���  ���                                     ��\n");
				printf("  ��                                 ���        ���                                  ���                                     ��\n");
				printf("  ��                                 ���      ���          �������              ���                                     ��\n");
				printf("  ��                                         ����          �������              ���                                     ��\n");
				printf("  ��                                 ���      ���                                    ���                                     ��\n");
				printf("  ��                                 ���        ���                                  ���                                     ��\n");
				printf("  ��                               ���          ���                                  ���                                     ��\n");
				printf("  ��                               ���        ����                                  ���                                     ��\n");
				printf("  ��                                 ��������                              ���������                               ��\n");
				printf("  ��                                   ������                                ���������                               ��\n");
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
				c_choice(31);
				if (check_exter() != 2) {
					turn_monster();
					m_choice();
					if (check_exter() == 1) {
						printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
						printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
						print_line();
						if (_getch())
							break;
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				mlist[i] = empty_mlist[i];
			}
			ditem_3_2();
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
				printf("  ��                                     ������                               ������                                    ��\n");
				printf("  ��                                   ��������                           ��������                                  ��\n");
				printf("  ��                                 ���        ����                       ���          ���                                ��\n");
				printf("  ��                                 ���          ���                       ���          ���                                ��\n");
				printf("  ��                                   ���        ���                                     ���                                ��\n");
				printf("  ��                                   ���      ���        �������                 ����                                ��\n");
				printf("  ��                                           ����        �������               ����                                  ��\n");
				printf("  ��                                   ���      ���                                 ����                                    ��\n");
				printf("  ��                                   ���        ���                             ����                                      ��\n");
				printf("  ��                                 ���          ���                           ����                                        ��\n");
				printf("  ��                                 ���        ����                         ����                                          ��\n");
				printf("  ��                                   ��������                         ����������                                ��\n");
				printf("  ��                                     ������                           ����������                                ��\n");
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
				c_choice(32);
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
			ditem_3_3();
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
				printf("  ��                                     ������                                  ������                                 ��\n");
				printf("  ��                                   ��������                              ��������                               ��\n");
				printf("  ��                                 ���        ����                          ���        ����                             ��\n");
				printf("  ��                                 ���          ���                          ���          ���                             ��\n");
				printf("  ��                                   ���        ���                            ���        ���                             ��\n");
				printf("  ��                                   ���      ���        �������          ���      ���                               ��\n");
				printf("  ��                                           ����        �������                  ����                               ��\n");
				printf("  ��                                   ���      ���                              ���      ���                               ��\n");
				printf("  ��                                   ���        ���                            ���        ���                             ��\n");
				printf("  ��                                 ���          ���                          ���          ���                             ��\n");
				printf("  ��                                 ���        ����                          ���        ����                             ��\n");
				printf("  ��                                   ��������                              ��������                               ��\n");
				printf("  ��                                     ������                                  ������                                 ��\n");
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
				c_choice(33);
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
			ditem_3_4();
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
				printf("  ��                                     ������                              ��������                                 ��\n");
				printf("  ��                                   ��������                            ���������                               ��\n");
				printf("  ��                                 ���        ����                          ���        ����                             ��\n");
				printf("  ��                                 ���          ���                          ���          ���                             ��\n");
				printf("  ��                                   ���        ���                          ���          ���                             ��\n");
				printf("  ��                                   ���      ���        �������        ���        ����                             ��\n");
				printf("  ��                                           ����        �������        ���������                               ��\n");
				printf("  ��                                   ���      ���                            ����������                             ��\n");
				printf("  ��                                   ���        ���                          ���          ����                           ��\n");
				printf("  ��                                 ���          ���                          ���            ���                           ��\n");
				printf("  ��                                 ���        ����                          ���            ���                           ��\n");
				printf("  ��                                   ��������                            �����������                           ��\n");
				printf("  ��                                     ������                              ����������                             ��\n");
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
				c_choice(34);
				if (check_exter_boss(3) == 2) {
					printf("\n  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
					stlist[4].is_clear = 1;
					print_line();
					if (_getch())
						town();
				}
				turn_monster();
				m_choice();
				if (check_exter_boss(3) == 1) {
					printf("\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
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

void enter_dungeon4() {
	clist[0].hp = clist[0].fhp;
	clist[1].hp = clist[1].fhp;
	clist[2].hp = clist[2].fhp;
	clist[0].mp = clist[0].fmp;
	clist[1].mp = clist[1].fmp;
	clist[2].mp = clist[2].fmp;
	char b;
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
		printf("  ��                                                                 ���                                                       ��\n");
		printf("  ��                                                               ����                                                       ��\n");
		printf("  ��                                                             �����                                                       ��\n");
		printf("  ��                                                           ���  ���                                                       ��\n");
		printf("  ��                                                         ���    ���                                                       ��\n");
		printf("  ��                                                       ���      ���                                                       ��\n");
		printf("  ��                                                     ���        ���                                                       ��\n");
		printf("  ��                                                   ���          ���                                                       ��\n");
		printf("  ��                                                 ����          ���                                                       ��\n");
		printf("  ��                                                 �������������                                                   ��\n");
		printf("  ��                                                 �������������                                                   ��\n");
		printf("  ��                                                                 ���                                                       ��\n");
		printf("  ��                                                                 ���                                                       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		for (int i = 0; i < 3; i++) {
			mlist[i] = empty_mlist[i];
		}
		if (a != 'b' && a != 'B') {
			ditem_4_1();
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
				printf("  ��                                         ���                                      ���                                     ��\n");
				printf("  ��                                       ����                                    ����                                     ��\n");
				printf("  ��                                     �����                                  �����                                     ��\n");
				printf("  ��                                   ���  ���                                ���  ���                                     ��\n");
				printf("  ��                                 ���    ���                                      ���                                     ��\n");
				printf("  ��                               ���      ���            �������              ���                                     ��\n");
				printf("  ��                             ���        ���            �������              ���                                     ��\n");
				printf("  ��                           ���          ���                                      ���                                     ��\n");
				printf("  ��                         ����          ���                                      ���                                     ��\n");
				printf("  ��                         �������������                                  ���                                     ��\n");
				printf("  ��                         �������������                                  ���                                     ��\n");
				printf("  ��                                         ���                                ���������                               ��\n");
				printf("  ��                                         ���                                ���������                               ��\n");
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
				c_choice(41);
				if (check_exter() != 2) {
					turn_monster();
					m_choice();
					if (check_exter() == 1) {
						printf("\n\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
						printf("  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
						print_line();
						if (_getch())
							break;
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				mlist[i] = empty_mlist[i];
			}
			ditem_4_2();
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
				printf("  ��                                         ���                                    ������                                 ��\n");
				printf("  ��                                       ����                                  ��������                               ��\n");
				printf("  ��                                     �����                                ���          ���                             ��\n");
				printf("  ��                                   ���  ���                                ���          ���                             ��\n");
				printf("  ��                                 ���    ���                                              ���                             ��\n");
				printf("  ��                               ���      ���            �������                    ����                             ��\n");
				printf("  ��                             ���        ���            �������                  ����                               ��\n");
				printf("  ��                           ���          ���                                        ����                                 ��\n");
				printf("  ��                         ����          ���                                      ����                                   ��\n");
				printf("  ��                         �������������                                ����                                     ��\n");
				printf("  ��                         �������������                              ����                                       ��\n");
				printf("  ��                                         ���                                ����������                             ��\n");
				printf("  ��                                         ���                                ����������                             ��\n");
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
				c_choice(42);
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
			ditem_4_3();
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
				printf("  ��                                         ���                                    ������                                 ��\n");
				printf("  ��                                       ����                                  ��������                               ��\n");
				printf("  ��                                     �����                                ���        ����                             ��\n");
				printf("  ��                                   ���  ���                                ���          ���                             ��\n");
				printf("  ��                                 ���    ���                                  ���        ���                             ��\n");
				printf("  ��                               ���      ���            �������          ���      ���                               ��\n");
				printf("  ��                             ���        ���            �������                  ����                               ��\n");
				printf("  ��                           ���          ���                                  ���      ���                               ��\n");
				printf("  ��                         ����          ���                                  ���        ���                             ��\n");
				printf("  ��                         �������������                            ���          ���                             ��\n");
				printf("  ��                         �������������                            ���        ����                             ��\n");
				printf("  ��                                         ���                                  ��������                               ��\n");
				printf("  ��                                         ���                                    ������                                 ��\n");
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
				c_choice(43);
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
			ditem_4_4();
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
				printf("  ��                                         ���                                                ���                           ��\n");
				printf("  ��                                       ����                                              ����                           ��\n");
				printf("  ��                                     �����                                            �����                           ��\n");
				printf("  ��                                   ���  ���                                          ���  ���                           ��\n");
				printf("  ��                                 ���    ���                                        ���    ���                           ��\n");
				printf("  ��                               ���      ���            �������              ���      ���                           ��\n");
				printf("  ��                             ���        ���            �������            ���        ���                           ��\n");
				printf("  ��                           ���          ���                                  ���          ���                           ��\n");
				printf("  ��                         ����          ���                                ����          ���                           ��\n");
				printf("  ��                         �������������                            �������������                       ��\n");
				printf("  ��                         �������������                            �������������                       ��\n");
				printf("  ��                                         ���                                                ���                           ��\n");
				printf("  ��                                         ���                                                ���                           ��\n");
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
				c_choice(44);
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
			ditem_4_5();
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
				printf("  ��                                         ���                                ��������                                 ��\n");
				printf("  ��                                       ����                                ���������                               ��\n");
				printf("  ��                                     �����                                ���        ����                             ��\n");
				printf("  ��                                   ���  ���                                ���          ���                             ��\n");
				printf("  ��                                 ���    ���                                ���          ���                             ��\n");
				printf("  ��                               ���      ���            �������        ���        ����                             ��\n");
				printf("  ��                             ���        ���            �������        ���������                               ��\n");
				printf("  ��                           ���          ���                                ����������                             ��\n");
				printf("  ��                         ����          ���                                ���          ����                           ��\n");
				printf("  ��                         �������������                            ���            ���                           ��\n");
				printf("  ��                         �������������                            ���            ���                           ��\n");
				printf("  ��                                         ���                                �����������                           ��\n");
				printf("  ��                                         ���                                ����������                             ��\n");
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
				c_choice(45);
				if (check_exter_boss(4) == 2) {
					printf("\n  ��� ������ ���������� �ϼ��߽��ϴ�!!!!\n  ������ ������ �����Ը��� �˰��ʴϴ�.");
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
					print_line();
					printf("\n                 �̹� �б��� ��� ������ �������ϴ�!!\n\n");
					while (1) {
						printf("����������������������������������������\n");
						printf("��                                                                          ��\n");
						printf("��                                 ����ǥ                                   ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						if (clist[0].level == 10)
							printf("��                  ������ ����       :       A+                            ��\n");
						else if (clist[0].level == 10)
							printf("��                  ������ ����       :       A                             ��\n");
						else if (clist[0].level >= 8)
							printf("��                  ������ ����       :       B+                            ��\n");
						else if (clist[0].level >= 6)
							printf("��                  ������ ����       :       B                             ��\n");
						else if (clist[0].level >= 4)
							printf("��                  ������ ����       :       C+                            ��\n");
						else if (clist[0].level >= 2)
							printf("��                  ������ ����       :       C                             ��\n");
						else
							printf("��                  ������ ����       :       D+                            ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						if (clist[1].level == 10)
							printf("��                  ������ ����       :       A+                            ��\n");
						else if (clist[1].level == 10)
							printf("��                  ������ ����       :       A                             ��\n");
						else if (clist[1].level >= 8)
							printf("��                  ������ ����       :       B+                            ��\n");
						else if (clist[1].level >= 6)
							printf("��                  ������ ����       :       B                             ��\n");
						else if (clist[1].level >= 4)
							printf("��                  ������ ����       :       C+                            ��\n");
						else if (clist[1].level >= 2)
							printf("��                  ������ ����       :       C                             ��\n");
						else
							printf("��                  ������ ����       :       D+                            ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						if (clist[2].level == 10)
							printf("��                  ������ ����       :       A+                            ��\n");
						else if (clist[2].level == 10)
							printf("��                  ������ ����       :       A                             ��\n");
						else if (clist[2].level >= 8)
							printf("��                  ������ ����       :       B+                            ��\n");
						else if (clist[2].level >= 6)
							printf("��                  ������ ����       :       B                             ��\n");
						else if (clist[2].level >= 4)
							printf("��                  ������ ����       :       C+                            ��\n");
						else if (clist[2].level >= 2)
							printf("��                  ������ ����       :       C                             ��\n");
						else
							printf("��                  ������ ����       :       D+                            ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						printf("��                                                                          ��\n");
						printf("����������������������������������������\n");

						printf("������ �����Ͻ÷��� b�� �����ּ���.\n");
						b = _getch();
						if (b == 'b' || b == 'B')
							exit(0);
					}
				}
				turn_monster();
				m_choice();
				if (check_exter_boss(4) == 1) {
					printf("\n  ĳ���Ͱ� ��� ����� ���� ���������ϴ�!!!!\n  �ش� ������ ������ѿ� ������ ���߽��ϴ�.\n\n");
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

void double_attack(int cnum, int snum, int csnum, int stnum) {
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
		printf("  �� %-4s�� %-20s ��ų!!                           = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[cnum].name, slist[snum].name);
		printf("  ��                                                                                                                            ��\n");
		if (mlist[0].hp > 0)
			printf("  ��  1. %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[1].hp > 0)
			printf("  ��  2. %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[2].hp > 0)
			printf("  ��  3. %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ ���� �����ϼ���.                                                                                                    ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		a = _getch();
		if (a == '1') {
			if (mlist[0].condition == 0) {
				if (slist[snum].num == 3) {
					if (mlist[0].hp > 0) {
						damage_character_to_monster(cnum, 0, csnum);
						damage_character_to_monster(cnum, 0, csnum);
						clist[cnum].mp -= slist[snum].diff_mp;
						hit_double_monster(cnum, 0, stnum, 2);
						clist[cnum].turn = 1;
						break;
					}
				}
				if (slist[snum].num == 4) {
					damage_character_to_monster(cnum, 0, csnum);
					damage_character_to_monster(cnum, 0, csnum);
					damage_character_to_monster(cnum, 0, csnum);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_double_monster(cnum, 0, stnum, 3);
					clist[cnum].turn = 1;
					break;
				}
			}
			else {
				printf("\n  �̹� ���� ����Դϴ�.\n\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (mlist[1].condition == 0) {
				if (slist[snum].num == 3) {
					if (mlist[1].hp > 0) {
						damage_character_to_monster(cnum, 1, csnum);
						damage_character_to_monster(cnum, 1, csnum);
						clist[cnum].mp -= slist[snum].diff_mp;
						hit_double_monster(cnum, 1, stnum, 2);
						clist[cnum].turn = 1;
						break;
					}
				}
				if (slist[snum].num == 4) {
					damage_character_to_monster(cnum, 1, csnum);
					damage_character_to_monster(cnum, 1, csnum);
					damage_character_to_monster(cnum, 1, csnum);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_double_monster(cnum, 1, stnum, 3);
					clist[cnum].turn = 1;
					break;
				}
			}
			else {
				printf("\n  �̹� ���� ����Դϴ�.\n\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}

		if (a == '3') {
			if (mlist[2].condition == 0) {
				if (slist[snum].num == 3) {
					if (mlist[2].hp > 0) {
						damage_character_to_monster(cnum, 2, csnum);
						damage_character_to_monster(cnum, 2, csnum);
						clist[cnum].mp -= slist[snum].diff_mp;
						hit_double_monster(cnum, 2, stnum, 2);
						clist[cnum].turn = 1;
						break;
					}
				}
				if (slist[snum].num == 4) {
					damage_character_to_monster(cnum, 2, csnum);
					damage_character_to_monster(cnum, 2, csnum);
					damage_character_to_monster(cnum, 2, csnum);
					clist[cnum].mp -= slist[snum].diff_mp;
					hit_double_monster(cnum, 2, stnum, 3);
					clist[cnum].turn = 1;
					break;
				}
			}
			else {
				printf("\n  �̹� ���� ����Դϴ�.\n\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void wide_attack(int cnum, int snum, int stnum, int csnum) {
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
		printf("  �� %-4s�� %-20s ��ų!!                           = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[cnum].name, slist[snum].name);
		printf("  ��                                                                                                                            ��\n");
		if (mlist[0].hp > 0)
			printf("  ��     %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[0].name, mlist[0].name);
		if (mlist[0].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[1].hp > 0)
			printf("  ��     %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[1].name, mlist[1].name);
		if (mlist[1].hp <= 0)
			printf("  ��                                                                                                                            ��\n");

		if (mlist[2].hp > 0)
			printf("  ��     %-18s                                       = %-18s�� �����մϴ�.                            ��\n", mlist[2].name, mlist[2].name);
		if (mlist[2].hp <= 0)
			printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ �Դϴ�.  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                     ��\n");
		printf("  ��                 �ڷΰ��� �����ø� 'b'�� �����ּ���.                                                                        ��");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;

		if (a != 'b' && a != 'B') {
			if (snum != 15) {
				if(mlist[0].condition==0)
					damage_character_to_monster(cnum, 0, csnum);
				if (mlist[1].condition == 0)
					damage_character_to_monster(cnum, 1, csnum);
				if (mlist[2].condition == 0)
					damage_character_to_monster(cnum, 2, csnum);
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_wide_monster(cnum, stnum);
				clist[cnum].turn = 1;
				break;
			}
			if (snum == 15) {
				mlist[0].is_stun = 1;
				mlist[1].is_stun = 1;
				mlist[2].is_stun = 1;
				clist[cnum].mp -= slist[snum].diff_mp;
				hit_wide_monster(cnum, stnum);
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
		printf("  �� %-4s�� %-20s ��ų!!                           = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[cnum].name, slist[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� 1. %18s                                        = %11s��ų�� %18s�� �����մϴ�.          ��\n", mlist[0].name, slist[snum].name, mlist[0].name);
		printf("  �� 2. %18s                                        = %11s��ų�� %18s�� �����մϴ�.          ��\n", mlist[1].name, slist[snum].name, mlist[1].name);
		printf("  �� 3. %18s                                        = %11s��ų�� %18s�� �����մϴ�           ��\n", mlist[2].name, slist[snum].name, mlist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ ���� �����ϼ���.  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                            ��\n");
		printf("  ��                                                                                                                            ��");
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
				printf("\n  �̹� ���� ����Դϴ�.\n\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("\n  �̹� ���� ����Դϴ�.\n\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
				printf("\n  �̹� ���� ����Դϴ�.\n\n  ����Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  �� %-4s�� %-20s ��ų!!                           = ������ ĳ������ ��ų�Դϴ�.                                 ��\n", clist[cnum].name, slist[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (snum == 16) {
			printf("  �� �ش� ĳ���Ͱ� %dȸ�� ������ �����մϴ�.                                                                                     ��\n", 1);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��   �ڷΰ��� �����ø� 'b'�� �����ּ���.                                                                                      ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��");
		}
		if (snum == 17) {
			printf("  �� �ش� ĳ���Ͱ� %dȸ�� ������ �����մϴ�.                                                                                     ��\n", 2);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��   �ڷΰ��� �����ø� 'b'�� �����ּ���.                                                                                      ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��");
		}
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
				hit_damage = 0;
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
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��\n");
					printf("  �� %18s��(��) %s��(��) ����!!                   = ���õ� �����Դϴ�.                                        ��\n", mlist[i].name, clist[who].name);
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��");
					print_line();
					printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
						printf("  ��                                                                                                                            ��\n");
						printf("  ��                                                                                                                            ��\n");
						printf("  �� %s��(��) %3d�� �������� ����!!!                                = %s��(��) %3d�� �������� �Ծ����ϴ�.                   ��\n", clist[who].name, hit_damage, clist[who].name, hit_damage);
						kill_character(0);
						mlist[i].turn = 1;
						printf("  ��                                                                                                                            ��\n");
						printf("  ��                                                                                                                            ��");
						print_line();
						printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("\n  %s��(��) ���� ���ϻ����Դϴ�!!!                                \n", mlist[mnum].name);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  �� %s�� ����!!                                                = ������ ĳ�����Դϴ�.                                        ��\n", clist[cnum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� �� %3d�� ������!!!                                           =         %-18s��(��) %3d�� �������� �Ծ����ϴ�. ��\n", hit_damage, mlist[mnum].name, hit_damage);
		kill_monster(cnum, stnum);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
}

void hit_double_monster(int cnum, int mnum, int stnum, int anum) {

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
		printf("  �� %s�� ����!!                                                = ������ ĳ�����Դϴ�.                                        ��\n", clist[cnum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  �� �� %3d�� ������!!!                                           = %18s��(��) %3d�� �������� �Ծ����ϴ�.         ��\n", hit_damage*anum, mlist[mnum].name, hit_damage*anum);
		kill_monster(cnum, stnum);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
}

void hit_wide_monster(int cnum, int stnum) {

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
		printf("  �� %s�� ����!!                                                = ������ ĳ�����Դϴ�.                                        ��\n", clist[cnum].name);
		printf("  ��                                                                                                                            ��\n");
		if(mlist[0].condition==0)
			printf("  ��    %3d�� ������!!!                                           =         %-18s��(��) %3d�� �������� �Ծ����ϴ�. ��\n", hit_damage, mlist[0].name, hit_damage);
		printf("  ��                                                                                                                            ��\n");
		if (mlist[1].condition == 0)
			printf("  ��    %3d�� ������!!!                                           =         %-18s��(��) %3d�� �������� �Ծ����ϴ�. ��\n", hit_damage, mlist[1].name, hit_damage);
		printf("  ��                                                                                                                            ��\n");
		if (mlist[2].condition == 0)
			printf("  ��    %3d�� ������!!!                                           =         %-18s��(��) %3d�� �������� �Ծ����ϴ�. ��\n", hit_damage, mlist[2].name, hit_damage);
		printf("  �����������������������������������������������������������������\n");
		kill_monster(cnum, stnum);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
}

void statp_check() {
	for (int i = 0; i < 3; i++) {
		clist[i].att += clist[i].readership + clist[i].item[0].add_readership + clist[i].item[1].add_readership;
		clist[i].def += clist[i].noteship + clist[i].item[0].add_noteship + clist[i].item[1].add_noteship;
		clist[i].fhp += clist[i].item[0].add_hp + clist[i].item[1].add_hp + (clist[i].noteship + clist[i].item[0].add_noteship + clist[i].item[1].add_noteship);
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
		printf("  �� %-4s�� %-20s ��ų!!                            = ������ ĳ������ ��ų�Դϴ�.                                ��\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                   ���� ���� hp                                                             ��\n");
		if (clist[0].hp > 0)
			printf("  �� 1. %s                                               %3d     = %s��ų�� %s�� ȸ���մϴ�.                         ��\n", clist[0].name, clist[0].hp, clist[cnum].skill[snum].name, clist[0].name);
		if (clist[1].hp > 0)
			printf("  �� 2. %s                                               %3d     = %s��ų�� %s�� ȸ���մϴ�.                         ��\n", clist[1].name, clist[1].hp, clist[cnum].skill[snum].name, clist[1].name);
		if (clist[2].hp > 0)
			printf("  �� 3. %s                                               %3d     = %s��ų�� %s�� ȸ���մϴ�.                         ��\n", clist[2].name, clist[2].hp, clist[cnum].skill[snum].name, clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ȸ���� ĳ���͸� �����ϼ���.                                                                                                ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		a = _getch();

		if (a == 'b' || a == 'B')
			break;
		if (a == '1') {
			if (clist[0].condition == 1) {					//�׾��µ� ȸ���Ϸ��� ���
				printf("\n  �ش� ĳ���ʹ� �̹� �׾����ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���. \n");
				if (_getch())
					continue;
			}
			if (clist[0].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
				if (clist[0].hp == clist[0].fhp) {
					printf("\n  ����� �̹� ü���� �������ֽ��ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���.\n");
					if (_getch())
						continue;
				}
				else if (clist[0].fhp <= clist[0].hp + clist[cnum].skill[snum].add_hp) {
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[0].fhp - clist[0].hp);
					clist[0].hp = clist[0].fhp;
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
				else if (clist[0].hp > 0 && clist[0].fhp > clist[0].hp + clist[cnum].skill[snum].add_hp) {
					clist[0].hp += clist[cnum].skill[snum].add_hp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[cnum].skill[snum].add_hp);
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
			}
		}
		if (a == '2') {
			if (clist[1].condition == 1) {					//�׾��µ� ȸ���Ϸ��� ���
				printf("\n  �ش� ĳ���ʹ� �̹� �׾����ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���. \n");
				if (_getch())
					continue;
			}
			if (clist[1].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
				if (clist[1].hp == clist[1].fhp) {
					printf("\n  ����� �̹� ü���� �������ֽ��ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���.\n");
					if (_getch())
						continue;
				}
				else if (clist[1].fhp < clist[1].hp + clist[cnum].skill[snum].add_hp) {
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[1].fhp - clist[1].hp);
					clist[1].hp = clist[1].fhp;
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
				else {
					clist[1].hp += clist[cnum].skill[snum].add_hp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[cnum].skill[snum].add_hp);
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
			}
		}
		if (a == '3') {
			if (clist[2].condition == 1) {					//�׾��µ� ȸ���Ϸ��� ���
				printf("\n  �ش� ĳ���ʹ� �̹� �׾����ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���. \n");
				if (_getch())
					continue;
			}
			if (clist[2].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
				if (clist[2].hp == clist[2].fhp) {
					printf("\n  ����� �̹� ü���� �������ֽ��ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���.\n");
					if (_getch())
						continue;
				}
				else if (clist[2].fhp < clist[2].hp + clist[cnum].skill[snum].add_hp) {
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[2].fhp - clist[2].hp);
					clist[2].hp = clist[2].fhp;
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
				else {
					clist[2].hp += clist[cnum].skill[snum].add_hp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[cnum].skill[snum].add_hp);
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
			}
		}
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
		printf("  �� %-4s�� %-20s ��ų!!                            = ������ ĳ������ ��ų�Դϴ�.                                ��\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                     ���� ���� hp                                                           ��\n");
		printf("  ��  %s                                                  %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[0].name, clist[0].hp, clist[cnum].skill[snum].name, clist[0].name);
		printf("  ��  %s                                                  %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[1].name, clist[1].hp, clist[cnum].skill[snum].name, clist[1].name);
		printf("  ��  %s                                                  %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[2].name, clist[2].hp, clist[cnum].skill[snum].name, clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ �Դϴ�.  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                     ��\n");
		printf("  ��                 �ڷΰ��� �����ø� 'b'�� �����ּ���.                                                                        ��");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		else {
			if (clist[0].hp == clist[0].fhp && clist[1].hp == clist[1].fhp && clist[2].hp == clist[2].fhp) {
				printf("\n  ��                                                                                                                            ��\n");
				printf("  ��  ��� ĳ������ ü���� �����մϴ�!!                                                                                         ��\n");
				printf("  ��  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                                    ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
				if (_getch())
					continue;
			}

			printf("\n  ��                                                                                                                            ��\n");
			for (int i = 0; i < 3; i++) {
				if (clist[i].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
					if (clist[i].fhp <= clist[i].hp + clist[cnum].skill[snum].add_hp) {
						printf("  ��  %s�� ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[i].name, clist[i].fhp - clist[i].hp);
						clist[i].hp = clist[i].fhp;
					}
					else {
						clist[i].hp += clist[cnum].skill[snum].add_hp;
						printf("  ��  %s�� ü���� %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[i].name, clist[cnum].skill[snum].add_hp);
					}
				}
			}
			printf("  ��                                                                                                                            ��\n");
			printf("  �����������������������������������������������������������������\n");
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			clist[cnum].turn = 1;
			printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
			if (_getch())
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
		printf("  �� %-4s�� %-20s ��ų!!                            = ������ ĳ������ ��ų�Դϴ�.                                ��\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                     ���� ���� mp                                                           ��\n");
		printf("  ��  1. %s                                               %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[0].name, clist[0].mp, clist[cnum].skill[snum].name, clist[0].name);
		printf("  ��  2. %s                                               %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[1].name, clist[1].mp, clist[cnum].skill[snum].name, clist[1].name);
		printf("  ��  3. %s                                               %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[2].name, clist[2].mp, clist[cnum].skill[snum].name, clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ȸ���� ĳ���͸� �����ϼ���.                                                                                                ��\n");
		printf("  ��                                                                                                                            ��");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		if (a == '1') {
			if (clist[0].condition == 1) {					//�׾��µ� ȸ���Ϸ��� ���
				printf("\n  �ش� ĳ���ʹ� �̹� �׾����ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���. \n");
				if (_getch())
					continue;
			}
			if (clist[0].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
				if (clist[0].mp == clist[0].fmp) {
					printf("\n  ����� �̹� ������ �������ֽ��ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���.\n");
					if (_getch())
						continue;
				}
				else if (clist[0].fmp <= clist[0].mp + clist[cnum].skill[snum].add_mp) {
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[0].mp - clist[0].mp);
					clist[0].mp = clist[0].fmp;
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
				else if (clist[0].mp > 0 && clist[0].fmp > clist[0].mp + clist[cnum].skill[snum].add_mp) {
					clist[0].mp += clist[cnum].skill[snum].add_mp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[cnum].skill[snum].add_mp);
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
			}
		}
		if (a == '2') {
			if (clist[1].condition == 1) {					//�׾��µ� ȸ���Ϸ��� ���
				printf("\n  �ش� ĳ���ʹ� �̹� �׾����ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���. \n");
				if (_getch())
					continue;
			}
			if (clist[1].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
				if (clist[1].mp == clist[1].fmp) {
					printf("\n  ����� �̹� ������ �������ֽ��ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���.\n");
					if (_getch())
						continue;
				}
				else if (clist[1].fmp < clist[1].mp + clist[cnum].skill[snum].add_mp) {
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[0].mp - clist[0].mp);
					clist[1].mp = clist[1].fmp;
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
				else {
					clist[1].mp += clist[cnum].skill[snum].add_mp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[cnum].skill[snum].add_mp);
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
			}
		}
		if (a == '3') {
			if (clist[2].condition == 1) {					//�׾��µ� ȸ���Ϸ��� ���
				printf("\n  �ش� ĳ���ʹ� �̹� �׾����ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���. \n");
				if (_getch())
					continue;
			}
			if (clist[2].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
				if (clist[2].mp == clist[2].fmp) {
					printf("\n  ����� �̹� ������ �������ֽ��ϴ�. �ٸ� ĳ���͸� �����Ϸ��� �ƹ�Ű�� �����ּ���.\n");
					if (_getch())
						continue;
				}
				else if (clist[2].fmp < clist[2].mp + clist[cnum].skill[snum].add_mp) {
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[2].mp - clist[2].mp);
					clist[2].mp = clist[2].fmp;
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
				else {
					clist[2].mp += clist[cnum].skill[snum].add_mp;
					clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
					printf("\n  ��                                                                                                                            ��\n");
					printf("  ��  ������ ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[cnum].skill[snum].add_mp);
					printf("  ��                                                                                                                            ��\n");
					printf("  �����������������������������������������������������������������\n");
					printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
					clist[cnum].turn = 1;
					if (_getch())
						break;
				}
			}
		}
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
		printf("  �� %-4s�� %-20s ��ų!!                         = ������ ĳ������ ��ų�Դϴ�.                                   ��\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                  ���� ���� mp                                                              ��\n");
		printf("  ��  %s                                               %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[0].name, clist[0].mp, clist[cnum].skill[snum].name, clist[0].name);
		printf("  ��  %s                                               %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[1].name, clist[1].mp, clist[cnum].skill[snum].name, clist[1].name);
		printf("  ��  %s                                               %3d    = %11s��ų�� %2s�� ȸ���մϴ�.                       ��\n", clist[2].name, clist[2].mp, clist[cnum].skill[snum].name, clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ �Դϴ�.  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                     ��\n");
		printf("  ��                 �ڷΰ��� �����ø� 'b'�� �����ּ���.                                                                        ��");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		else {
			if (clist[0].mp == clist[0].fmp && clist[1].mp == clist[1].fmp && clist[2].mp == clist[2].fmp) {
				printf("\n  ��                                                                                                                            ��\n");
				printf("  ��  ��� ĳ������ ü���� �����մϴ�!!                                                                                         ��\n");
				printf("  ��  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                                    ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
				if (_getch())
					continue;
			}

			printf("\n  ��                                                                                                                            ��\n");
			clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
			for (int i = 0; i < 3; i++) {
				if (clist[i].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
					if (clist[i].fmp <= clist[i].mp + clist[cnum].skill[snum].add_mp) {
						printf("  ��  %s�� ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[i].name, clist[i].fmp - clist[i].mp);
						clist[i].mp = clist[i].fmp;
					}
					else {
						clist[i].mp += clist[cnum].skill[snum].add_mp;
						printf("  ��  %s�� ������ %3d ȸ���Ǿ����ϴ�.                                                                                         ��\n", clist[i].name, clist[cnum].skill[snum].add_mp);
					}
				}
			}
			printf("  ��                                                                                                                            ��\n");
			printf("  �����������������������������������������������������������������\n");
			clist[cnum].turn = 1;
			printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
			if (_getch())
				break;
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
		printf("  �� %-4s�� %-20s ��ų!!                            = ������ ĳ������ ��ų�Դϴ�.                                ��\n", clist[cnum].name, clist[cnum].skill[snum].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                 ���� ���� hp      ���� ���� mp                                                             ��\n");
		printf("  ��  %s                             %3d               %3d      = %18s��ų�� %2s�� ȸ���մϴ�.                 ��\n", clist[0].name, clist[0].hp, clist[0].mp, clist[cnum].skill[snum].name, clist[0].name);
		printf("  ��  %s                             %3d               %3d      = %18s��ų�� %2s�� ȸ���մϴ�.                 ��\n", clist[1].name, clist[1].hp, clist[1].mp, clist[cnum].skill[snum].name, clist[1].name);
		printf("  ��  %s                             %3d               %3d      = %18s��ų�� %2s�� ȸ���մϴ�.                 ��\n", clist[2].name, clist[2].hp, clist[2].mp, clist[cnum].skill[snum].name, clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �� ������ �Դϴ�.  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                     ��\n");
		printf("  ��                 �ڷΰ��� �����ø� 'b'�� �����ּ���.                                                                        ��");
		print_line();
		a = _getch();
		if (a == 'b' || a == 'B')
			break;
		else {
			if (clist[0].mp == clist[0].fmp && clist[1].mp == clist[1].fmp && clist[2].mp == clist[2].fmp && clist[0].hp == clist[0].fhp && clist[1].hp == clist[1].fhp && clist[2].hp == clist[2].fhp) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��  ��� ĳ������ ü�°� ������ �����մϴ�!!                                                                                  ��\n");
				printf("  ��  ��� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.                                                                                    ��\n");
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				if (_getch())
					continue;
			}
			else {
				printf("\n  ��                                                                                                                            ��\n");
				clist[cnum].mp -= clist[cnum].skill[snum].diff_mp;
				for (int i = 0; i < 3; i++) {
					if (clist[i].condition == 0) {					//����ִµ� ȸ���Ϸ��� ���
						if (clist[i].fhp <= clist[i].hp + clist[cnum].skill[snum].add_hp) {
							printf("  ��  %s�� ü���� %3d ", clist[i].name, clist[i].fhp - clist[i].hp);
							clist[i].hp = clist[i].fhp;
						}
						else {
							clist[i].hp += clist[cnum].skill[snum].add_hp;
							printf("  ��  %s�� ü���� %3d ", clist[i].name, clist[cnum].skill[snum].add_hp);
						}
						if (clist[i].fmp <= clist[i].mp + clist[cnum].skill[snum].add_hp) {
							printf("������ %3d ȸ���Ǿ����ϴ�.                                                                              ��\n", clist[i].fmp - clist[i].mp);
							clist[i].mp = clist[i].fmp;
						}
						else {
							clist[i].mp += clist[cnum].skill[snum].add_mp;
							printf("������ %3d ȸ���Ǿ����ϴ�.                                                                              ��\n", clist[cnum].skill[snum].add_mp);
						}
					}
					printf("  ��                                                                                                                            ��\n");
				}
				printf("  ��                                                                                                                            ��\n");
				printf("  �����������������������������������������������������������������\n");
				clist[cnum].turn = 1;
				printf("\n  ��� �Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
				if (_getch())
					break;
			}
		}
	}
}