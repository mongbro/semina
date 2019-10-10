// made by ±Ë¡æ¿∫

#ifndef MENU_H
#define MENU_H

#include<stdio.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"combat.h"
#include"map.h"
#include"exp.h"

void town();
void dun_menu();
void town_menu();
void town_inventory0();
void town_inventory1();
void town_inventory2();
void town_inventory3();
void town_inventory4();
void town_inventory5();
void equip1(int cnum, int inum);
void equip2(int cnum, int inum);
void equip3(int cnum, int inum);
void town_inf_cha();
void town_inf_cha_1();
void town_inf_cha_2();
void town_inf_cha_3();
void dun_inventory();
void dun_inf_cha();
void dun_inf_mon();
void use_item(int inum);
void effect_item(int cnum, int inum);
void prologue_dun_inventory();
int check_hpmp(int cnum, int inum);
void item_store_choice1();
void item_store_choice_buy();
void item_store_choice_buy1();
void item_store_choice_buy2();
void item_store_choice_buy3();
void item_store_choice_buy0();
void item_store_choice_sell();
void item_store_choice_sell0();
void item_store_choice_sell1();
void item_store_choice_sell2();
void item_store_choice_sell3();
void buy0(int inum);
void buy1(int inum);
void buy2(int inum);
void buy3(int inum);
void sell0(int inum);
void sell1(int inum);
void sell2(int inum);
void sell3(int inum);

#endif