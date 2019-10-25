#include<stdio.h>
#include<string.h>
#include"item.h"

int gold = 0;
ITEM ilist[41] = { 0 };				//인벤토리에 있는 아이템
ITEM aitem[41] = { 0 };				//모든 종류의 아이템
ITEM dilist[10] = { 0 };			//드랍되는 아이템
ITEM emptylist[1] = { 0 };

void all_item() {
	all_0_item();
	all_1_item();
	all_2_item();
	all_3_item();
}

void all_0_item() {
	strcpy(ilist[0].name, "오로나민 C");
	strcpy(ilist[1].name, "박카스 F");
	strcpy(ilist[2].name, "박카스 D");
	strcpy(ilist[3].name, "비타 500");
	strcpy(ilist[4].name, "HOT 6");
	strcpy(ilist[5].name, "MONSTER");
	strcpy(ilist[6].name, "스누피 커피우유");

	ilist[0].add_hp = 20;
	ilist[0].add_mp = 0;
	ilist[0].price = 10;
	ilist[0].ea = 1;
	ilist[0].num = 0;

	ilist[1].add_hp = 30;
	ilist[1].add_mp = 0;
	ilist[1].price = 20;
	ilist[1].num = 1;

	ilist[2].add_hp = 50;
	ilist[2].add_mp = 0;
	ilist[2].price = 35;
	ilist[2].num = 2;

	ilist[3].add_hp = 0;
	ilist[3].add_mp = 20;
	ilist[3].price = 10;
	ilist[3].ea = 1;
	ilist[3].num = 3;

	ilist[4].add_hp = 0;
	ilist[4].add_mp = 30;
	ilist[4].price = 20;
	ilist[4].num = 4;

	ilist[5].add_hp = 0;
	ilist[5].add_mp = 50;
	ilist[5].price = 35;
	ilist[5].num = 5;

	ilist[6].add_hp = 50;
	ilist[6].add_mp = 50;
	ilist[6].price = 80;
	ilist[6].num = 6;
}

void all_1_item() {
	strcpy(ilist[10].name, "초보 조장의 계획서");
	strcpy(ilist[11].name, "초보 조장의 USB");
	strcpy(ilist[12].name, "중수 조장의 계획서");
	strcpy(ilist[13].name, "중수 조장의 USB");
	strcpy(ilist[14].name, "고수 조장의 계획서");
	strcpy(ilist[15].name, "고수 조장의 USB");
	strcpy(ilist[16].name, "전설 조장의 계획서");
	strcpy(ilist[17].name, "전설 조장의 USB");

	ilist[10].add_readership = 5;
	ilist[10].num = 10;
	ilist[10].ea = 1;
	ilist[10].price = 0;

	ilist[11].add_readership = 10;
	ilist[11].num = 11;
	ilist[11].ea = 0;
	ilist[11].price = 5;

	ilist[12].add_readership = 15;
	ilist[12].num = 12;
	ilist[12].ea = 0;
	ilist[12].price = 10;

	ilist[13].add_readership = 20;
	ilist[13].num = 13;
	ilist[13].ea = 0;
	ilist[13].price = 20;

	ilist[14].add_readership = 25;
	ilist[14].num = 14;
	ilist[14].ea = 0;
	ilist[14].price = 30;

	ilist[15].add_readership = 30;
	ilist[15].num = 15;
	ilist[15].ea = 0;
	ilist[15].price = 50;

	ilist[16].add_readership = 35;
	ilist[16].num = 16;
	ilist[16].ea = 0;
	ilist[16].price = 70;

	ilist[17].add_readership = 40;
	ilist[17].num = 17;
	ilist[17].ea = 0;
	ilist[17].price = 100;
}

