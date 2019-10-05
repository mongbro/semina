// made by ������ & ������

#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct monster {
	char name[20];
	int fhp;			//�� hp
	int hp;			//���� hp
	int att;
	int def;
	int condition;				//0�� ��� �������, 1�ϰ�� �׾�����
	int mexp;
}MON;

MON mlist[3] = { 0 };

void prologue_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "����1");
	strcpy(mlist[1].name, "����2");
	strcpy(mlist[2].name, "����3");
	for (int i = 0; i < 3; i++) {
		mlist[i].fhp = 30;
		mlist[i].hp = 30;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 50;
	}
}

void stage1_1_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "������");
	strcpy(mlist[1].name, "������");
	strcpy(mlist[2].name, "������");
	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 35;
		mlist[i].hp = 35;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 50;
	}
	mlist[2].fhp = 40;
	mlist[2].hp = 40;
	mlist[2].att = 10;
	mlist[2].def = 10;
	mlist[2].condition = 0;
	mlist[2].mexp = 50;
}

void stage1_2_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "������");
	strcpy(mlist[1].name, "������");
	strcpy(mlist[2].name, "����Ʈ");
	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 40;
		mlist[i].hp = 40;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 50;
	}
	mlist[2].fhp = 45;
	mlist[2].hp = 45;
	mlist[2].att = 10;
	mlist[2].def = 10;
	mlist[2].condition = 0;
	mlist[2].mexp = 50;
}

void stage1_3_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "����Ʈ");
	strcpy(mlist[1].name, "����Ʈ");
	strcpy(mlist[2].name, "����Ʈ(����)");
	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 45;
		mlist[i].hp = 45;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 50;
	}
	mlist[2].fhp = 50;
	mlist[2].hp = 50;
	mlist[2].att = 10;
	mlist[2].def = 10;
	mlist[2].condition = 0;
	mlist[2].mexp = 50;
}

void stage1_B_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "��ǥ����");

	mlist[0].fhp = 200;
	mlist[0].hp = 200;
	mlist[0].att = 10;
	mlist[0].def = 10;
	mlist[0].condition = 0;
	mlist[0].mexp = 100;
}

void stage2_1_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "���缭��");
	strcpy(mlist[1].name, "���缭��");
	strcpy(mlist[2].name, "�����ڷ�(������)");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 60;
		mlist[i].hp = 60;
		mlist[i].att = 30;
		mlist[i].def = 30;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 80;
	mlist[2].hp = 80;
	mlist[2].att = 30;
	mlist[2].def = 30;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage2_2_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�����ڷ�(ppt)");
	strcpy(mlist[1].name, "�����ڷ�(ppt)");
	strcpy(mlist[2].name, "����� ��������");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 65;
		mlist[i].hp = 65;
		mlist[i].att = 30;
		mlist[i].def = 30;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 85;
	mlist[2].hp = 85;
	mlist[2].att = 40;
	mlist[2].def = 40;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage2_3_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "����");
	strcpy(mlist[1].name, "����");
	strcpy(mlist[2].name, "�β��� ��������");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 75;
		mlist[i].hp = 75;
		mlist[i].att = 40;
		mlist[i].def = 40;
		mlist[i].condition = 0;
		mlist[i].mexp = 110;
	}

	mlist[2].fhp = 90;
	mlist[2].hp = 90;
	mlist[2].att = 40;
	mlist[2].def = 40;
	mlist[2].condition = 0;
	mlist[2].mexp = 120;
}

void stage2_4_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "����� ��������");
	strcpy(mlist[1].name, "�β��� ��������");
	strcpy(mlist[2].name, "�β��� ��������");

	mlist[0].fhp = 85;
	mlist[0].hp = 85;
	mlist[0].att = 40;
	mlist[0].def = 40;
	mlist[0].condition = 0;
	mlist[0].mexp = 110;

	for (int i = 1; i < 3; i++) {
		mlist[i].fhp = 90;
		mlist[i].hp = 90;
		mlist[i].att = 40;
		mlist[i].def = 40;
		mlist[i].condition = 0;
		mlist[i].mexp = 120;
	}

}

void stage2_B_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�߰����");

	mlist[0].fhp = 300;
	mlist[0].hp = 300;
	mlist[0].att = 80;
	mlist[0].def = 80;
	mlist[0].condition = 0;
	mlist[0].mexp = 1000;
}

