// made by ±Ë¡æ¿∫

#include<stdio.h>
#include<string.h>
#include"item.h"
#include"monster.h"
#include"stage.h"

STAGE stlist[5] = { 0 };
STAGE stlista[46] = { 0 };

void stage_prologue() {
	stlist[0].num_item = 0;
	prologue_monster();
	prologue_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlist[0].drop_item[i] = emptylist[i];
		stlist[0].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlist[0].drop_item[i].ea == 1)
			stlist[0].num_item++;
	}
	for (int i = 0; i < 5; i++) {
		stlist[i].chapter = i;
	}
}

void ditem_1_1() {
	stlista[11].num_item = 0;
	stage1_1_monster();
	stage_1_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[11].drop_item[i] = emptylist[1];
		stlista[11].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[11].drop_item[i].ea == 1)
			stlista[11].num_item++;
	}
	stlista[11].chapter = 1;
}

void ditem_1_2() {
	stlista[12].num_item = 0;
	stage1_2_monster();
	stage_1_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[12].drop_item[i] = emptylist[i];
		stlista[12].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[12].drop_item[i].ea == 1)
			stlista[12].num_item++;
	}
	stlista[12].chapter = 1;
}

void ditem_1_3() {
	stlista[13].num_item = 0;
	stage1_3_monster();
	stage_1_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[13].drop_item[i] = emptylist[i];
		stlista[13].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[13].drop_item[i].ea == 1)
			stlista[13].num_item++;
	}
	stlista[13].chapter = 1;
}

void ditem_1_4() {
	stlista[14].num_item = 0;
	stage1_B_monster();
	stage_1_b_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[14].drop_item[i] = emptylist[i];
		stlista[14].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[14].drop_item[i].ea == 1)
			stlista[14].num_item++;
	}
	stlista[14].chapter = 1;
}

void ditem_2_1() {
	stlista[21].num_item = 0;
	stage2_1_monster();
	stage_2_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[21].drop_item[i] = emptylist[i];
		stlista[21].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[21].drop_item[i].ea == 1)
			stlista[21].num_item++;
	}
	stlista[21].chapter = 2;
}

void ditem_2_2() {
	stlista[22].num_item = 0;
	stage2_2_monster();
	stage_2_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[22].drop_item[i] = emptylist[i];
		stlista[22].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[22].drop_item[i].ea == 1)
			stlista[22].num_item++;
	}
	stlista[22].chapter = 2;
}

void ditem_2_3() {
	stlista[23].num_item = 0;
	stage2_3_monster();
	stage_2_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[23].drop_item[i] = emptylist[i];
		stlista[23].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[23].drop_item[i].ea == 1)
			stlista[23].num_item++;
	}
	stlista[23].chapter = 2;
}

void ditem_2_4() {
	stlista[24].num_item = 0;
	stage2_4_monster();
	stage_2_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[24].drop_item[i] = emptylist[i];
		stlista[24].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[24].drop_item[i].ea == 1)
			stlista[24].num_item++;
	}
	stlista[24].chapter = 2;
}

void ditem_2_5() {
	stlista[25].num_item = 0;
	stage2_B_monster();
	stage_2_b_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[25].drop_item[i] = emptylist[i];
		stlista[25].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[25].drop_item[i].ea == 1)
			stlista[25].num_item++;
	}
	stlista[25].chapter = 2;
}

void ditem_3_1() {
	stlista[31].num_item = 0;
	stage3_1_monster();
	stage_3_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[31].drop_item[i] = emptylist[i];
		stlista[31].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[31].drop_item[i].ea == 1)
			stlista[31].num_item++;
	}
	stlista[31].chapter = 3;
}

void ditem_3_2() {
	stlista[32].num_item = 0;
	stage3_2_monster();
	stage_3_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[32].drop_item[i] = emptylist[i];
		stlista[32].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[32].drop_item[i].ea == 1)
			stlista[32].num_item++;
	}
	stlista[32].chapter = 3;
}

void ditem_3_3() {
	stlista[33].num_item = 0;
	stage3_3_monster();
	stage_3_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[33].drop_item[i] = emptylist[i];
		stlista[33].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[33].drop_item[i].ea == 1)
			stlista[33].num_item++;
	}
	stlista[33].chapter = 3;
}

void ditem_3_4() {
	stlista[34].num_item = 0;
	stage3_B_monster();
	stage_3_b_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[34].drop_item[i] = emptylist[i];
		stlista[34].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[34].drop_item[i].ea == 1)
			stlista[34].num_item++;
	}
	stlista[34].chapter = 3;
}

void ditem_4_1() {
	stlista[41].num_item = 0;
	stage4_1_monster();
	stage_4_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[41].drop_item[i] = emptylist[i];
		stlista[41].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[41].drop_item[i].ea == 1)
			stlista[41].num_item++;
	}
	stlista[41].chapter = 4;
}

void ditem_4_2() {
	stlista[42].num_item = 0;
	stage4_2_monster();
	stage_4_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[42].drop_item[i] = emptylist[i];
		stlista[42].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[42].drop_item[i].ea == 1)
			stlista[42].num_item++;
	}
	stlista[42].chapter = 4;
}

void ditem_4_3() {
	stlista[43].num_item = 0;
	stage4_3_monster();
	stage_4_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[43].drop_item[i] = emptylist[i];
		stlista[43].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[43].drop_item[i].ea == 1)
			stlista[43].num_item++;
	}
	stlista[43].chapter = 4;
}

void ditem_4_4() {
	stlista[44].num_item = 0;
	stage4_4_monster();
	stage_4_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[44].drop_item[i] = emptylist[i];
		stlista[44].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[44].drop_item[i].ea == 1)
			stlista[44].num_item++;
	}
	stlista[44].chapter = 4;
}

void ditem_4_5() {
	stlista[45].num_item = 0;
	stage4_B_monster();
	stage_4_b_ditem(dilist);
	for (int i = 0; i < 10; i++) {
		stlista[45].drop_item[i] = emptylist[i];
		stlista[45].drop_item[i] = dilist[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlista[45].drop_item[i].ea == 1)
			stlista[45].num_item++;
	}
	stlista[45].chapter = 4;
}