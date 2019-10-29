// made by 김주윤 & 선종범

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"monster.h"

MON mlist[3] = { 0 };
MON empty_mlist[3] = { 0 };

void prologue_monster() {

	strcpy(mlist[0].name, "과제1");
	strcpy(mlist[1].name, "과제2");
	strcpy(mlist[2].name, "과제3");
	for (int i = 0; i < 3; i++) {
		mlist[i].fhp = 40;
		mlist[i].hp = 40;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 120;
	}
}

void stage1_1_monster() {

	strcpy(mlist[0].name, "리딩랩");
	strcpy(mlist[1].name, "리딩랩");
	strcpy(mlist[2].name, "독서록");
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

void stage1_2_monster() {

	strcpy(mlist[0].name, "독서록");
	strcpy(mlist[1].name, "독서록");
	strcpy(mlist[2].name, "리포트");
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

void stage1_3_monster() {

	strcpy(mlist[0].name, "리포트");
	strcpy(mlist[1].name, "리포트");
	strcpy(mlist[2].name, "리포트(자필)");
	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 45;
		mlist[i].hp = 45;
		mlist[i].att = 20;
		mlist[i].def = 20;
		mlist[i].condition = 0;
		mlist[i].mexp = 50;
	}
	mlist[2].fhp = 50;
	mlist[2].hp = 50;
	mlist[2].att = 20;
	mlist[2].def = 20;
	mlist[2].condition = 0;
	mlist[2].mexp = 50;
}

void stage1_B_monster() {

	strcpy(mlist[0].name, "조별과제 중간 제출");

	mlist[0].fhp = 200;
	mlist[0].hp = 200;
	mlist[0].att = 30;
	mlist[0].def = 30;
	mlist[0].condition = 0;
	mlist[0].mexp = 100;
	mlist[1].condition = 1;
	mlist[2].condition = 1;
}


//////////////////////스테이지1//////////////////////


void stage2_1_monster() {

	strcpy(mlist[0].name, "교양서적");
	strcpy(mlist[1].name, "교양서적");
	strcpy(mlist[2].name, "수업자료(프린터)");

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

void stage2_2_monster() {

	strcpy(mlist[0].name, "수업자료(ppt)");
	strcpy(mlist[1].name, "수업자료(ppt)");
	strcpy(mlist[2].name, "평범한 전공서적");

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

void stage2_3_monster() {

	strcpy(mlist[0].name, "족보");
	strcpy(mlist[1].name, "족보");
	strcpy(mlist[2].name, "두꺼운 전공서적");

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

void stage2_4_monster() {

	strcpy(mlist[0].name, "평범한 전공서적");
	strcpy(mlist[1].name, "두꺼운 전공서적");
	strcpy(mlist[2].name, "두꺼운 전공서적");

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

void stage2_B_monster() {

	strcpy(mlist[0].name, "중간고사");

	mlist[0].fhp = 300;
	mlist[0].hp = 300;
	mlist[0].att = 60;
	mlist[0].def = 60;
	mlist[0].condition = 0;
	mlist[0].mexp = 1000;
	mlist[1].condition = 1;
	mlist[2].condition = 1;
}


//////////////////////스테이지2//////////////////////


void stage3_1_monster() {

	strcpy(mlist[0].name, "회의");
	strcpy(mlist[1].name, "안하는 놈");
	strcpy(mlist[2].name, "안하는 놈");
	for (int i = 1; i < 3; i++) {
		mlist[i].fhp = 130;
		mlist[i].hp = 130;
		mlist[i].att = 40;
		mlist[i].def = 40;
		mlist[i].condition = 0;
		mlist[i].mexp = 200;
	}
	mlist[0].fhp = 115;
	mlist[0].hp = 115;
	mlist[0].att = 40;
	mlist[0].def = 40;
	mlist[0].condition = 0;
	mlist[0].mexp = 200;
}

void stage3_2_monster() {

	strcpy(mlist[0].name, "계획서");
	strcpy(mlist[1].name, "항상 아픈 놈");
	strcpy(mlist[2].name, "무인승차 하는 놈");

	mlist[0].fhp = 145;
	mlist[0].hp = 145;
	mlist[0].att = 40;
	mlist[0].def = 40;
	mlist[0].condition = 0;
	mlist[0].mexp = 200;

	mlist[1].fhp = 160;
	mlist[1].hp = 160;
	mlist[1].att = 40;
	mlist[1].def = 40;
	mlist[1].condition = 0;
	mlist[1].mexp = 200;

	mlist[2].fhp = 175;
	mlist[2].hp = 175;
	mlist[2].att = 40;
	mlist[2].def = 40;
	mlist[2].condition = 0;
	mlist[2].mexp = 200;
}

void stage3_3_monster() {

	strcpy(mlist[0].name, "탈주하는 놈");
	strcpy(mlist[1].name, "항상 아픈 놈");
	strcpy(mlist[2].name, "무인승차 하는 놈");

	mlist[0].fhp = 190;
	mlist[0].hp = 190;
	mlist[0].att = 50;
	mlist[0].def = 50;
	mlist[0].condition = 0;
	mlist[0].mexp = 200;

	mlist[1].fhp = 160;
	mlist[1].hp = 160;
	mlist[1].att = 50;
	mlist[1].def = 50;
	mlist[1].condition = 0;
	mlist[1].mexp = 200;

	mlist[2].fhp = 175;
	mlist[2].hp = 175;
	mlist[2].att = 10;
	mlist[2].def = 10;
	mlist[2].condition = 0;
	mlist[2].mexp = 200;
}

void stage3_B_monster() {

	strcpy(mlist[0].name, "조별과제 최종 발표");

	mlist[0].fhp = 700;
	mlist[0].hp = 700;
	mlist[0].att = 80;
	mlist[0].def = 80;
	mlist[0].condition = 0;
	mlist[0].mexp = 100;
	mlist[1].condition = 1;
	mlist[2].condition = 1;
}


//////////////////////스테이지3//////////////////////


void stage4_1_monster() {

	strcpy(mlist[0].name, "예상문제 풀이");
	strcpy(mlist[1].name, "예상문제 풀이");
	strcpy(mlist[2].name, "수업자료(ppt)");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 160;
		mlist[i].hp = 160;
		mlist[i].att = 50;
		mlist[i].def = 50;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 150;
	mlist[2].hp = 150;
	mlist[2].att = 50;
	mlist[2].def = 50;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_2_monster() {

	strcpy(mlist[0].name, "두꺼운 교양서적");
	strcpy(mlist[1].name, "두꺼운 교양서적");
	strcpy(mlist[2].name, "족보");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 170;
		mlist[i].hp = 170;
		mlist[i].att = 50;
		mlist[i].def = 50;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 160;
	mlist[2].hp = 160;
	mlist[2].att = 50;
	mlist[2].def = 50;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_3_monster() {

	strcpy(mlist[0].name, "두꺼운 전공서적");
	strcpy(mlist[1].name, "두꺼운 전공서적");
	strcpy(mlist[2].name, "두꺼운 교양서적");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 180;
		mlist[i].hp = 180;
		mlist[i].att = 60;
		mlist[i].def = 60;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 170;
	mlist[2].hp = 170;
	mlist[2].att = 60;
	mlist[2].def = 60;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_4_monster() {

	strcpy(mlist[0].name, "두꺼운 전공서적");
	strcpy(mlist[1].name, "두꺼운 전공서적");
	strcpy(mlist[2].name, "과제물");

	for (int i = 0; i < 2; i++) {
		mlist[i].fhp = 180;
		mlist[i].hp = 180;
		mlist[i].att = 60;
		mlist[i].def = 60;
		mlist[i].condition = 0;
		mlist[i].mexp = 100;
	}

	mlist[2].fhp = 200;
	mlist[2].hp = 200;
	mlist[2].att = 60;
	mlist[2].def = 60;
	mlist[2].condition = 0;
	mlist[2].mexp = 110;
}

void stage4_B_monster() {

	strcpy(mlist[0].name, "기말고사");

	mlist[0].fhp = 999;
	mlist[0].hp = 999;
	mlist[0].att = 100;
	mlist[0].def = 100;
	mlist[0].condition = 0;
	mlist[0].mexp = 1000;
	mlist[1].condition = 1;
	mlist[2].condition = 1;
}