void all_2_item() {
	strcpy(ilist[20].name, "초보 서기의 연습장");
	strcpy(ilist[21].name, "초보 서기의 노트북");
	strcpy(ilist[22].name, "중수 서기의 연습장");
	strcpy(ilist[23].name, "중수 서기의 노트북");
	strcpy(ilist[24].name, "고수 서기의 연습장");
	strcpy(ilist[25].name, "고수 서기의 노트북");
	strcpy(ilist[26].name, "전설 서기의 연습장");
	strcpy(ilist[27].name, "전설 서기의 노트북");

	ilist[20].add_noteship = 5;
	ilist[20].num = 20;
	ilist[20].ea = 1;
	ilist[20].price = 0;

	ilist[21].add_noteship = 10;
	ilist[21].num = 21;
	ilist[21].ea = 0;
	ilist[21].price = 5;

	ilist[22].add_noteship = 15;
	ilist[22].num = 22;
	ilist[22].ea = 0;
	ilist[22].price = 10;

	ilist[23].add_noteship = 20;
	ilist[23].num = 23;
	ilist[23].ea = 0;
	ilist[23].price = 20;

	ilist[24].add_noteship = 25;
	ilist[24].add_hp = 20;
	ilist[24].num = 24;
	ilist[24].ea = 0;
	ilist[24].price = 30;

	ilist[25].add_noteship = 30;
	ilist[25].add_hp = 80;
	ilist[25].num = 25;
	ilist[25].ea = 0;
	ilist[25].price = 50;

	ilist[26].add_noteship = 35;
	ilist[26].add_hp = 90;
	ilist[26].num = 26;
	ilist[26].ea = 0;
	ilist[26].price = 70;

	ilist[27].add_noteship = 40;
	ilist[27].add_hp = 100;
	ilist[27].num = 27;
	ilist[27].ea = 0;
	ilist[27].price = 100;
}


void all_3_item() {
	strcpy(ilist[30].name, "가난한 지갑의 용돈");
	strcpy(ilist[31].name, "가난한 지갑의 카드");
	strcpy(ilist[32].name, "평범한 지갑의 용돈");
	strcpy(ilist[33].name, "평범한 지갑의 카드");
	strcpy(ilist[34].name, "풍족한 지갑의 용돈");
	strcpy(ilist[35].name, "풍족한 지갑의 카드");
	strcpy(ilist[36].name, "부유한 지갑의 용돈");
	strcpy(ilist[37].name, "부유한 지갑의 카드");

	ilist[30].add_wealth = 5;
	ilist[30].num = 30;
	ilist[30].ea = 1;
	ilist[30].price = 0;

	ilist[31].add_wealth = 10;
	ilist[31].num = 31;
	ilist[31].ea = 0;
	ilist[31].price = 5;

	ilist[32].add_wealth = 15;
	ilist[32].num = 32;
	ilist[32].ea = 0;
	ilist[32].price = 10;

	ilist[33].add_wealth = 20;
	ilist[33].num = 33;
	ilist[33].ea = 0;
	ilist[33].price = 20;

	ilist[34].add_wealth = 25;
	ilist[34].add_mp = 70;
	ilist[34].num = 34;
	ilist[34].ea = 0;
	ilist[34].price = 30;

	ilist[35].add_wealth = 30;
	ilist[35].add_mp = 80;
	ilist[35].num = 35;
	ilist[35].ea = 0;
	ilist[35].price = 50;

	ilist[36].add_wealth = 35;
	ilist[36].add_mp = 90;
	ilist[36].num = 36;
	ilist[36].ea = 0;
	ilist[36].price = 70;

	ilist[37].add_wealth = 40;
	ilist[37].add_mp = 100;
	ilist[37].num = 37;
	ilist[37].ea = 0;
	ilist[37].price = 100;
}

