
#include<stdio.h>
#include<string.h>
#include"skill.h"

SKILL slist[32] = { 0 };

void skill_set() {

	strcpy(slist[1].name, "돌격");
	strcpy(slist[1].info, "돌격하여 적을 공격 합니다.");
	strcpy(slist[2].name, "강타");
	strcpy(slist[2].info, "강력한 일격을 날립니다.");
	strcpy(slist[3].name, "더블 어택");
	strcpy(slist[3].info, "한 대상을 두 번 공격합니다.");
	strcpy(slist[4].name, "트리플 어택");
	strcpy(slist[4].info, "한 대상을 세 번 공격합니다.");
	strcpy(slist[5].name, "광역기 하");
	strcpy(slist[5].info, "전체 대상에게 약한 피해를 입힙니다.");
	strcpy(slist[6].name, "광역기 중");
	strcpy(slist[6].info, "전체 대상에게 피해를 입힙니다.");
	strcpy(slist[7].name, "광역기 상");
	strcpy(slist[7].info, "전체 대상에게 강력한 피해를 입힙니다.");


	strcpy(slist[11].name, "강타");
	strcpy(slist[11].info, "강력한 일격을 날립니다.");
	strcpy(slist[12].name, "방어막 강타");
	strcpy(slist[12].info, "더 강력한 일격을 날립니다.");
	strcpy(slist[13].name, "광역기(약함)");
	strcpy(slist[13].info, "전체 대상에게 피해를 입힙니다.");
	strcpy(slist[14].name, "스턴(2턴)");
	strcpy(slist[14].info, "대상을 2턴동안 행동 불능 상태로 만듭니다.");
	strcpy(slist[15].name, "광역스턴(1턴)");
	strcpy(slist[15].info, "모든 대상을 1턴동안 행동 불능 상태로 만듭니다."); //46
	strcpy(slist[16].name, "공격 무시 1번");
	strcpy(slist[16].info, "1번의 공격을 막아냅니다.");
	strcpy(slist[17].name, "공격 무시 2번");
	strcpy(slist[17].info, "2번의 공격을 막아냅니다.");


	strcpy(slist[21].name, "강타");
	strcpy(slist[21].info, "강력한 일격을 날립니다.");
	strcpy(slist[22].name, "초급 회복");
	strcpy(slist[22].info, "아군 한명을 조금 회복시킵니다.");
	strcpy(slist[23].name, "중급 회복");
	strcpy(slist[23].info, "아군 한명을 회복시킵니다.");
	strcpy(slist[24].name, "고급 회복");
	strcpy(slist[24].info, "아군 한명을 많이 회복시킵니다.");
	strcpy(slist[25].name, "초급 전체힐");
	strcpy(slist[25].info, "전체 아군을 조금 회복시킵니다.");
	strcpy(slist[26].name, "중급 전체힐");
	strcpy(slist[26].info, "전체 아군을 회복시킵니다.");
	strcpy(slist[27].name, "고급 전체힐");
	strcpy(slist[27].info, "전체 아군을 많이 회복시킵니다.");
	strcpy(slist[28].name, "마나 회복");
	strcpy(slist[28].info, "아군의 마나를 회복시킵니다.");
	strcpy(slist[29].name, "전체 마나 회복");
	strcpy(slist[29].info, "전체 아군의 마나를 회복시킵니다.");
	strcpy(slist[30].name, "전체힐 + 마나 회복");
	strcpy(slist[30].info, "전체 아군의 체력과 마나를 회복시킵니다.");


	slist[1].add_att = 20;
	slist[1].diff_mp = 20;
	slist[2].add_att = 10;
	slist[2].diff_mp = 10;
	slist[3].add_att = 20;
	slist[3].diff_mp = 25;
	slist[4].add_att = 20;
	slist[4].diff_mp = 30;
	slist[5].add_att = 15;
	slist[5].diff_mp = 30;
	slist[6].add_att = 25;
	slist[6].diff_mp = 50;
	slist[7].add_att = 35;
	slist[7].diff_mp = 80;

	slist[11].add_att = 15;
	slist[11].diff_mp = 20;
	slist[12].add_att = 30;
	slist[12].diff_mp = 20;
	slist[13].add_att = 10;
	slist[13].diff_mp = 20;
	slist[14].add_att = 0;
	slist[14].diff_mp = 20; //스턴
	slist[15].add_att = 0;
	slist[15].diff_mp = 50;	//광역스턴
	slist[16].add_att = 0;
	slist[16].diff_mp = 20;	//막기
	slist[17].add_att = 0;
	slist[17].diff_mp = 35;

	slist[21].add_att = 10;
	slist[21].diff_mp = 10;
	slist[22].add_hp = 20;
	slist[22].diff_mp = 20;
	slist[23].add_hp = 50;
	slist[23].diff_mp = 25;
	slist[24].add_hp = 100;
	slist[24].diff_mp = 30;
	slist[25].add_hp = 20;
	slist[25].diff_mp = 30;
	slist[26].add_hp = 30;
	slist[26].diff_mp = 35;
	slist[27].add_hp = 40;
	slist[27].diff_mp = 40;
	slist[28].add_mp = 50;
	slist[28].diff_mp = 30;
	slist[29].add_mp = 30;
	slist[29].diff_mp = 50;
	slist[30].add_hp = 50;
	slist[30].add_mp = 50;
	slist[30].diff_mp = 80;
}

void initial_skill() {
	slist[1].ea = 1;
	slist[2].ea = 1;

	slist[11].ea = 1;
	slist[12].ea = 1;

	slist[21].ea = 1;
	slist[22].ea = 1;
}