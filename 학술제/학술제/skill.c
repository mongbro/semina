
#include<stdio.h>
#include<string.h>
#include"skill.h"
#include"character.h"

SKILL slist[32] = { 0 };
SKILL empty_character_slist[1] = { 0 };  //스킬 장착 해제시 캐릭터 스킬 칸에 이걸넣어서 아무것도 없게 할거임.

void skill_set() {
	for (int i = 1; i < 31; i++) {
		slist[i].price = 0;
		slist[i].add_att = 0;
		slist[i].add_def = 0;
		slist[i].add_hp = 0;
		slist[i].add_mp = 0;
		slist[i].diff_mp = 0;
		slist[i].ea = 0;
		slist[i].index = -1;
	}

	for (int i = 1; i < 31; i++) {
		slist[i].num = i;
	}

	strcpy(slist[1].name, "돌격");
	strcpy(slist[1].info, "돌격하여 적을 공격함");
	strcpy(slist[2].name, "강타");
	strcpy(slist[2].info, "강력한 일격을 날림");
	strcpy(slist[3].name, "더블 어택");
	strcpy(slist[3].info, "한 대상을 두 번 공격함");
	strcpy(slist[4].name, "트리플 어택");
	strcpy(slist[4].info, "한 대상을 세 번 공격함");
	strcpy(slist[5].name, "광역기 하");
	strcpy(slist[5].info, "전체 대상에게 약한 피해를 입힘");
	strcpy(slist[6].name, "광역기 중");
	strcpy(slist[6].info, "전체 대상에게 피해를 입힘");
	strcpy(slist[7].name, "광역기 상");
	strcpy(slist[7].info, "전체 대상에게 강력한 피해를 입힘");

	slist[5].price = 60;
	strcpy(slist[11].name, "강타");
	strcpy(slist[11].info, "강력한 일격을 날림");
	strcpy(slist[12].name, "방어막 강타");
	strcpy(slist[12].info, "더 강력한 일격을 날림");
	strcpy(slist[13].name, "광역기(약함)");
	strcpy(slist[13].info, "전체 대상에게 피해를 입힘");
	strcpy(slist[14].name, "스턴(2턴)");
	strcpy(slist[14].info, "대상을 2턴동안 행동 불능 상태로 만듬");
	strcpy(slist[15].name, "광역스턴(1턴)");
	strcpy(slist[15].info, "모든 대상을 1턴동안 행동 불능 상태로 만듬"); //41
	strcpy(slist[16].name, "공격 무시 1번");
	strcpy(slist[16].info, "1번의 공격을 막음");
	strcpy(slist[17].name, "공격 무시 2번");
	strcpy(slist[17].info, "2번의 공격을 막음");


	strcpy(slist[21].name, "강타");
	strcpy(slist[21].info, "강력한 일격을 날림");
	strcpy(slist[22].name, "초급 회복");
	strcpy(slist[22].info, "아군 한명 조금 회복");
	strcpy(slist[23].name, "중급 회복");
	strcpy(slist[23].info, "아군 한명 회복");
	strcpy(slist[24].name, "고급 회복");
	strcpy(slist[24].info, "아군 한명 많이 회복");
	strcpy(slist[25].name, "초급 전체힐");
	strcpy(slist[25].info, "전체 아군 조금 회복");
	strcpy(slist[26].name, "중급 전체힐");
	strcpy(slist[26].info, "전체 아군 회복");
	strcpy(slist[27].name, "고급 전체힐");
	strcpy(slist[27].info, "전체 아군 많이 회복");
	strcpy(slist[28].name, "마나 회복");
	strcpy(slist[28].info, "아군 마나를 회복");
	strcpy(slist[29].name, "전체 마나 회복");
	strcpy(slist[29].info, "전체 아군 마나를 회복");
	strcpy(slist[30].name, "전체힐 + 마나 회복");
	strcpy(slist[30].info, "전체 아군 체력과 마나를 회복");

	slist[1].add_att = 20;
	slist[1].diff_mp = 20;
	slist[2].add_att = 10;
	slist[2].diff_mp = 10;
	slist[3].add_att = 0;
	slist[3].diff_mp = 25;
	slist[4].add_att = 0;
	slist[4].diff_mp = 30;
	slist[5].add_att = 15;
	slist[5].diff_mp = 30;
	slist[6].add_att = 25;
	slist[6].diff_mp = 10;
	slist[7].add_att = 35;
	slist[7].diff_mp = 80;

	slist[11].add_att = 15;
	slist[11].diff_mp = 20;
	slist[12].add_att = 30;
	slist[12].diff_mp = 20;
	slist[13].add_att = 10;
	slist[13].diff_mp = 20;
	slist[14].add_att = 0;
	slist[14].diff_mp = 50; //스턴
	slist[15].add_att = 0;
	slist[15].diff_mp = 80;	//광역스턴
	slist[16].add_att = 0;
	slist[16].diff_mp = 40;	//막기
	slist[17].add_att = 0;
	slist[17].diff_mp = 75;

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
	for (int i = 1; i < 31; i++) {
		slist[i].ea = 1;
	}
}

