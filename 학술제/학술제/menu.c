// made by ������

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"combat.h"
#include"map.h"
#include"exp.h"

void town() {
	extern void choice_stage();
	clist[0].hp = clist[0].fhp;
	clist[1].hp = clist[1].fhp;
	clist[2].hp = clist[2].fhp;
	clist[0].mp = clist[0].fmp;
	clist[1].mp = clist[1].fmp;
	clist[2].mp = clist[2].fmp;
	clist[0].condition = 0;
	clist[1].condition = 0;
	clist[2].condition = 0;
	clist[1].armor = 0;
	while (1) {
		char a;
		statm_check();
		statp_check();
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n  ������ �����Ͻ÷��� b��ư�� �����ּ���.");
		check_exp();
		a = (_getch());
		if (a == '1') 
			item_store_choice1();
		if (a == '2')
			skill_choice();
		if (a == '3')
			town_menu();
		if (a == '4')
			choice_stage();
		if (a == 'b' || a == 'B') {
			printf("\n\n      ������ �����Ͻðڽ��ϱ�?\n\n      �� ������ ���� ����� �����ϴ�.\n\n      �ٽ� �����ϸ� ���ѷα׺��� �����մϴ�.\n\n      (Y or N)");
			a = (_getch());
			if (a == 'y' || a == 'Y')
				exit(1);
			if (a == 'n' || a == 'N')
				continue;
		}
	}
}

void dun_menu() {
	while (1) {
		char a;
		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    1. ������ ���                                                                                                          ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    2. ĳ���� ���� ����                                                                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    3. ���� ���� ����                                                                                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��    4. ���ư���                                                                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ���ϴ� �޴��� �������ּ���.\n");
		a = (_getch());
		if (a == '1')
			dun_inventory();
		if (a == '2')
			dun_inf_cha();
		if (a == '3')
			dun_inf_mon();
		if (a == '4' || a == 'b' || a == 'B')
			break;
	}
}

