// made by 김종은

#ifndef COMBAT_H
#define COMBAT_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"
#include"stage.h"
#include"map.h"
#include"menu.h"
#include"exp.h"

void damage_character_to_monster(int cnum, int mnum, int snum);			//캐릭터배열, 몬스터배열, 캐릭터번호, 몬스터번호, 스킬번호
void damage_monster_to_character(int cnum, int mnum);
int choice_monster_to_character();
int check_exter();
int check_exter_boss(int stage);
void kill_monster(int cnum, int stnum);
void kill_character(int mnum);
void prologue_kill_monster(int cnum, int stnum);
int hit_damage;

#endif