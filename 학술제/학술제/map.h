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
void c_choice(int stnum);
void c_attack(int cnum, int stnum);
void cs_attack(int cnum, int snum, int stnum);
void c_skill(int cnum, int stnum);
void turn_player();
void turn_monster();
void enter_dungeon1();
void enter_dungeon2();
void enter_dungeon3();
void enter_dungeon4();
void choice_stage();
void double_attack(int cnum, int snum, int stnum);
void wide_attack(int cnum, int snum, int stnum);
void stun_attack(int cnum, int snum, int stnum);
void armor(int cnum, int snum);
void m_choice();
void stun(int mnum);
void hit_monster(int cnum, int mnum, int stnum);
void statp_check();
void statm_check();
void character_hp_heal(int cnum, int snum);
void all_character_hp_heal(int cnum, int snum);
void character_mp_heal(int cnum, int snum);
void all_character_mp_heal(int cnum, int snum);
void all_character_hp_mp_heal(int cnum, int snum);

#endif