void skill_choice() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                                ■                                               ■■■■■■■■   ■                      ■\n");
		printf("  ■                              ■■■                                                           ■   ■                      ■\n");
		printf("  ■                            ■■  ■■                                           ■■■■■■■■   ■                      ■\n");
		printf("  ■                          ■■      ■■                                                       ■   ■                      ■\n");
		printf("  ■                        ■■          ■■                                                     ■   ■                      ■\n");
		printf("  ■                      ■■              ■■                                                        ■                      ■\n");
		printf("  ■                    ■■                  ■■                                      ■■■■■■■■■                      ■\n");
		printf("  ■                  ■■                      ■■                                                    ■                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■              ■■■■■■■■■■■■■■■■■■■                                ■                                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      1. 구매          2. 장착                                                                                              ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		if (a == '1')
			skill_store_choice_buy();
		if (a == '2')
			skill_inventory_choice();
		if (a == 'b')
			town();
	}
}

//스킬함수 정의


void skill_store_choice_buy() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                    ■                      ■\n");
		printf("  ■                                ■                                               ■■■■■■■■   ■                      ■\n");
		printf("  ■                              ■■■                                                           ■   ■                      ■\n");
		printf("  ■                            ■■  ■■                                           ■■■■■■■■   ■                      ■\n");
		printf("  ■                          ■■      ■■                                                       ■   ■                      ■\n");
		printf("  ■                        ■■          ■■                                                     ■   ■                      ■\n");
		printf("  ■                      ■■              ■■                                                        ■                      ■\n");
		printf("  ■                    ■■                  ■■                                      ■■■■■■■■■                      ■\n");
		printf("  ■                  ■■                      ■■                                                    ■                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■              ■■■■■■■■■■■■■■■■■■■                                ■                                      ■\n");
		printf("  ■                                                                                    ■■■■■■■■■                      ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                    ■■■■    ■        ■   ■          ■                                               ■\n");
		printf("  ■                                    ■      ■  ■        ■     ■      ■                                                 ■\n");
		printf("  ■                                    ■■■■    ■        ■       ■  ■                                                   ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■      ■  ■        ■         ■                                                     ■\n");
		printf("  ■                                    ■■■■      ■■■■           ■                                                     ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                           1. 조장 전용 스킬          2. 서기 전용 스킬          3. 지갑 전용 스킬                          ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		if (a == '1')
			skill_store_choice_buy1();
		if (a == '2')
			skill_store_choice_buy2();
		if (a == '3')
			skill_store_choice_buy3();
		if (a == 'b')
			break;
	}
}

