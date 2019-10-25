
#include<stdio.h>
#include<string.h>
#include"skill.h"
#include"character.h"

SKILL slist[32] = { 0 };
SKILL empty_character_slist[1] = { 0 };  //��ų ���� ������ ĳ���� ��ų ĭ�� �̰ɳ־ �ƹ��͵� ���� �Ұ���.

void skill_set() {
	for (int i = 1; i < 31; i++) {
		slist[i].price = 0;
		slist[i].add_att = 0;
		slist[i].add_def = 0;
		slist[i].add_hp = 0;
		slist[i].add_mp = 0;
		slist[i].diff_mp = 0;
		slist[i].ea = 0;
		slist[i].index = -1;
	}

	for (int i = 1; i < 31; i++) {
		slist[i].num = i;
	}

	strcpy(slist[1].name, "����");
	strcpy(slist[1].info, "�����Ͽ� ���� ������");
	strcpy(slist[2].name, "��Ÿ");
	strcpy(slist[2].info, "������ �ϰ��� ����");
	strcpy(slist[3].name, "���� ����");
	strcpy(slist[3].info, "�� ����� �� �� ������");
	strcpy(slist[4].name, "Ʈ���� ����");
	strcpy(slist[4].info, "�� ����� �� �� ������");
	strcpy(slist[5].name, "������ ��");
	strcpy(slist[5].info, "��ü ��󿡰� ���� ���ظ� ����");
	strcpy(slist[6].name, "������ ��");
	strcpy(slist[6].info, "��ü ��󿡰� ���ظ� ����");
	strcpy(slist[7].name, "������ ��");
	strcpy(slist[7].info, "��ü ��󿡰� ������ ���ظ� ����");

	slist[5].price = 60;
	strcpy(slist[11].name, "��Ÿ");
	strcpy(slist[11].info, "������ �ϰ��� ����");
	strcpy(slist[12].name, "�� ��Ÿ");
	strcpy(slist[12].info, "�� ������ �ϰ��� ����");
	strcpy(slist[13].name, "������(����)");
	strcpy(slist[13].info, "��ü ��󿡰� ���ظ� ����");
	strcpy(slist[14].name, "����(2��)");
	strcpy(slist[14].info, "����� 2�ϵ��� �ൿ �Ҵ� ���·� ����");
	strcpy(slist[15].name, "��������(1��)");
	strcpy(slist[15].info, "��� ����� 1�ϵ��� �ൿ �Ҵ� ���·� ����"); //41
	strcpy(slist[16].name, "���� ���� 1��");
	strcpy(slist[16].info, "1���� ������ ����");
	strcpy(slist[17].name, "���� ���� 2��");
	strcpy(slist[17].info, "2���� ������ ����");


	strcpy(slist[21].name, "��Ÿ");
	strcpy(slist[21].info, "������ �ϰ��� ����");
	strcpy(slist[22].name, "�ʱ� ȸ��");
	strcpy(slist[22].info, "�Ʊ� �Ѹ� ���� ȸ��");
	strcpy(slist[23].name, "�߱� ȸ��");
	strcpy(slist[23].info, "�Ʊ� �Ѹ� ȸ��");
	strcpy(slist[24].name, "��� ȸ��");
	strcpy(slist[24].info, "�Ʊ� �Ѹ� ���� ȸ��");
	strcpy(slist[25].name, "�ʱ� ��ü��");
	strcpy(slist[25].info, "��ü �Ʊ� ���� ȸ��");
	strcpy(slist[26].name, "�߱� ��ü��");
	strcpy(slist[26].info, "��ü �Ʊ� ȸ��");
	strcpy(slist[27].name, "��� ��ü��");
	strcpy(slist[27].info, "��ü �Ʊ� ���� ȸ��");
	strcpy(slist[28].name, "���� ȸ��");
	strcpy(slist[28].info, "�Ʊ� ������ ȸ��");
	strcpy(slist[29].name, "��ü ���� ȸ��");
	strcpy(slist[29].info, "��ü �Ʊ� ������ ȸ��");
	strcpy(slist[30].name, "��ü�� + ���� ȸ��");
	strcpy(slist[30].info, "��ü �Ʊ� ü�°� ������ ȸ��");

	slist[1].add_att = 20;
	slist[1].diff_mp = 20;
	slist[2].add_att = 10;
	slist[2].diff_mp = 10;
	slist[3].add_att = 0;
	slist[3].diff_mp = 25;
	slist[4].add_att = 0;
	slist[4].diff_mp = 30;
	slist[5].add_att = 15;
	slist[5].diff_mp = 30;
	slist[6].add_att = 25;
	slist[6].diff_mp = 10;
	slist[7].add_att = 35;
	slist[7].diff_mp = 80;

	slist[11].add_att = 15;
	slist[11].diff_mp = 20;
	slist[12].add_att = 30;
	slist[12].diff_mp = 20;
	slist[13].add_att = 10;
	slist[13].diff_mp = 20;
	slist[14].add_att = 0;
	slist[14].diff_mp = 50; //����
	slist[15].add_att = 0;
	slist[15].diff_mp = 80;	//��������
	slist[16].add_att = 0;
	slist[16].diff_mp = 40;	//����
	slist[17].add_att = 0;
	slist[17].diff_mp = 75;

	slist[21].add_att = 10;
	slist[21].diff_mp = 10;
	slist[22].add_hp = 20;
	slist[22].diff_mp = 20;
	slist[23].add_hp = 50;
	slist[23].diff_mp = 25;
	slist[24].add_hp = 100;
	slist[24].diff_mp = 30;
	slist[25].add_hp = 20;
	slist[25].diff_mp = 30;
	slist[26].add_hp = 30;
	slist[26].diff_mp = 35;
	slist[27].add_hp = 40;
	slist[27].diff_mp = 40;
	slist[28].add_mp = 50;
	slist[28].diff_mp = 30;
	slist[29].add_mp = 30;
	slist[29].diff_mp = 50;
	slist[30].add_hp = 50;
	slist[30].add_mp = 50;
	slist[30].diff_mp = 80;
}

