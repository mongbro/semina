// made by 김종은

#ifndef STAGE_H
#define STAGE_H
#include<stdio.h>
#include"item.h"
#include"monster.h"

typedef struct stage {
	int chapter;
	ITEM drop_item[10];
	MON monster[30];
	int num_item;		//드랍템 총 개수
	int is_clear;		//스테이지 열렸는지 여부
}STAGE;

extern STAGE stlist[5];
extern STAGE stlista[46];

void stage_prologue();
void ditem_1_1();
void ditem_1_2();
void ditem_1_3();
void ditem_1_4();

void ditem_2_1();
void ditem_2_2();
void ditem_2_3();
void ditem_2_4();
void ditem_2_5();

void ditem_3_1();
void ditem_3_2();
void ditem_3_3();
void ditem_3_4();

void ditem_4_1();
void ditem_4_2();
void ditem_4_3();
void ditem_4_4();
void ditem_4_5();

#endif