void skill_store_choice_buy1() {
	while (1) {
		char a;
		int index = 1;

		for (int i = 0; i < 8; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                             능력치                   소모 마나                  가격                   ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 1; i < 8; i++) {
			if (slist[i].ea == 0) {
				printf("  ■                                                                                                                            ■\n");
				printf("  ■   %d. %-20s                  추가 공격력 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
				printf("  ■                                                                                                                            ■\n");
				slist[i].index = index;
				index++;
			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());
		for (int i = 1; i < 8; i++) {
			if (a == slist[i].index + 48)
				s_buy1(slist[i].num);
		}
		if (a == 'b')
			break;
	}
}

void skill_store_choice_buy2() {
	while (1) {
		char a;
		int index = 1;

		for (int i = 11; i < 18; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                             능력치                   소모 마나                  가격                   ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 11; i < 18; i++) {
			if (slist[i].ea == 0) {
				printf("  ■                                                                                                                            ■\n");
				printf("  ■   %d. %-20s                  추가 공격력 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
				printf("  ■                                                                                                                            ■\n");
				slist[i].index = index;
				index++;
			}

		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());

		for (int i = 11; i < 18; i++) {
			if (a == slist[i].index + 48)
				s_buy2(slist[i].num);
		}

		if (a == 'b')
			break;
	}
}

void skill_store_choice_buy3() {
	while (1) {
		char a;
		int index = 1;

		for (int i = 21; i < 31; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("\n");

		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                             능력치                   소모 마나                  가격                   ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 21; i < 31; i++) {
			if (slist[i].ea == 0) {
				switch (i) {
				case 21:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                  추가 공격력 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_att, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 22:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 23:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 24:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 25:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 26:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 27:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_hp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 28:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 29:
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                      회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
					printf("  ■                                                                                                                            ■\n");
					slist[i].index = index;
					index++;
					break;
				case 30:
					if (index == 10) {
						printf("  ■                                                                                                                            ■\n");
						printf("  ■   %d. %-20s                     회복량 : %2d            소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ■                                                                                                                            ■\n");
						slist[i].index = 0;
						index++;
						break;
					}
					else {
						printf("  ■                                                                                                                            ■\n");
						printf("  ■   %d. %-20s                       회복량 : %2d           소모 마나 : %2d           %3d  골드                   ■\n", index, slist[i].name, slist[i].add_mp, slist[i].diff_mp, slist[i].price);
						printf("  ■                                                                                                                            ■\n");
						slist[i].index = index;
						index++;
					}

				}

			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요(10은 0을 선택해 주세요.).\n\n  뒤로가기는 'b'를 선택해주세요.");

		a = (_getch());

		for (int i = 21; i < 31; i++) {
			if (a == slist[i].index + 48)
				s_buy3(slist[i].num);
		}

		if (a == 'b')
			break;
	}
}

void s_buy1(int snum) {
	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[snum].ea == 1)
			strcpy(exist, "보유중");
		else
			strcpy(exist, "없음");

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나              보유 여부      가격       ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      %-20s                          추가 공격력 : %2d     소모 마나 : %2d           %6s       %3d 골드     ■\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp, exist, slist[snum].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[snum].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      구매 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= slist[snum].price) {
				gold -= slist[snum].price;
				slist[snum].ea = 1;
				printf(" %20s 을(를) 획득!\n\n  계속 하시려면 아무키나 누르세요.\n", slist[snum].name);
				if (_getch());
				break;
			}
			else {
				printf("  소지금액이 부족합니다!!!\n\n  계속 하시려면 아무키나 누르세요.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void s_buy2(int snum) {
	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[snum].ea == 1)
			strcpy(exist, "보유중");
		else
			strcpy(exist, "없음");

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나              보유 여부      가격       ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      %-20s                          추가 공격력 : %2d     소모 마나 : %2d           %6s       %3d 골드     ■\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp, exist, slist[snum].price);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[snum].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      구매 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= slist[snum].price) {
				gold -= slist[snum].price;
				slist[snum].ea = 1;
				printf(" %20s 을(를) 획득!\n\n  계속 하시려면 아무키나 누르세요.\n", slist[snum].name);
				if (_getch());
				break;
			}
			else {
				printf("  소지금액이 부족합니다!!!\n\n  계속 하시려면 아무키나 누르세요.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void s_buy3(int snum) {
	while (1) {
		system("cls");
		char a;
		char exist[6] = "";

		if (slist[snum].ea == 1)
			strcpy(exist, "보유중");
		else
			strcpy(exist, "없음");

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나              보유 여부      가격       ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (snum == 21) {
			printf("  ■      %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		}
		if (snum > 21 && snum < 28 && snum != 24) {
			printf("  ■      %-20s                           회복량 : %2d         소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		if (snum > 27) {
			printf("  ■      %-20s                           회복량 : %2d         소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_mp, slist[snum].diff_mp);
		}
		if (snum == 24) {
			printf("  ■      %-20s                           회복량 : %2d        소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[snum].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      구매 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                          소지 골드 : %5d                 ■\n", gold);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());
		if (a == '1') {
			if (gold >= slist[snum].price) {
				gold -= slist[snum].price;
				slist[snum].ea = 1;
				printf(" %20s 을(를) 획득!\n\n  뒤로 가시려면 아무키나 누르세요.\n", slist[snum].name);
				if (_getch());
				break;
			}
			else {
				printf("  소지금액이 부족합니다!!!\n\n  계속 하시려면 아무키나 누르세요.\n");
				if (_getch());
				break;
			}
		}
		if (a == '2' || a == 'b')
			break;
	}
}

//스킬 인벤 함수 정의
void skill_inventory_choice() {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■     1. 조장 전용 스킬      ■          ■     2. 서기 전용 스킬      ■          ■     3. 지갑 전용 스킬      ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■                            ■          ■                            ■          ■                            ■    ■\n");
		printf("  ■    ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■          ■■■■■■■■■■■■■■■■    ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  장착하고 싶은 캐릭터를 선택해주세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.\n");
		a = (_getch());
		if (a == '1')
			skill_inventory1();
		if (a == '2')
			skill_inventory2();
		if (a == '3')
			skill_inventory3();
		if (a == 'b')
			skill_choice();
	}
}

void skill_inventory1() {
	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 8; i++) {
			slist[i].index = -1;
		}

		system("cls");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                                                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 1; i < 8; i++) {
			if (slist[i].ea == 1) {
				printf("  ■                                                                                                                            ■\n");
				printf("  ■   %d. %-20s                                                                                                  ■\n", index, slist[i].name);
				printf("  ■                                                                                                                            ■\n");
				slist[i].index = index;
				index++;
			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());

		for (int i = 1; i < 8; i++) {				//내가 누른 키(인덱스)와 스킬 인덱스가 같은지 비교 그리고 같으면 
			if (a == slist[i].index + 48)			//해당 스킬 인덱스의 스킬넘버를 던져줌
				skill_inven_info1(slist[i].num);
		}
		if (a == 'b')
			skill_inventory_choice();
	}
}

void skill_inventory2() {
	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 8; i++) {
			slist[i + 10].index = -1;
		}

		system("cls");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                                                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 1; i < 8; i++) {
			if (slist[i + 10].ea == 1) {
				printf("  ■                                                                                                                            ■\n");
				printf("  ■   %d. %-20s                                                                                                  ■\n", index, slist[i + 10].name);
				printf("  ■                                                                                                                            ■\n");
				slist[i + 10].index = index;
				index++;
			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  장착하고 싶은 캐릭터를 선택해주세요.\n  스킬은 장착하지 않으면 던전에서 사용할 수 없습니다.\n  스킬은 캐릭터당 2개씩만 장착할 수 있습니다.\n  뒤로가기는 'b'를 선택해주세요.\n");
		a = (_getch());

		for (int i = 1; i < 8; i++) {				//내가 누른 키(인덱스)와 스킬 인덱스가 같은지 비교 그리고 같으면 
			if (a == slist[i + 10].index + 48)			//해당 스킬 인덱스의 스킬넘버를 던져줌
				skill_inven_info2(slist[i + 10].num);
		}
		if (a == 'b')
			skill_inventory_choice();
	}
}

void skill_inventory3() {
	while (1) {
		int index = 1;
		char a;

		for (int i = 1; i < 11; i++) {
			slist[i + 20].index = -1;
		}

		system("cls");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■                이름                                                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		for (int i = 1; i < 11; i++) {
			if (slist[i + 20].ea == 1) {
				if (index != 10) {
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                                                                                                  ■\n", index, slist[i + 20].name);
					printf("  ■                                                                                                                            ■\n");
					slist[i + 20].index = index;
					index++;
					continue;
				}
				if (index == 10) {
					printf("  ■                                                                                                                            ■\n");
					printf("  ■   %d. %-20s                                                                                                 ■\n", index, slist[i + 20].name);
					printf("  ■                                                                                                                            ■\n");
					slist[i + 20].index = 0;
					index++;
				}
			}
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요(10은 0을 선택해 주세요.).\n\n  뒤로가기는 'b'를 선택해주세요.");
		a = (_getch());

		for (int i = 1; i < 11; i++) {				//내가 누른 키(인덱스)와 스킬 인덱스가 같은지 비교 그리고 같으면 
			if (a == slist[i + 20].index + 48)			//해당 스킬 인덱스의 스킬넘버를 던져줌
				skill_inven_info3(slist[i + 20].num);
		}
		if (a == 'b')
			skill_inventory_choice();
	}
}

void skill_inven_info1(int snum) {
	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[snum].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      장비 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());

		if (a == '1') {
			skill_equip1(0, snum);
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void skill_inven_info2(int snum) {
	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[snum].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      장비 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());

		if (a == '1') {
			skill_equip2(1, snum);
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void skill_inven_info3(int snum) {
	while (1) {
		system("cls");
		char a;

		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (snum == 21) {
			printf("  ■      %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_att, slist[snum].diff_mp);
		}
		if (snum > 21 && snum < 28 && snum != 24) {
			printf("  ■      %-20s                           회복량 : %2d         소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		if (snum > 27) {
			printf("  ■      %-20s                           회복량 : %2d         소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_mp, slist[snum].diff_mp);
		}
		if (snum == 24) {
			printf("  ■      %-20s                           회복량 : %2d        소모 마나 : %2d                                     ■\n", slist[snum].name, slist[snum].add_hp, slist[snum].diff_mp);
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      스킬 설명 :                                                                                                           ■\n");
		printf("  ■      %-46s                                                                        ■\n", slist[snum].info);
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■      장비 하시겠습니까?         1. YES        2. NO                                                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n  원하는 메뉴를 선택하세요.\n\n  뒤로가기는 'b'를 선택해주세요.");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		a = (_getch());

		if (a == '1') {
			skill_equip3(2, snum);
		}
		if (a == '2' || a == 'b')
			break;
	}
}

void skill_equip1(int character, int snum) {
	while (1) {
		char a;

		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[0].skill[1].ea == 1) {
			printf("  ■      1. %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                  ■\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", clist[0].skill[1].info);
		}
		else {
			printf("  ■      1. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[0].skill[2].ea == 1) {
			printf("  ■      2. %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                  ■\n", clist[0].skill[2].name, clist[0].skill[2].add_att, clist[0].skill[2].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", clist[0].skill[2].info);
		}
		else {
			printf("  ■      2. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  교체하고 싶은 슬롯을 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
					clist[character].skill[2] = clist[character].skill[1];
					clist[character].skill[1] = slist[snum];
				}
				else
					clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea != 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num) {
				clist[character].skill[2] = empty_character_slist[0];
				clist[character].skill[1] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[1] = slist[snum];
				continue;
			}
		}
		if (a == '2') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[1].num == slist[snum].num && clist[character].skill[2].ea == 1) {
					clist[character].skill[1] = clist[character].skill[2];
					clist[character].skill[2] = slist[snum];
				}
				else
					clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[2].ea == 1 && clist[character].skill[1].ea != 1) {
				clist[character].skill[1] = clist[character].skill[2];
				clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[1].num == slist[snum].num) {
				clist[character].skill[1] = empty_character_slist[0];
				clist[character].skill[2] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[2] = slist[snum];
				continue;
			}
		}
		if (a == 'b')
			skill_inventory1();
	}
}

void skill_equip2(int character, int snum) {
	while (1) {
		char a;

		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[1].skill[1].ea == 1) {
			printf("  ■      1. %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                  ■\n", clist[1].skill[1].name, clist[1].skill[1].add_att, clist[1].skill[1].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", clist[1].skill[1].info);
		}
		else {
			printf("  ■      1. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[1].skill[2].ea == 1) {
			printf("  ■      2. %-20s                          추가 공격력 : %2d     소모 마나 : %2d                                  ■\n", clist[1].skill[2].name, clist[1].skill[2].add_att, clist[1].skill[2].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", clist[1].skill[2].info);
		}
		else {
			printf("  ■      2. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  교체하고 싶은 슬롯을 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
					clist[character].skill[2] = clist[character].skill[1];
					clist[character].skill[1] = slist[snum];
				}
				else
					clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea != 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num) {
				clist[character].skill[2] = empty_character_slist[0];
				clist[character].skill[1] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[1] = slist[snum];
				continue;
			}
		}
		if (a == '2') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[1].num == slist[snum].num && clist[character].skill[2].ea == 1) {
					clist[character].skill[1] = clist[character].skill[2];
					clist[character].skill[2] = slist[snum];
				}
				else
					clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[2].ea == 1 && clist[character].skill[1].ea != 1) {
				clist[character].skill[1] = clist[character].skill[2];
				clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[1].num == slist[snum].num) {
				clist[character].skill[1] = empty_character_slist[0];
				clist[character].skill[2] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[2] = slist[snum];
				continue;
			}
		}
		if (a == 'b')
			skill_inventory2();
	}
}

void skill_equip3(int character, int snum) {
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("  ■              이름                                      능력치             소모 마나                                        ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[2].skill[1].ea == 1) {
			if (clist[2].skill[1].num == 21) {
				printf("  ■      1.%-20s                          추가 공격력 : %2d     소모 마나 : %2d                                   ■\n", clist[2].skill[1].name, clist[2].skill[1].add_att, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 21 && clist[2].skill[1].num < 28 && clist[2].skill[1].num != 24) {
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num > 27) {
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[1].name, clist[2].skill[1].add_mp, clist[2].skill[1].diff_mp);
			}
			if (clist[2].skill[1].num == 24)
				printf("  ■      1.%-20s                          회복량 : %2d      소모 마나 : %2d                                      ■\n", clist[2].skill[1].name, clist[2].skill[1].add_hp, clist[2].skill[1].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", clist[2].skill[1].info);
		}
		else {
			printf("  ■      1. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		if (clist[2].skill[2].ea == 1) {
			if (clist[2].skill[2].num == 21) {
				printf("  ■      2.%-20s                          추가 공격력 : %2d     소모 마나 : %2d                                   ■\n", clist[2].skill[2].name, clist[2].skill[2].add_att, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 21 && clist[2].skill[2].num < 28 && clist[2].skill[2].num != 24) {
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num > 27) {
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                       ■\n", clist[2].skill[2].name, clist[2].skill[2].add_mp, clist[2].skill[2].diff_mp);
			}
			if (clist[2].skill[2].num == 24)
				printf("  ■      2.%-20s                          회복량 : %2d      소모 마나 : %2d                                      ■\n", clist[2].skill[2].name, clist[2].skill[2].add_hp, clist[2].skill[2].diff_mp);
			printf("  ■                                                                                                                            ■\n");
			printf("  ■      스킬 설명 :                                                                                                           ■\n");
			printf("  ■      %-46s                                                                        ■\n", clist[2].skill[2].info);
		}
		else {
			printf("  ■      2. 장비 중인 스킬 없음                                                                                                ■\n");
		}
		printf("  ■                                                                                                                            ■\n");
		printf("  ■                                                                                                                            ■\n");
		printf("  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  교체하고 싶은 슬롯을 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n");

		a = (_getch());

		if (a == '1') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
					clist[character].skill[2] = clist[character].skill[1];
					clist[character].skill[1] = slist[snum];
				}
				else
					clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea != 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num && clist[character].skill[1].ea == 1) {
				clist[character].skill[2] = clist[character].skill[1];
				clist[character].skill[1] = slist[snum];
			}
			if (clist[character].skill[2].num == slist[snum].num) {
				clist[character].skill[2] = empty_character_slist[0];
				clist[character].skill[1] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[1] = slist[snum];
				continue;
			}
		}
		if (a == '2') {
			if (clist[character].skill[1].ea == 1 && clist[character].skill[2].ea == 1) {
				if (clist[character].skill[1].num == slist[snum].num && clist[character].skill[2].ea == 1) {
					clist[character].skill[1] = clist[character].skill[2];
					clist[character].skill[2] = slist[snum];
				}
				else
					clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[2].ea == 1 && clist[character].skill[1].ea != 1) {
				clist[character].skill[1] = clist[character].skill[2];
				clist[character].skill[2] = slist[snum];
			}
			if (clist[character].skill[1].num == slist[snum].num) {
				clist[character].skill[1] = empty_character_slist[0];
				clist[character].skill[2] = slist[snum];
				continue;
			}
			else {
				clist[character].skill[2] = slist[snum];
				continue;
			}
		}
		if (a == 'b')
			skill_inventory3();
	}
}