void town_menu() {
	while (1) {
		char a;
		statm_check();
		statp_check();
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
		printf("  ���ϴ� �޴��� �������ּ���.\n  �ڷΰ���� b�� �����ּ���\n");
		a = (_getch());
		if (a == '1')
			town_inf_cha();
		if (a == '2')
			town_inventory0();
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inventory0() {
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
		printf("  �����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1')
			town_inventory1();
		if (a == '2')
			town_inventory2();
		if (a == '3')
			town_inventory3();
		if (a == '4')
			town_inventory4();
		if (a == '5')
			town_inventory5();
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inventory1() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());

		if (a == '1') {
			if (ilist[n[0] + 10].index != 0) {
				equip1(0, n[0] + 10);
			}
			else if (1 == index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1] + 10].index != 0) {
				equip1(0, n[1] + 10);
			}
			else if (2 == index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2] + 10].index != 0) {
				equip1(0, n[2] + 10);
			}
			else if (3 == index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3] + 10].index != 0) {
				equip1(0, n[3] + 10);
			}
			else if (4 == (char)index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4] + 10].index != 0) {
				equip1(0, n[4] + 10);
			}
			else if (5 == index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5] + 10].index != 0) {
				equip1(0, n[5] + 10);
			}
			else if (6 == index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6] + 10].index != 0) {
				equip1(0, n[6] + 10);
			}
			else if (7 == index) {
				equip1(0, 40);
			}
			else {
				printf("\n\n  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inventory2() {
	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i + 20].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                              �ɷ�ġ1                       �ɷ�ġ2                     ���� ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 20].ea > 0) {
				printf("  ��   %d. %20s                 �ʱ��(����) : %2d             hp ���� : %3d                   %2d ��            ��\n", index, ilist[i + 20].name, ilist[i + 20].add_noteship, ilist[i + 20].add_hp, ilist[i + 20].ea);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i + 20].index = index;
				index++;
			}
		}
		printf("  ��   %d. ��� ����                                                                                                             ��\n", index);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());

		if (a == '1') {
			if (ilist[n[0] + 20].index != 0) {
				equip2(1, n[0] + 20);
			}
			else if (1 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1] + 20].index != 0) {
				equip2(1, n[1] + 20);
			}
			else if (2 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2] + 20].index != 0) {
				equip2(1, n[2] + 20);
			}
			else if (3 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3] + 20].index != 0) {
				equip2(1, n[3] + 20);
			}
			else if (4 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4] + 20].index != 0) {
				equip2(1, n[4] + 20);
			}
			else if (5 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5] + 20].index != 0) {
				equip2(1, n[5] + 20);
			}
			else if (6 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6] + 20].index != 0) {
				equip2(1, n[6] + 20);
			}
			else if (7 == index) {
				equip2(1, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inventory3() {
	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i + 30].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                              �ɷ�ġ1                       �ɷ�ġ2                     ���� ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 30].ea > 0) {
				printf("  ��   %d. %20s                     ��(����) : %2d               mp ���� : %3d                     %2d ��          ��\n", index, ilist[i + 30].name, ilist[i + 30].add_wealth, ilist[i + 30].add_mp, ilist[i + 30].ea);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i + 30].index = index;
				index++;
			}
		}
		printf("  ��   %d. ��� ����                                                                                                             ��\n", index);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());

		if (a == '1') {
			if (ilist[n[0] + 30].index != 0) {
				equip3(2, n[0] + 30);
			}
			else if (1 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1] + 30].index != 0) {
				equip3(2, n[1] + 30);
			}
			else if (2 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2] + 30].index != 0) {
				equip3(2, n[2] + 30);
			}
			else if (3 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3] + 30].index != 0) {
				equip3(2, n[3] + 30);
			}
			else if (4 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4] + 30].index != 0) {
				equip3(2, n[4] + 30);
			}
			else if (5 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5] + 30].index != 0) {
				equip3(2, n[5] + 30);
			}
			else if (6 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6] + 30].index != 0) {
				equip3(2, n[6] + 30);
			}
			else if (7 == index) {
				equip3(2, 40);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inventory4() {
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
				printf("  ��   %d. %20s                    hp ȸ�� : %2d                  mp ȸ�� : %2d          %2d ��      %2d ���        ��\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea, ilist[i].price / 10 * 5);
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
		printf("\n  ���� �ȿ����� �Һ��� �������� ����� �� �����ϴ�.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inventory5() {
	while (1) {
		char a;
		int n[40] = { 0 };
		int index = 1;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 40; i++) {
			if (ilist[i].ea > 0) {
				if (i < 10) {
					printf("  ��  %2d. %20s                   hp ȸ�� : %3d                         mp ȸ�� : %3d         ���� ���� : %3d    ��\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea);
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��\n");
					n[i] = i;
					index++;
				}
				if (i >= 10 && i < 20) {
					printf("  ��  %2d. %20s                   ������(���ݷ�) : %2d                                         ���� ���� : %3d    ��\n", index, ilist[i].name, ilist[i].add_readership, ilist[i].ea);
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��\n");
					n[i] = i;
					index++;
				}
				if (i >= 20 && i < 30) {
					printf("  ��  %2d. %20s                   �ʱ��(����) : %2d                   hp ���� : %3d         ���� ���� : %3d    ��\n", index, ilist[i].name, ilist[i].add_noteship, ilist[i].add_hp, ilist[i].ea);
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��\n");
					n[i] = i;
					index++;
				}
				if (i >= 30 && i < 40) {
					printf("  ��  %2d. %20s                     ��  (����) : %2d                     mp ���� : %3d         ���� ���� : %3d    ��\n", index, ilist[i].name, ilist[i].add_wealth, ilist[i].add_mp, ilist[i].ea);
					printf("  ��                                                                                                                            ��\n");
					printf("  ��                                                                                                                            ��\n");
					n[i] = i;
					index++;
				}
			}

		}
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  �� ȭ�鿡���� ������ ���� ��Ȳ�� Ȯ�θ� �� �� �ֽ��ϴ�.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}
}

void equip1(int cnum, int inum) {
	while (1) {
		char a;
		int b;
		system("cls");
		if (inum != 40) {
			b = ilist[inum].ea;
			if (clist[0].item[0].num == ilist[inum].num) {
				b--;
			}
			if (clist[0].item[1].num == ilist[inum].num) {
				b--;
			}
		}
		if (inum == 40)
			b = 5000;

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %5s �� ���� �������� ���                                                                                           ��\n", clist[0].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                           �ɷ�ġ1                                                                          ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[0].item[0].add_readership > 0) {
			printf("  ��      1. %20s        ������(���ݷ�) : %2d                                                                    ��\n", clist[0].item[0].name, clist[0].item[0].add_readership);
		}
		else {
			printf("  ��      1. ��� ����                                                                                                          ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[0].item[1].add_readership > 0) {
			printf("  ��      2. %20s        ������(���ݷ�) : %2d                                                                    ��\n", clist[0].item[1].name, clist[0].item[1].add_readership);
		}
		else {
			printf("  ��      2. ��� ����                                                                                                          ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (b == 5000) {
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��� ����                                                                                                             ��\n");
		}
		else {
			printf("  ��      ���õ� ������ ���                                                                               ���� ����            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      %20s            ������(���ݷ�) : %2d                                                    %2d ��          ��\n", ilist[inum].name, ilist[inum].add_readership, b);
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��ü�ϰ� ���� ������ �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1') {
			if (b == 5000) {
				clist[0].item[0] = emptylist[0];
			}
			else if (b > 0) {
				statm_check();
				clist[0].item[0] = ilist[inum];
				statp_check();
			}
			else {
				printf("\n\n  ���� %s ��(��) �����ϴ�.\n", ilist[inum].name);
				if (_getch())
					break;
			}
		}
		if (a == '2') {
			if (b == 5000) {
				clist[0].item[1] = emptylist[0];
			}
			else if (b > 0) {
				statm_check();
				clist[0].item[1] = ilist[inum];
				statp_check();
			}
			else {
				printf("\n\n  ���� %s ��(��) �����ϴ�.\n", ilist[inum].name);
				if (_getch())
					break;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void equip2(int cnum, int inum) {
	while (1) {
		char a;
		int b;
		system("cls");
		if (inum != 40) {
			b = ilist[inum].ea;
			if (clist[1].item[0].num == ilist[inum].num) {
				b--;
			}
			if (clist[1].item[1].num == ilist[inum].num) {
				b--;
			}
		}
		if (inum == 40)
			b = 5000;

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %5s �� ���� �������� ���                                                                                           ��\n", clist[1].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                           �ɷ�ġ1                      �ɷ�ġ2                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[1].item[0].add_noteship > 0) {
			printf("  ��      1. %20s        �ʱ��(����) : %2d              hp ���� : %3d                                         ��\n", clist[1].item[0].name, clist[1].item[0].add_noteship, clist[1].item[0].add_hp);
		}
		else {
			printf("  ��      1. ��� ����                                                                                                          ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[1].item[1].add_noteship > 0) {
			printf("  ��      2. %20s        ������(���ݷ�) : %2d              hp ���� : %3d                                         ��\n", clist[1].item[1].name, clist[1].item[1].add_noteship, clist[1].item[1].add_hp);
		}
		else {
			printf("  ��      2. ��� ����                                                                                                          ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (b == 5000) {
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��� ����                                                                                                             ��\n");
		}
		else {
			printf("  ��      ���õ� ������ ���                                                                               ���� ����            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      %20s            ������(���ݷ�) : %2d              hp ���� : %3d                      %2d ��             ��\n", ilist[inum].name, ilist[inum].add_noteship, ilist[inum].add_hp, b);
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��ü�ϰ� ���� ������ �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1') {
			if (b == 5000) {
				clist[1].item[0] = emptylist[0];
			}
			else if (b > 0) {
				statm_check();
				clist[1].item[0] = ilist[inum];
				statp_check();
			}
			else {
				printf("\n\n  ���� %s ��(��) �����ϴ�.\n", ilist[inum].name);
				if (_getch())
					break;
			}
		}
		if (a == '2') {
			if (b == 5000) {
				clist[1].item[1] = emptylist[0];
			}
			else if (b > 0) {
				statm_check();
				clist[1].item[1] = ilist[inum];
				statp_check();
			}
			else {
				printf("\n\n  ���� %s ��(��) �����ϴ�.\n", ilist[inum].name);
				if (_getch())
					break;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void equip3(int cnum, int inum) {
	while (1) {
		char a;
		int b;
		system("cls");
		if (inum != 40) {
			b = ilist[inum].ea;
			if (clist[2].item[0].num == ilist[inum].num) {
				b--;
			}
			if (clist[2].item[1].num == ilist[inum].num) {
				b--;
			}
		}
		if (inum == 40)
			b = 5000;

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %5s �� ���� �������� ���                                                                                           ��\n", clist[2].name);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                           �ɷ�ġ1                      �ɷ�ġ2                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].item[0].add_wealth > 0) {
			printf("  ��      1. %20s             ��(����) : %2d               mp ���� : %3d                                         ��\n", clist[2].item[0].name, clist[2].item[0].add_wealth, clist[2].item[0].add_mp);
		}
		else {
			printf("  ��      1. ��� ����                                                                                                          ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].item[1].add_wealth > 0) {
			printf("  ��      2. %20s             ��(����) : %2d               mp ���� : %3d                                         ��\n", clist[2].item[1].name, clist[2].item[1].add_wealth, clist[2].item[1].add_mp);
		}
		else {
			printf("  ��      2. ��� ����                                                                                                          ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (b == 5000) {
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��� ����                                                                                                             ��\n");
		}
		else {
			printf("  ��      ���õ� ������ ���                                                                               ���� ����            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      %20s                 ��(����) : %2d               mp ���� : %3d                      %2d ��             ��\n", ilist[inum].name, ilist[inum].add_wealth, ilist[inum].add_mp, b);
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��ü�ϰ� ���� ������ �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1') {
			if (b == 5000) {
				clist[2].item[0] = emptylist[0];
			}
			else if (b > 0) {
				statm_check();
				clist[2].item[0] = ilist[inum];
				statp_check();
			}
			else {
				printf("\n\n  ���� %s ��(��) �����ϴ�.\n", ilist[inum].name);
				if (_getch())
					break;
			}
		}
		if (a == '2') {
			if (b == 5000) {
				clist[2].item[1] = emptylist[0];
			}
			else if (b > 0) {
				statm_check();
				clist[2].item[1] = ilist[inum];
				statp_check();
			}
			else {
				printf("\n\n  ���� %s ��(��) �����ϴ�.\n", ilist[inum].name);
				if (_getch())
					break;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inf_cha() {
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
		printf("  ���ϴ� �޴��� �������ּ���.\n  �ڷΰ���� b�� �����ּ���\n");
		a = (_getch());
		if (a == '1')
			town_inf_cha_1();
		if (a == '2')
			town_inf_cha_2();
		if (a == '3')
			town_inf_cha_3();
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inf_cha_1() {
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
		printf("  ��              1. ������       :       %3d                   ��                   ���ݷ�       :       %3d                   ��\n", clist[0].readership, clist[0].att);
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
		printf("  ��        ��                                                                                                        ��        ��\n");

		printf("  ��        ��           10%%       20%%       30%%       40%%       50%%       60%%       70%%       80%%       90%%          ��        ��\n");
		printf("  ��        ��  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[0].persent)
				printf("��");
			else
				printf("��");
		}
		printf("  ��        ��\n");
		printf("  ��        ��                                                ����ġ ��                                               ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  �ø��� ���� ������ �������ּ���.\n");
		a = (_getch());
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
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inf_cha_2() {
	while (1) {
		char a;
		statm_check();
		statp_check();
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                        �������� ������                       ��\n");
		printf("  ��                             ��                       ��    ��                                                              ��\n");
		printf("  ��             ��              ��   ���������    ��    ��         �̸�                    �ɷ�ġ1          �ɷ�ġ2     ��\n");
		printf("  ��           ����            ��               ���    ��    ��                                                              ��\n");
		printf("  ��         ���  ���          ��             ���      ��    ��                                                              ��\n");
		if (clist[1].item[0].num == 0) {
			printf("  ��       ���      ���    ����           ���        ��    ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��       ���      ���    ����           ���        ��    ��  %20s         �ʱ�� + %2d       hp + %3d     ��\n", clist[1].item[0].name, clist[1].item[0].add_noteship, clist[1].item[0].add_hp);
		}
		printf("  ��     ���          ���      ��         ���          ��    ��                                                              ��\n");
		printf("  ��   ���              ���    ��       ���            ��    ��                                                              ��\n");
		printf("  �� ���                  ���  ��     ���              ��    ��                                                              ��\n");
		if (clist[1].item[1].num == 0) {
			printf("  ��                             ��                       ��    ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��                             ��                       ��    ��  %20s         �ʱ�� + %2d       hp + %3d     ��\n", clist[1].item[1].name, clist[1].item[1].add_noteship, clist[1].item[1].add_hp);
		}
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              1. ������       :       %3d                   ��                   ���ݷ�       :       %3d                   ��\n", clist[1].readership, clist[1].att);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                   ����       :       %3d                   ��\n", clist[1].def);
		printf("  ��              2. �ʱ��       :       %3d                   ��                                                              ��\n", clist[1].noteship);
		printf("  ��                                                            ��                   �� hp        :       %3d                   ��\n", clist[1].fhp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              3.   ��         :       %3d                   ��                   �� mp        :       %3d                   ��\n", clist[1].wealth, clist[1].fmp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              ���� ����       :       %2d                    ��                            ���� ��� : %5d                 ��\n", clist[1].spare_stat, gold);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                               ����  :  %2d           ����ġ  :  %4d / %4d    ( %2d %% )                                     ��\n", clist[1].level, clist[1].expe, fexp[clist[1].level], clist[1].persent);
		printf("  ��                    ���      ���      ���      ���      ���      ���      ���      ���      ���                    ��\n");
		printf("  ��        �������������������������������������������������������        ��\n");
		printf("  ��        ��           10%%       20%%       30%%       40%%       50%%       60%%       70%%       80%%       90%%          ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  ��        ��  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[1].persent)
				printf("��");
			else
				printf("��");
		}
		printf("  ��        ��\n");
		printf("  ��        ��                                                ����ġ ��                                               ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  �ø��� ���� ������ �������ּ���.\n");
		a = (_getch());
		if (clist[1].spare_stat > 0) {
			if (a == '1') {
				clist[1].spare_stat--;
				clist[1].readership++;
				continue;
			}
			if (a == '2') {
				clist[1].spare_stat--;
				clist[1].noteship++;
				continue;
			}
			if (a == '3') {
				clist[1].spare_stat--;
				clist[1].wealth++;
				continue;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void town_inf_cha_3() {
	while (1) {
		char a;
		statm_check();
		statp_check();
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                              ��                ��          ��                        �������� ������                       ��\n");
		printf("  ��    ������������    ��  �������  ��          ��                                                              ��\n");
		printf("  ��                    ���      ��            ��  ��          ��         �̸�                    �ɷ�ġ1          �ɷ�ġ2     ��\n");
		printf("  ��                  ���        ��            ��  ����      ��                                                              ��\n");
		printf("  ��                ���          ��            ��  ��          ��                                                              ��\n");
		if (clist[2].item[0].num == 0) {
			printf("  ��              ����          ��          ��    ��          ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��              ����          ��          ��    ��          ��  %20s           ��   + %2d       mp + %3d     ��\n", clist[2].item[0].name, clist[2].item[0].add_wealth, clist[2].item[0].add_mp);
		}
		printf("  ��            ���  ���        ��        ��      ��          ��                                                              ��\n");
		printf("  ��          ���      ���      ��    ��            ��        ��                                                              ��\n");
		printf("  ��        ���          ���    ��    ���������        ��                                                              ��\n");
		if (clist[2].item[1].num == 0) {


			printf("  ��      ���              ���  ��    ��            ��        ��    ���� ��� ��������                                        ��\n");
		}
		else {
			printf("  ��      ���              ���  ��    ��            ��        ��  %20s           ��   + %2d       mp + %3d     ��\n", clist[2].item[1].name, clist[2].item[1].add_wealth, clist[2].item[1].add_mp);
		}
		printf("  ��                              ��    ���������        ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              1. ������       :       %3d                   ��                   ���ݷ�       :       %3d                   ��\n", clist[2].readership, clist[2].att);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                   ����       :       %3d                   ��\n", clist[2].def);
		printf("  ��              2. �ʱ��       :       %3d                   ��                                                              ��\n", clist[2].noteship);
		printf("  ��                                                            ��                   �� hp        :       %3d                   ��\n", clist[2].fhp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              3.   ��         :       %3d                   ��                   �� mp        :       %3d                   ��\n", clist[2].wealth, clist[2].fmp);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��                                                            ��                                                              ��\n");
		printf("  ��              ���� ����       :       %2d                    ��                            ���� ��� : %5d                 ��\n", clist[2].spare_stat, gold);
		printf("  ��                                                            ��                                                              ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                               ����  :  %2d           ����ġ  :  %4d / %4d    ( %2d %% )                                     ��\n", clist[2].level, clist[2].expe, fexp[clist[2].level], clist[2].persent);
		printf("  ��                    ���      ���      ���      ���      ���      ���      ���      ���      ���                    ��\n");
		printf("  ��        �������������������������������������������������������        ��\n");
		printf("  ��        ��           10%%       20%%       30%%       40%%       50%%       60%%       70%%       80%%       90%%          ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  ��        ��  ");
		for (int i = 0; i < 50; i++) {
			if (i * 2 < clist[2].persent)
				printf("��");
			else
				printf("��");
		}
		printf("  ��        ��\n");
		printf("  ��        ��                                                ����ġ ��                                               ��        ��\n");
		printf("  ��        ��                                                                                                        ��        ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  �ø��� ���� ������ �������ּ���.\n");
		a = (_getch());
		if (clist[2].spare_stat > 0) {
			if (a == '1') {
				clist[2].spare_stat--;
				clist[2].readership++;
			}
			if (a == '2') {
				clist[2].spare_stat--;
				clist[2].noteship++;
			}
			if (a == '3') {
				clist[2].spare_stat--;
				clist[2].wealth++;
			}
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void dun_inventory() {
	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i].index = 0;
		}
		int index = 1;
		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i].ea > 0) {
				printf("  ��  %d. %20s                          hp ȸ�� : %2d        mp ȸ�� : %2d        ���� ���� : %2d                   ��\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea);
				n[index - 1] = i;
				ilist[i].index = index;
				index++;
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� �Һ��� �����۸� ����� �����մϴ�.\n");
		a = (_getch());

		if (a == '1') {
			if (ilist[n[0]].ea != 0)
				use_item(ilist[n[0]].index);
			else
				continue;
		}
		if (a == '2') {
			if (ilist[n[1]].ea != 0)
				use_item(ilist[n[1]].index);
			else
				continue;
		}
		if (a == '3') {
			if (ilist[n[2]].ea != 0)
				use_item(ilist[n[2]].index);
			else
				continue;
		}
		if (a == '4') {
			if (ilist[n[3]].ea != 0)
				use_item(ilist[n[3]].index);
			else
				continue;
		}
		if (a == '5') {
			if (ilist[n[4]].ea != 0)
				use_item(ilist[n[4]].index);
			else
				continue;
		}
		if (a == '6') {
			if (ilist[n[5]].ea != 0)
				use_item(ilist[n[5]].index);
			else
				continue;
		}
		if (a == '7') {
			if (ilist[n[6]].ea != 0)
				use_item(ilist[n[6]].index);
			else
				continue;
		}
		if (a == '8') {
			if (ilist[n[7]].ea != 0)
				use_item(ilist[n[7]].index);
			else
				continue;
		}
		if (a == '9') {
			if (ilist[n[8]].ea != 0)
				use_item(ilist[n[8]].index);
			else
				continue;
		}
		if (a == '0') {
			if (ilist[n[9]].ea != 0)
				use_item(ilist[n[9]].index);
			else
				continue;
		}

		if (a == 'b' || a == 'B')
			break;
	}
}

void dun_inf_cha() {
	check_exp();
	while (1) {
		char a;
		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                           ��  �� ���������������������������                                      ��\n");
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��          ����                   ����ġ         ��                                      ��\n");
		printf("  ��                                  ��           %2d                     %2d%%           ��                                      ��\n", clist[0].level, clist[0].persent);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��      ���ݷ� : %3d            ���� : %3d      ��                                      ��\n", clist[0].att + clist[0].readership, clist[0].def + clist[0].noteship);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��           hp                       mp          ��                                      ��\n");
		printf("  ��                                  ��       %3d / %3d                %3d / %3d       ��                                      ��\n", clist[0].hp, clist[0].fhp, clist[0].mp, clist[0].fmp);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ���������������������������                                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                           ��  �� ���������������������������                                      ��\n");
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��          ����                   ����ġ         ��                                      ��\n");
		printf("  ��                                  ��           %2d                     %2d%%           ��                                      ��\n", clist[1].level, clist[1].persent);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��      ���ݷ� : %3d            ���� : %3d      ��                                      ��\n", clist[1].att + clist[1].readership, clist[1].def + clist[1].noteship);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��           hp                       mp          ��                                      ��\n");
		printf("  ��                                  ��       %3d / %3d                %3d / %3d       ��                                      ��\n", clist[1].hp, clist[1].fhp, clist[1].mp, clist[1].fmp);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ���������������������������                                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                           ��  �� ���������������������������                                      ��\n");
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��          ����                   ����ġ         ��                                      ��\n");
		printf("  ��                                  ��           %2d                     %2d%%           ��                                      ��\n", clist[2].level, clist[2].persent);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��      ���ݷ� : %3d            ���� : %3d      ��                                      ��\n", clist[2].att + clist[2].readership, clist[2].def + clist[2].noteship);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��           hp                       mp          ��                                      ��\n");
		printf("  ��                                  ��       %3d / %3d                %3d / %3d       ��                                      ��\n", clist[2].hp, clist[2].fhp, clist[2].mp, clist[2].fmp);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ���������������������������                                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.\n");
		a = (_getch());
		if (a == 'b'||a=='B')
			break;
	}
}

void dun_inf_mon() {
	while (1) {
		char a;
		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            %20s  ���������������������������                                      ��\n", mlist[0].name);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��      ���ݷ� : %3d            ���� : %3d      ��                                      ��\n", mlist[0].att, mlist[0].def);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��           hp                                   ��                                      ��\n");
		printf("  ��                                  ��       %3d / %3d                                ��                                      ��\n", mlist[0].hp, mlist[0].fhp);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ���������������������������                                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            %20s  ���������������������������                                      ��\n", mlist[1].name);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��      ���ݷ� : %3d            ���� : %3d      ��                                      ��\n", mlist[1].att, mlist[1].def);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��           hp                                   ��                                      ��\n");
		printf("  ��                                  ��       %3d / %3d                                ��                                      ��\n", mlist[1].hp, mlist[1].fhp);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ���������������������������                                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��            %20s  ���������������������������                                      ��\n", mlist[2].name);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��      ���ݷ� : %3d            ���� : %3d      ��                                      ��\n", mlist[2].att, mlist[2].def);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ��           hp                                   ��                                      ��\n");
		printf("  ��                                  ��       %3d / %3d                                ��                                      ��\n", mlist[2].hp, mlist[2].fhp);
		printf("  ��                                  ��                                                ��                                      ��\n");
		printf("  ��                                  ���������������������������                                      ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��� �Ͻ÷��� b�� �����ּ���.\n");
		a = (_getch());
		if (a == 'b' || a == 'B')
			break;
	}
}

void use_item(int index) {
	while (1) {
		int check = 100;
		for (int i = 0; i < 10; i++) {
			if (ilist[i].index == index) {
				check = i;
				break;
			}
		}
		char a;
		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[0].hp > 0)
			printf("  ��  %s                                                       ��                                                             ��\n", clist[0].name);
		if (clist[0].hp <= 0)
			printf("  ��                                                             ��                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[1].hp > 0)
			printf("  ��  %s                                                       ��                                                             ��\n", clist[1].name);
		if (clist[1].hp <= 0)
			printf("  ��                                                             ��                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].hp > 0)
			printf("  ��  %s                                                       ��                                                             ��\n", clist[2].name);
		if (clist[2].hp <= 0)
			printf("  ��                                                             ��                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[0].hp > 0)
			printf("  ��  1. %s�� ü�� : %3d / %3d    ���� : %3d / %3d             ��                                                             ��\n", clist[0].name, clist[0].hp, clist[0].fhp, clist[0].mp, clist[0].fmp);
		if (clist[0].hp <= 0)
			printf("  ��                                                             ��                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[1].hp > 0)
			printf("  ��  2. %s�� ü�� : %3d / %3d    ���� : %3d / %3d             ��                                                             ��\n", clist[1].name, clist[1].hp, clist[1].fhp, clist[1].mp, clist[1].fmp);
		if (clist[1].hp <= 0)
			printf("  ��                                                             ��                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[2].hp > 0)
			printf("  ��  3. %s�� ü�� : %3d / %3d    ���� : %3d / %3d             ��                                                             ��\n", clist[2].name, clist[2].hp, clist[2].fhp, clist[2].mp, clist[2].fmp);
		if (clist[2].hp <= 0)
			printf("  ��                                                             ��                                                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");

		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��  ������ �̸� : %20s             hp : %2d   mp : %2d   ���� ���� : %2d                                         ��\n", ilist[check].name, ilist[check].add_hp, ilist[check].add_mp, ilist[check].ea);
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ����� ĳ���͸� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� �Һ��� �����۸� ����� �����մϴ�.\n");
		a = (_getch());
		if (a == '1') {
			if (clist[0].hp <= 0)
				continue;
			if (check_hpmp(0, check) == 1)
				continue;
			else
				effect_item(0, check);
		}
		if (a == '2') {
			if (clist[1].hp <= 0)
				continue;
			if (check_hpmp(1, check) == 1)
				continue;
			else
				effect_item(1, check);
		}
		if (a == '3') {
			if (clist[2].hp <= 0)
				continue;
			if (check_hpmp(2, check) == 1)
				continue;
			else
				effect_item(2, check);
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

void effect_item(int cnum, int inum) {
	if (ilist[inum].add_hp > 0 && ilist[inum].add_mp == 0 && ilist[inum].ea > 0) {
		if (clist[cnum].hp + ilist[inum].add_hp >= clist[cnum].fhp)
			clist[cnum].hp = clist[cnum].fhp;
		else
			clist[cnum].hp += ilist[inum].add_hp;
		ilist[inum].ea--;
	}
	if (ilist[inum].add_hp == 0 && ilist[inum].add_mp > 0 && ilist[inum].ea > 0) {
		if (clist[cnum].mp + ilist[inum].add_mp >= clist[cnum].fmp)
			clist[cnum].mp = clist[cnum].fmp;
		else
			clist[cnum].mp += ilist[inum].add_mp;
		ilist[inum].ea--;
	}
	if (ilist[inum].add_hp > 0 && ilist[inum].add_mp > 0 && ilist[inum].ea > 0) {
		if (clist[cnum].hp + ilist[inum].add_hp >= clist[cnum].fhp)
			clist[cnum].hp = clist[cnum].fhp;
		else
			clist[cnum].hp += ilist[inum].add_hp;
		if (clist[cnum].mp + ilist[inum].add_mp >= clist[cnum].fmp)
			clist[cnum].mp = clist[cnum].fmp;
		else
			clist[cnum].mp += ilist[inum].add_mp;
		ilist[inum].ea--;
	}


}

void prologue_dun_inventory() {
	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i].index = 0;
		}
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i].ea > 0) {
				printf("  %d. %20s                   hp ȸ�� : %2d    mp ȸ�� : %2d    ���� ���� : %2d\n\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea);
				n[index - 1] = i;
				ilist[i].index = index;
				index++;
			}
		}
		printf("�������������������������������������������������������������������\n");
		printf("  ����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� �Һ��� �����۸� ����� �����մϴ�.\n");
		a = (_getch());

		if (a == '1') {
			if (ilist[n[0]].ea != 0)
				use_item(ilist[n[0]].index);
			else
				continue;
		}
		if (a == '2') {
			if (ilist[n[1]].ea != 0)
				use_item(ilist[n[1]].index);
			else
				continue;
		}
		if (a == '3') {
			if (ilist[n[2]].ea != 0)
				use_item(ilist[n[2]].index);
			else
				continue;
		}
		if (a == '4') {
			if (ilist[n[3]].ea != 0)
				use_item(ilist[n[3]].index);
			else
				continue;
		}
		if (a == '5') {
			if (ilist[n[4]].ea != 0)
				use_item(ilist[n[4]].index);
			else
				continue;
		}
		if (a == '6') {
			if (ilist[n[5]].ea != 0)
				use_item(ilist[n[5]].index);
			else
				continue;
		}
		if (a == '7') {
			if (ilist[n[6]].ea != 0)
				use_item(ilist[n[6]].index);
			else
				continue;
		}
		if (a == '8') {
			if (ilist[n[7]].ea != 0)
				use_item(ilist[n[7]].index);
			else
				continue;
		}
		if (a == '9') {
			if (ilist[n[8]].ea != 0)
				use_item(ilist[n[8]].index);
			else
				continue;
		}
		if (a == '0') {
			if (ilist[n[9]].ea != 0)
				use_item(ilist[n[9]].index);
			else
				continue;
		}
		if (a == 'b' || a == 'B')
			break;
	}
}

int check_hpmp(int cnum, int inum) {
	while (1) {
		char a;
		if (clist[cnum].hp == clist[cnum].fhp && ilist[inum].add_hp > 0) {
			printf("  %5s�� ü���� �̹� ���� ���ֽ��ϴ�.\n\n", clist[cnum].name);
			printf("����Ͻ÷��� �ƹ�Ű�� �����ּ���\n");
			if (a = _getch())
				return 1;
		}
		if (clist[cnum].mp == clist[cnum].fmp && ilist[inum].add_mp > 0) {
			printf("  %5s�� ������ �̹� ���� ���ֽ��ϴ�.\n\n", clist[cnum].name);
			printf("����Ͻ÷��� �ƹ�Ű�� �����ּ���\n");
			if (a = _getch())
				return 1;
		}
		return 0;
	}
}

void item_store_choice1() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			item_store_choice_buy();
		if (a == '2')
			item_store_choice_sell();
		if (a == 'b' || a == 'B')
			town(clist, ilist);
	}
}

void item_store_choice_buy() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			item_store_choice_buy1();
		if (a == '2')
			item_store_choice_buy2();
		if (a == '3')
			item_store_choice_buy3();
		if (a == '4')
			item_store_choice_buy0();
		if (a == 'b' || a == 'B')
			item_store_choice1();
	}
}

void item_store_choice_buy1() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                             �ɷ�ġ1                                             ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   1. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[10].name, ilist[10].add_readership, ilist[10].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   2. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[11].name, ilist[11].add_readership, ilist[11].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   3. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[12].name, ilist[12].add_readership, ilist[12].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   4. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[13].name, ilist[13].add_readership, ilist[13].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   5. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[14].name, ilist[14].add_readership, ilist[14].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   6. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[15].name, ilist[15].add_readership, ilist[15].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   7. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[16].name, ilist[16].add_readership, ilist[16].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��   8. %20s               ������(���ݷ�) : %2d                                    %3d  ���                   ��\n", ilist[17].name, ilist[17].add_readership, ilist[17].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			buy1(1);
		if (a == '2')
			buy1(2);
		if (a == '3')
			buy1(3);
		if (a == '4')
			buy1(4);
		if (a == '5')
			buy1(5);
		if (a == '6')
			buy1(6);
		if (a == '7')
			buy1(7);
		if (a == '8')
			buy1(8);
		if (a == 'b' || a == 'B')
			item_store_choice_buy();
	}
}

void item_store_choice_buy2() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                  �ɷ�ġ1                       �ɷ�ġ2                          ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     1. %20s    �ʱ��(����) : %2d                                                %3d  ���                ��\n", ilist[20].name, ilist[20].add_noteship, ilist[20].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     2. %20s    �ʱ��(����) : %2d                                                %3d  ���                ��\n", ilist[21].name, ilist[21].add_noteship, ilist[21].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     3. %20s    �ʱ��(����) : %2d                                                %3d  ���                ��\n", ilist[22].name, ilist[22].add_noteship, ilist[22].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     4. %20s    �ʱ��(����) : %2d                                                %3d  ���                ��\n", ilist[23].name, ilist[23].add_noteship, ilist[23].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     5. %20s    �ʱ��(����) : %2d              �ִ�ü�� : %3d                    %3d  ���                ��\n", ilist[24].name, ilist[24].add_noteship, ilist[24].add_hp, ilist[24].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     6. %20s    �ʱ��(����) : %2d              �ִ�ü�� : %3d                    %3d  ���                ��\n", ilist[25].name, ilist[25].add_noteship, ilist[24].add_hp, ilist[25].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     7. %20s    �ʱ��(����) : %2d              �ִ�ü�� : %3d                    %3d  ���                ��\n", ilist[26].name, ilist[26].add_noteship, ilist[24].add_hp, ilist[26].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     8. %20s    �ʱ��(����) : %2d              �ִ�ü�� : %3d                    %3d  ���                ��\n", ilist[27].name, ilist[27].add_noteship, ilist[24].add_hp, ilist[27].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			buy2(1);
		if (a == '2')
			buy2(2);
		if (a == '3')
			buy2(3);
		if (a == '4')
			buy2(4);
		if (a == '5')
			buy2(5);
		if (a == '6')
			buy2(6);
		if (a == '7')
			buy2(7);
		if (a == '8')
			buy2(8);
		if (a == 'b' || a == 'B')
			item_store_choice_buy();
	}
}

void item_store_choice_buy3() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��               �̸�                   �ɷ�ġ1                       �ɷ�ġ2                          ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     1. %20s       ��(����) : %2d                                                   %3d  ���                ��\n", ilist[30].name, ilist[30].add_wealth, ilist[20].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     2. %20s       ��(����) : %2d                                                   %3d  ���                ��\n", ilist[31].name, ilist[31].add_wealth, ilist[31].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     3. %20s       ��(����) : %2d                                                   %3d  ���                ��\n", ilist[32].name, ilist[32].add_wealth, ilist[32].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     4. %20s       ��(����) : %2d                                                   %3d  ���                ��\n", ilist[33].name, ilist[33].add_wealth, ilist[33].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     5. %20s       ��(����) : %2d                 �ִ븶�� : %3d                    %3d  ���                ��\n", ilist[34].name, ilist[34].add_wealth, ilist[34].add_mp, ilist[34].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     6. %20s       ��(����) : %2d                 �ִ븶�� : %3d                    %3d  ���                ��\n", ilist[35].name, ilist[35].add_wealth, ilist[34].add_mp, ilist[35].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     7. %20s       ��(����) : %2d                 �ִ븶�� : %3d                    %3d  ���                ��\n", ilist[36].name, ilist[36].add_wealth, ilist[34].add_mp, ilist[36].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     8. %20s       ��(����) : %2d                 �ִ븶�� : %3d                    %3d  ���                ��\n", ilist[37].name, ilist[37].add_wealth, ilist[34].add_mp, ilist[37].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			buy3(1);
		if (a == '2')
			buy3(2);
		if (a == '3')
			buy3(3);
		if (a == '4')
			buy3(4);
		if (a == '5')
			buy3(5);
		if (a == '6')
			buy3(6);
		if (a == '7')
			buy3(7);
		if (a == '8')
			buy3(8);
		if (a == 'b' || a == 'B')
			item_store_choice_buy();
	}
}

void item_store_choice_buy0() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			buy0(1);
		if (a == '2')
			buy0(2);
		if (a == '3')
			buy0(3);
		if (a == '4')
			buy0(4);
		if (a == '5')
			buy0(5);
		if (a == '6')
			buy0(6);
		if (a == '7')
			buy0(7);
		if (a == 'b' || a == 'B')
			item_store_choice_buy();
	}
}

void buy0(int inum) {
	while (1) {
		system("cls");
		char a;
		int check;

		check = inum - 1;
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= ilist[check].price) {
				gold -= ilist[check].price;
				ilist[check].ea++;
				printf("  %s ��(��) 1�� ȹ��!", ilist[check].name);
				if(_getch())
					continue;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void buy1(int inum) {
	while (1) {
		system("cls");
		char a;
		int check;

		check = inum - 1 + 10;
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1                                 ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     %20s                           ������(���ݷ�) : %2d                             %2d ��      %3d ���     ��\n", ilist[check].name, ilist[check].add_readership, ilist[check].ea, ilist[check].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ���� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= ilist[check].price) {
				gold -= ilist[check].price;
				ilist[check].ea++;
				printf("  %s ��(��) 1�� ȹ��!", ilist[check].name);	
				if (_getch())
					continue;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void buy2(int inum) {
	while (1) {
		system("cls");
		char a;
		int check;

		check = inum - 1 + 20;
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                    �ɷ�ġ1                 �ɷ�ġ2               ���� ����      ����     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     %20s                       �ʱ��(����) : %2d          hp������ : %3d          %2d ��      %3d ���    ��\n", ilist[check].name, ilist[check].add_noteship, ilist[check].add_hp, ilist[check].ea, ilist[check].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ���� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= ilist[check].price) {
				gold -= ilist[check].price;
				ilist[check].ea++;
				printf("  %s ��(��) 1�� ȹ��!", ilist[check].name);
				if (_getch())
				continue;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
					break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void buy3(int inum) {
	while (1) {
		system("cls");
		char a;
		int check;

		check = inum - 1 + 30;
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1             �ɷ�ġ2               ���� ����      ����     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��     %20s                               ��(����) : %2d        mp������ : %3d          %2d ��      %3d ���    ��\n", ilist[check].name, ilist[check].add_wealth, ilist[check].add_mp, ilist[check].ea, ilist[check].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ���� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= ilist[check].price) {
				gold -= ilist[check].price;
				ilist[check].ea++;
				printf("  %s ��(��) 1�� ȹ��!", ilist[check].name);
				if (_getch())
					continue;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void item_store_choice_sell() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			item_store_choice_sell1();
		if (a == '2')
			item_store_choice_sell2();
		if (a == '3')
			item_store_choice_sell3();
		if (a == '4')
			item_store_choice_sell0();
		if (a == 'b' || a == 'B')
			item_store_choice1();
	}
}

void item_store_choice_sell0() {
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
				printf("  ��   %d. %20s                  hp ȸ�� : %3d                  mp ȸ�� : %3d          %2d ��      %2d ���        ��\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea, ilist[i].price / 10 * 5);
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1') {
			if (ilist[n[0]].index != 0) {
				sell0(n[0]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1]].index != 0) {
				sell0(n[1]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2]].index != 0) {
				sell0(n[2]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3]].index != 0) {
				sell0(n[3]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4]].index != 0) {
				sell0(n[4]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5]].index != 0) {
				sell0(n[5]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6]].index != 0) {
				sell0(n[6]);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");

				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			item_store_choice_sell();
	}
}

void item_store_choice_sell1() {
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
		printf("  ��              �̸�                              �ɷ�ġ1                               ���� ����                ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 10].ea > 0) {
				printf("  ��   %d. %20s               ������(���ݷ�) : %3d                         %2d ��               %3d ���          ��\n", index, ilist[i + 10].name, ilist[i + 10].add_readership, ilist[i + 10].ea, ilist[i + 10].price / 10 * 5);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i + 10].index = index;
				index++;
			}
		}
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1') {
			if (ilist[n[0] + 10].index != 0) {
				sell1(n[0] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1] + 10].index != 0) {
				sell1(n[1] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2] + 10].index != 0) {
				sell1(n[2] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3] + 10].index != 0) {
				sell1(n[3] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4] + 10].index != 0) {
				sell1(n[4] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5] + 10].index != 0) {
				sell1(n[5] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6] + 10].index != 0) {
				sell1(n[6] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '8') {
			if (ilist[n[7] + 10].index != 0) {
				sell1(n[7] + 10);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			item_store_choice_sell();
	}
}

void item_store_choice_sell2() {
	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i + 20].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                              �ɷ�ġ1                               ���� ����                ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 20].ea > 0) {
				printf("  ��   %d. %20s               �ʱ��(����) : %3d                         %2d ��               %3d ���          ��\n", index, ilist[i + 20].name, ilist[i + 20].add_noteship, ilist[i + 20].ea, ilist[i + 20].price / 10 * 5);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i + 20].index = index;
				index++;
			}
		}
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1') {
			if (ilist[n[0] + 20].index != 0) {
				sell2(n[0] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1] + 20].index != 0) {
				sell2(n[1] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2] + 20].index != 0) {
				sell2(n[2] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3] + 20].index != 0) {
				sell2(n[3] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4] + 20].index != 0) {
				sell2(n[4] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5] + 20].index != 0) {
				sell2(n[5] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6] + 20].index != 0) {
				sell2(n[6] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '8') {
			if (ilist[n[7] + 20].index != 0) {
				sell2(n[7] + 20);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			item_store_choice_sell();
	}
}

void item_store_choice_sell3() {
	while (1) {
		char a;
		int n[10];
		for (int i = 0; i < 10; i++) {
			n[i] = 40;
			ilist[i + 30].index = 0;
		}
		int index = 1;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                              �ɷ�ġ1                               ���� ����                ����         ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 0; i < 10; i++) {
			if (ilist[i + 30].ea > 0) {
				printf("  ��   %d. %20s                 ��(����) : %3d                             %2d ��               %3d ���          ��\n", index, ilist[i + 30].name, ilist[i + 30].add_wealth, ilist[i + 30].ea, ilist[i + 30].price / 10 * 5);
				printf("  ��                                                                                                                            ��\n");
				printf("  ��                                                                                                                            ��\n");
				n[index - 1] = i;
				ilist[i + 30].index = index;
				index++;
			}
		}
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1') {
			if (ilist[n[0] + 30].index != 0) {
				sell3(n[0] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '2') {
			if (ilist[n[1] + 30].index != 0) {
				sell3(n[1] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '3') {
			if (ilist[n[2] + 30].index != 0) {
				sell3(n[2] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '4') {
			if (ilist[n[3] + 30].index != 0) {
				sell3(n[3] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '5') {
			if (ilist[n[4] + 30].index != 0) {
				sell3(n[4] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '6') {
			if (ilist[n[5] + 30].index != 0) {
				sell3(n[5] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '7') {
			if (ilist[n[6] + 30].index != 0) {
				sell3(n[6] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == '8') {
			if (ilist[n[7] + 30].index != 0) {
				sell3(n[7] + 30);
			}
			else {
				printf("  �������� �������� �����ϴ�!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch())
					continue;
			}
		}
		if (a == 'b' || a == 'B')
			item_store_choice_sell();
	}
}

void sell0(int inum) {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1             �ɷ�ġ2             ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��       %20s                  hp ȸ�� : %3d                  mp ȸ�� : %3d          %2d ��      %2d ���       ��\n", ilist[inum].name, ilist[inum].add_hp, ilist[inum].add_mp, ilist[inum].ea, ilist[inum].price / 10 * 5);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      �Ǹ� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (ilist[inum].ea > 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;
				continue;
			}
			if (ilist[inum].ea == 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;
				break;
			}
			else {
				printf("  ���� %s ��(��) �����ϴ�!!", ilist[inum].name);
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void sell1(int inum) {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                  �ɷ�ġ1                                       ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��       %20s                 ������(���ݷ�) : %3d                                   %2d ��      %3d ���      ��\n", ilist[inum].name, ilist[inum].add_readership, ilist[inum].ea, ilist[inum].price / 10 * 5);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      �Ǹ� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (ilist[inum].ea > 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;

				if (strcmp(clist[0].item[0].name, clist[0].item[1].name) == 0 && strcmp(clist[0].item[0].name, ilist[inum].name) == 0)
					clist[0].item[1] = emptylist[0];

				continue;
			}
			if (ilist[inum].ea == 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;

				if (strcmp(clist[0].item[0].name, ilist[inum].name) == 0)
					clist[0].item[0] = emptylist[0];
				if (strcmp(clist[0].item[1].name, ilist[inum].name) == 0)
					clist[0].item[1] = emptylist[0];

				break;
			}
			else {
				printf("  ���� %s ��(��) �����ϴ�!!", ilist[inum].name);
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void sell2(int inum) {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1             �ɷ�ġ2             ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��       %20s                 �ʱ��(����) : %3d           hp ���� : %3d          %2d ��      %3d ���       ��\n", ilist[inum].name, ilist[inum].add_noteship, ilist[inum].add_hp, ilist[inum].ea, ilist[inum].price / 10 * 5);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      �Ǹ� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (ilist[inum].ea > 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;

				if (strcmp(clist[1].item[0].name, clist[1].item[1].name) == 0 && strcmp(clist[1].item[0].name, ilist[inum].name) == 0)
					clist[1].item[1] = emptylist[0];

				continue;
			}
			if (ilist[inum].ea == 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;

				if (strcmp(clist[1].item[0].name, ilist[inum].name) == 0)
					clist[1].item[0] = emptylist[0];
				if (strcmp(clist[1].item[1].name, ilist[inum].name) == 0)
					clist[1].item[1] = emptylist[0];

				break;
			}
			else {
				printf("  ���� %s ��(��) �����ϴ�!!", ilist[inum].name);
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}

void sell3(int inum) {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                        �ɷ�ġ1             �ɷ�ġ2             ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��       %20s                       ��(����) : %3d           mp ���� : %3d          %2d ��      %3d ���       ��\n", ilist[inum].name, ilist[inum].add_wealth, ilist[inum].add_mp, ilist[inum].ea, ilist[inum].price / 10 * 5);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      �Ǹ� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());
		if (a == '1') {
			if (ilist[inum].ea > 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;

				if (strcmp(clist[2].item[0].name, clist[2].item[1].name) == 0 && strcmp(clist[2].item[0].name, ilist[inum].name) == 0)
					clist[2].item[1] = emptylist[0];

				continue;
			}
			if (ilist[inum].ea == 1) {
				ilist[inum].ea--;
				gold += ilist[inum].price / 10 * 5;

				if (strcmp(clist[2].item[0].name, ilist[inum].name) == 0)
					clist[2].item[0] = emptylist[0];
				if (strcmp(clist[2].item[1].name, ilist[inum].name) == 0)
					clist[2].item[1] = emptylist[0];

				break;
			}
			else {
				printf("  ���� %s ��(��) �����ϴ�!!", ilist[inum].name);
				break;
			}
		}
		if (a == '2' || a == 'b' || a == 'B')
			break;
	}
}