void initial_skill() {
	slist[1].ea = 1;
	slist[2].ea = 1;

	slist[11].ea = 1;
	slist[12].ea = 1;

	slist[21].ea = 1;
	slist[22].ea = 1;
	for (int i = 1; i < 31; i++) {
		slist[i].ea = 1;
	}
}

void skill_choice() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
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
		printf("  ��      1. ����          2. ����                                                                                              ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			skill_store_choice_buy();
		if (a == '2')
			skill_inventory_choice();
		if (a == 'b')
			town();
	}
}

//��ų�Լ� ����


void skill_store_choice_buy() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
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
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		if (a == '1')
			skill_store_choice_buy1();
		if (a == '2')
			skill_store_choice_buy2();
		if (a == '3')
			skill_store_choice_buy3();
		if (a == 'b')
			break;
	}
}

void skill_store_choice_buy1() {
	while (1) {
		char a;
		int index = 1;

		for (int i = 0; i < 8; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                             �ɷ�ġ                   �Ҹ� ����                  ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 1; i < 8; i++) {
			if (slist[i].ea == 0) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��   %d. %-20s                  �߰� ���ݷ� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
				printf("  ��                                                                                                                            ��\n");
				slist[i].index = index;
				index++;
			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());
		for (int i = 1; i < 8; i++) {
			if (a == slist[i].index + 48)
				s_buy1(slist[i].num);
		}
		if (a == 'b')
			break;
	}
}

void skill_store_choice_buy2() {
	while (1) {
		char a;
		int index = 1;

		for (int i = 11; i < 18; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                             �ɷ�ġ                   �Ҹ� ����                  ����                   ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 11; i < 18; i++) {
			if (slist[i].ea == 0) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��   %d. %-20s                  �߰� ���ݷ� : %2d           �Ҹ� ���� : %2d           %3d  ���                   ��\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
				printf("  ��                                                                                                                            ��\n");
				slist[i].index = index;
				index++;
			}

		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                          ���� ��� : %5d                 ��\n", gold);
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());

		for (int i = 11; i < 18; i++) {
			if (a == slist[i].index + 48)
				s_buy2(slist[i].num);
		}

		if (a == 'b')
			break;
	}
}

void skill_store_choice_buy3() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���(10�� 0�� ������ �ּ���.).\n\n  �ڷΰ���� 'b'�� �������ּ���.");

		a = (_getch());

		for (int i = 21; i < 31; i++) {
			if (a == slist[i].index + 48)
				s_buy3(slist[i].num);
		}

		if (a == 'b')
			break;
	}
}

