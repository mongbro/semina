#ifndef ITEM_H
#define ITEM_H
#include<stdio.h>
#include<string.h>

typedef struct item {
	char name[20];
	int add_readership;
	int add_noteship;
	int add_wealth;
	int add_hp;
	int add_mp;
	int ea;					//해당 아이템의 개수
	int index;
	int num;
	int price;
}ITEM;

extern int gold;
extern ITEM ilist[41];				//인벤토리에 있는 아이템
extern ITEM aitem[41];				//모든 종류의 아이템
extern ITEM dilist[10];			//드랍되는 아이템
extern ITEM emptylist[1];

void all_item();
void prologue_ditem(ITEM ditem[10]);
void all_0_item();
void all_1_item();
void all_2_item();
void all_3_item();

#endif