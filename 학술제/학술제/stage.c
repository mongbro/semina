// made by ±Ë¡æ¿∫

#include<stdio.h>
#include<string.h>
#include"item.h"
#include"monster.h"
#include"stage.h"

STAGE stlist[5] = { 0 };

void prologue_stage() {
	stlist[0].num_item = 0;
	prologue_monster(mlist);
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
