// made by ±Ë¡æ¿∫

#ifndef STAGE_H
#define STAGE_H
#include<stdio.h>
#include"item.h"
#include"monster.h"

typedef struct stage {
	int chapter;
	ITEM drop_item[10];
	MON monster[30];
	int num_item;
	int is_clear;
}STAGE;

extern STAGE stlist[5];

#endif