void stage3_1_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "ȸ��");
	strcpy(mlist[1].name, "���ϴ� ��");
	strcpy(mlist[2].name, "���ϴ� ��");
	for (int i = 1; i < 3; i++) {
		mlist[i].fhp = 130;
		mlist[i].hp = 110;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 200;
	}
	mlist[0].fhp = 115;
	mlist[0].hp = 115;
	mlist[0].att = 10;
	mlist[0].def = 10;
	mlist[0].condition = 0;
	mlist[0].mexp = 200;
}

void stage3_2_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "��ȹ��");
	strcpy(mlist[1].name, "�׻� ���� ��");
	strcpy(mlist[2].name, "���ν��� �ϴ� ��");

	mlist[0].fhp = 145;
	mlist[0].hp = 145;
	mlist[0].att = 10;
	mlist[0].def = 10;
	mlist[0].condition = 0;
	mlist[0].mexp = 200;

	mlist[1].fhp = 160;
	mlist[1].hp = 160;
	mlist[1].att = 10;
	mlist[1].def = 10;
	mlist[1].condition = 0;
	mlist[1].mexp = 200;

	mlist[2].fhp = 175;
	mlist[2].hp = 175;
	mlist[2].att = 10;
	mlist[2].def = 10;
	mlist[2].condition = 0;
	mlist[2].mexp = 200;
}

void stage3_3_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "Ż���ϴ� ��");
	strcpy(mlist[1].name, "�׻� ���� ��");
	strcpy(mlist[2].name, "���ν��� �ϴ� ��");

	mlist[0].fhp = 190;
	mlist[0].hp = 190;
	mlist[0].att = 10;
	mlist[0].def = 10;
	mlist[0].condition = 0;
	mlist[0].mexp = 200;

	mlist[1].fhp = 160;
	mlist[1].hp = 160;
	mlist[1].att = 10;
	mlist[1].def = 10;
	mlist[1].condition = 0;
	mlist[1].mexp = 200;

	mlist[2].fhp = 175;
	mlist[2].hp = 175;
	mlist[2].att = 10;
	mlist[2].def = 10;
	mlist[2].condition = 0;
	mlist[2].mexp = 200;
}

void stage3_B_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�յ� ���� ��ǥ");

	mlist[0].fhp = 700;
	mlist[0].hp = 700;
	mlist[0].att = 10;
	mlist[0].def = 10;
	mlist[0].condition = 0;
	mlist[0].mexp = 100;
}

void stage4_1_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "������ Ǯ��");
	strcpy(mlist[1].name, "������ Ǯ��");
	strcpy(mlist[2].name, "�����ڷ�(ppt)");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 160;
		mlist[i].hp = 160;
		mlist[i].att = 30;
		mlist[i].def = 30;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 150;
	mlist[2].hp = 150;
	mlist[2].att = 30;
	mlist[2].def = 30;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_2_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�β��� ���缭��");
	strcpy(mlist[1].name, "�β��� ���缭��");
	strcpy(mlist[2].name, "����");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 170;
		mlist[i].hp = 170;
		mlist[i].att = 30;
		mlist[i].def = 30;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 160;
	mlist[2].hp = 160;
	mlist[2].att = 30;
	mlist[2].def = 30;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_3_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�β��� ��������");
	strcpy(mlist[1].name, "�β��� ��������");
	strcpy(mlist[2].name, "�β��� ���缭��");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 180;
		mlist[i].hp = 180;
		mlist[i].att = 30;
		mlist[i].def = 30;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 170;
	mlist[2].hp = 170;
	mlist[2].att = 30;
	mlist[2].def = 30;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_4_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�β��� ��������");
	strcpy(mlist[1].name, "�β��� ��������");
	strcpy(mlist[2].name, "������");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 180;
		mlist[i].hp = 180;
		mlist[i].att = 30;
		mlist[i].def = 30;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 200;
	mlist[2].hp = 200;
	mlist[2].att = 30;
	mlist[2].def = 30;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_B_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "�⸻���");

	mlist[0].fhp = 1000;
	mlist[0].hp = 1000;
	mlist[0].att = 80;
	mlist[0].def = 80;
	mlist[0].condition = 0;
	mlist[0].mexp = 1000;
}