void s_buy1(int snum) {
	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[snum].ea == 1)
			strcpy(exist, "������");
		else
			strcpy(exist, "����");

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����              ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d           %6s       %3d ���     ��\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp, exist, slist[snum].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[snum].info);
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
			if (gold >= slist[snum].price) {
				gold -= slist[snum].price;
				slist[snum].ea = 1;
				printf(" %20s ��(��) ȹ��!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n", slist[snum].name);
				if (_getch());
				break;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void s_buy2(int snum) {
	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[snum].ea == 1)
			strcpy(exist, "������");
		else
			strcpy(exist, "����");

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����              ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d           %6s       %3d ���     ��\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp, exist, slist[snum].price);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[snum].info);
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
			if (gold >= slist[snum].price) {
				gold -= slist[snum].price;
				slist[snum].ea = 1;
				printf(" %20s ��(��) ȹ��!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n", slist[snum].name);
				if (_getch());
				break;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void s_buy3(int snum) {
	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[snum].ea == 1)
			strcpy(exist, "������");
		else
			strcpy(exist, "����");

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����              ���� ����      ����       ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (snum == 21) {
			printf("  ��      %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		}
		if (snum > 21 && snum < 28 && snum != 24) {
			printf("  ��      %-20s                           ȸ���� : %2d         �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		if (snum > 27) {
			printf("  ��      %-20s                           ȸ���� : %2d         �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_mp, slist[snum].diff_mp);
		}
		if (snum == 24) {
			printf("  ��      %-20s                           ȸ���� : %2d        �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[snum].info);
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
			if (gold >= slist[snum].price) {
				gold -= slist[snum].price;
				slist[snum].ea = 1;
				printf(" %20s ��(��) ȹ��!\n\n  �ڷ� ���÷��� �ƹ�Ű�� ��������.\n", slist[snum].name);
				if (_getch());
				break;
			}
			else {
				printf("  �����ݾ��� �����մϴ�!!!\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b')
			break;
	}
}

//��ų �κ� �Լ� ����
void skill_inventory_choice() {
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
		printf("  �����ϰ� ���� ĳ���͸� �������ּ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.\n");
		a = (_getch());
		if (a == '1')
			skill_inventory1();
		if (a == '2')
			skill_inventory2();
		if (a == '3')
			skill_inventory3();
		if (a == 'b')
			skill_choice();
	}
}

void skill_inventory1() {
	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 8; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                                                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 1; i < 8; i++) {
			if (slist[i].ea == 1) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��   %d. %-20s                                                                                                  ��\n", index, slist[i].name);
				printf("  ��                                                                                                                            ��\n");
				slist[i].index = index;
				index++;
			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());

		for (int i = 1; i < 8; i++) {				//���� ���� Ű(�ε���)�� ��ų �ε����� ������ �� �׸��� ������ 
			if (a == slist[i].index + 48)			//�ش� ��ų �ε����� ��ų�ѹ��� ������
				skill_inven_info1(slist[i].num);
		}
		if (a == 'b')
			skill_inventory_choice();
	}
}

void skill_inventory2() {
	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 8; i++) {
			slist[i + 10].index = -1;
		}

		system("cls");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                �̸�                                                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		for (int i = 1; i < 8; i++) {
			if (slist[i + 10].ea == 1) {
				printf("  ��                                                                                                                            ��\n");
				printf("  ��   %d. %-20s                                                                                                  ��\n", index, slist[i + 10].name);
				printf("  ��                                                                                                                            ��\n");
				slist[i + 10].index = index;
				index++;
			}
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  �����ϰ� ���� ĳ���͸� �������ּ���.\n  ��ų�� �������� ������ �������� ����� �� �����ϴ�.\n  ��ų�� ĳ���ʹ� 2������ ������ �� �ֽ��ϴ�.\n  �ڷΰ���� 'b'�� �������ּ���.\n");
		a = (_getch());

		for (int i = 1; i < 8; i++) {				//���� ���� Ű(�ε���)�� ��ų �ε����� ������ �� �׸��� ������ 
			if (a == slist[i + 10].index + 48)			//�ش� ��ų �ε����� ��ų�ѹ��� ������
				skill_inven_info2(slist[i + 10].num);
		}
		if (a == 'b')
			skill_inventory_choice();
	}
}

void skill_inventory3() {
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
		printf("\n  ���ϴ� �޴��� �����ϼ���(10�� 0�� ������ �ּ���.).\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		a = (_getch());

		for (int i = 1; i < 11; i++) {				//���� ���� Ű(�ε���)�� ��ų �ε����� ������ �� �׸��� ������ 
			if (a == slist[i + 20].index + 48)			//�ش� ��ų �ε����� ��ų�ѹ��� ������
				skill_inven_info3(slist[i + 20].num);
		}
		if (a == 'b')
			skill_inventory_choice();
	}
}

void skill_inven_info1(int snum) {
	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[snum].info);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());

		if (a == '1') {
			skill_equip1(0, snum);
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void skill_inven_info2(int snum) {
	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[snum].info);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());

		if (a == '1') {
			skill_equip2(1, snum);
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void skill_inven_info3(int snum) {
	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (snum == 21) {
			printf("  ��      %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		}
		if (snum > 21 && snum < 28 && snum != 24) {
			printf("  ��      %-20s                           ȸ���� : %2d         �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		if (snum > 27) {
			printf("  ��      %-20s                           ȸ���� : %2d         �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_mp, slist[snum].diff_mp);
		}
		if (snum == 24) {
			printf("  ��      %-20s                           ȸ���� : %2d        �Ҹ� ���� : %2d                                     ��\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��ų ���� :                                                                                                           ��\n");
		printf("  ��      %-46s                                                                        ��\n", slist[snum].info);
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��      ��� �Ͻðڽ��ϱ�?         1. YES        2. NO                                                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		printf("\n  ���ϴ� �޴��� �����ϼ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		a = (_getch());

		if (a == '1') {
			skill_equip3(2, snum);
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void skill_equip1(int character, int snum) {
	while (1) {
		char a;

		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[0].skill[1].ea == 1) {
			printf("  ��      1. %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                  ��\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", clist[0].skill[1].info);
		}
		else {
			printf("  ��      1. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[0].skill[2].ea == 1) {
			printf("  ��      2. %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                  ��\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", clist[0].skill[2].info);
		}
		else {
			printf("  ��      2. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��ü�ϰ� ���� ������ �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
					clist[character].skill[2] = clist[character].skill[1];
					clist[character].skill[1] = slist[snum];
				}
				else
					clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea != 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num) {
				clist[character].skill[2] = empty_character_slist[0];
				clist[character].skill[1] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[1] = slist[snum];
				continue;
			}
		}
		if (a == '2') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[1].num == slist[snum].num && clist[character].skill[2].ea == 1) {
					clist[character].skill[1] = clist[character].skill[2];
					clist[character].skill[2] = slist[snum];
				}
				else
					clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[2].ea == 1 && clist[character].skill[1].ea != 1) {
				clist[character].skill[1] = clist[character].skill[2];
				clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[1].num == slist[snum].num) {
				clist[character].skill[1] = empty_character_slist[0];
				clist[character].skill[2] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[2] = slist[snum];
				continue;
			}
		}
		if (a == 'b')
			skill_inventory1();
	}
}

void skill_equip2(int character, int snum) {
	while (1) {
		char a;

		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��              �̸�                                      �ɷ�ġ             �Ҹ� ����                                        ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[1].skill[1].ea == 1) {
			printf("  ��      1. %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                  ��\n", clist[1].skill[1].name, clist[1].skill[1].add_att, clist[1].skill[1].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", clist[1].skill[1].info);
		}
		else {
			printf("  ��      1. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		if (clist[1].skill[2].ea == 1) {
			printf("  ��      2. %-20s                          �߰� ���ݷ� : %2d     �Ҹ� ���� : %2d                                  ��\n", clist[1].skill[2].name, clist[1].skill[2].add_att, clist[1].skill[2].diff_mp);
			printf("  ��                                                                                                                            ��\n");
			printf("  ��      ��ų ���� :                                                                                                           ��\n");
			printf("  ��      %-46s                                                                        ��\n", clist[1].skill[2].info);
		}
		else {
			printf("  ��      2. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��ü�ϰ� ���� ������ �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
					clist[character].skill[2] = clist[character].skill[1];
					clist[character].skill[1] = slist[snum];
				}
				else
					clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea != 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num) {
				clist[character].skill[2] = empty_character_slist[0];
				clist[character].skill[1] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[1] = slist[snum];
				continue;
			}
		}
		if (a == '2') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[1].num == slist[snum].num && clist[character].skill[2].ea == 1) {
					clist[character].skill[1] = clist[character].skill[2];
					clist[character].skill[2] = slist[snum];
				}
				else
					clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[2].ea == 1 && clist[character].skill[1].ea != 1) {
				clist[character].skill[1] = clist[character].skill[2];
				clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[1].num == slist[snum].num) {
				clist[character].skill[1] = empty_character_slist[0];
				clist[character].skill[2] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[2] = slist[snum];
				continue;
			}
		}
		if (a == 'b')
			skill_inventory2();
	}
}

void skill_equip3(int character, int snum) {
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
			printf("  ��      %-46s                                                                        ��\n", clist[2].skill[1].info);
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
			printf("  ��      %-46s                                                                        ��\n", clist[2].skill[2].info);
		}
		else {
			printf("  ��      2. ��� ���� ��ų ����                                                                                                ��\n");
		}
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n\n");
		printf("  ��ü�ϰ� ���� ������ �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
					clist[character].skill[2] = clist[character].skill[1];
					clist[character].skill[1] = slist[snum];
				}
				else
					clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea != 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num) {
				clist[character].skill[2] = empty_character_slist[0];
				clist[character].skill[1] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[1] = slist[snum];
				continue;
			}
		}
		if (a == '2') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[1].num == slist[snum].num && clist[character].skill[2].ea == 1) {
					clist[character].skill[1] = clist[character].skill[2];
					clist[character].skill[2] = slist[snum];
				}
				else
					clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[2].ea == 1 && clist[character].skill[1].ea != 1) {
				clist[character].skill[1] = clist[character].skill[2];
				clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[1].num == slist[snum].num) {
				clist[character].skill[1] = empty_character_slist[0];
				clist[character].skill[2] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[2] = slist[snum];
				continue;
			}
		}
		if (a == 'b')
			skill_inventory3();
	}
}