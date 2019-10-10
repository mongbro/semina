// made by ±Ë¡æ¿∫

#ifndef MAP_H
#define MAP_H

#include<stdio.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"combat.h"
#include"menu.h"
#include"exp.h"

void print_line();
void hit1();
void hit2();
void event_hit();
void print_map();
void print_hp();
void print_choice_mon();
void prologue();
void c_choice();
void c_attack(int cnum);
void cs_attack(int cnum, int snum);
void c_skill(int cnum);
void turn_player();
void turn_monster();
void enter_dungeon1();
void enter_dungeon2();
void enter_dungeon3();
void enter_dungeon4();
void choice_stage();
void double_attack(int cnum, int snum);
void wide_attack(int cnum, int snum);
void stun_attack(int cnum, int snum);
void armor(int cnum, int snum);
void m_choice();
void stun(int mnum);

#endif