void prologue_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[10].name);
	strcpy(dilist[1].name, ilist[20].name);
	strcpy(dilist[2].name, ilist[30].name);
	strcpy(dilist[3].name, ilist[0].name);
	strcpy(dilist[4].name, ilist[3].name);

	ilist[0].ea = 1;
	ilist[3].ea = 1;
	dilist[0].ea = 1;
	dilist[1].ea = 1;
	dilist[2].ea = 1;
	dilist[3].ea = 1;
	dilist[4].ea = 1;
	dilist[0].num = ilist[10].num;
	dilist[1].num = ilist[20].num;
	dilist[2].num = ilist[30].num;
	dilist[3].num = ilist[0].num;
	dilist[4].num = ilist[3].num;
}

void stage_1_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[0].name);
	strcpy(dilist[1].name, ilist[3].name);

	dilist[0].ea = 1;
	dilist[1].ea = 1;
	dilist[0].num = ilist[0].num;
	dilist[1].num = ilist[3].num;
}

void stage_1_b_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[0].name);
	strcpy(dilist[1].name, ilist[3].name);
	strcpy(dilist[2].name, ilist[12].name);
	strcpy(dilist[3].name, ilist[22].name);
	strcpy(dilist[4].name, ilist[32].name);

	for (int i = 0; i < 5; i++) {
		dilist[i].ea = 1;
	}

	dilist[0].num = ilist[0].num;
	dilist[1].num = ilist[3].num;
	dilist[2].num = ilist[12].num;
	dilist[3].num = ilist[22].num;
	dilist[4].num = ilist[32].num;

}

void stage_2_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[0].name);
	strcpy(dilist[1].name, ilist[1].name);
	strcpy(dilist[2].name, ilist[3].name);
	strcpy(dilist[3].name, ilist[4].name);

	for (int i = 0; i < 4; i++) {
		dilist[i].ea = 1;
	}

	dilist[0].num = ilist[0].num;
	dilist[1].num = ilist[1].num;
	dilist[2].num = ilist[3].num;
	dilist[3].num = ilist[4].num;
}

void stage_2_b_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[1].name);
	strcpy(dilist[1].name, ilist[4].name);
	strcpy(dilist[2].name, ilist[15].name);
	strcpy(dilist[3].name, ilist[25].name);
	strcpy(dilist[4].name, ilist[35].name);

	for (int i = 0; i < 5; i++) {
		dilist[i].ea = 1;
	}

	dilist[0].num = ilist[1].num;
	dilist[1].num = ilist[4].num;
	dilist[2].num = ilist[15].num;
	dilist[3].num = ilist[25].num;
	dilist[4].num = ilist[35].num;

}

void stage_3_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[1].name);
	strcpy(dilist[1].name, ilist[2].name);
	strcpy(dilist[2].name, ilist[4].name);
	strcpy(dilist[3].name, ilist[5].name);

	for (int i = 0; i < 4; i++) {
		dilist[i].ea = 1;
	}

	dilist[0].num = ilist[1].num;
	dilist[1].num = ilist[2].num;
	dilist[2].num = ilist[4].num;
	dilist[3].num = ilist[5].num;
}

void stage_3_b_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[2].name);
	strcpy(dilist[1].name, ilist[5].name);
	strcpy(dilist[2].name, ilist[17].name);
	strcpy(dilist[3].name, ilist[27].name);
	strcpy(dilist[4].name, ilist[37].name);

	for (int i = 0; i < 5; i++) {
		dilist[i].ea = 1;
	}

	dilist[0].num = ilist[2].num;
	dilist[1].num = ilist[5].num;
	dilist[2].num = ilist[17].num;
	dilist[3].num = ilist[27].num;
	dilist[4].num = ilist[37].num;
}

void stage_4_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[2].name);
	strcpy(dilist[1].name, ilist[5].name);
	strcpy(dilist[2].name, ilist[6].name);

	for (int i = 0; i < 3; i++) {
		dilist[i].ea = 1;
	}

	dilist[0].num = ilist[2].num;
	dilist[1].num = ilist[5].num;
	dilist[2].num = ilist[6].num;
}

void stage_4_b_ditem(ITEM dilist[10]) {
	
}