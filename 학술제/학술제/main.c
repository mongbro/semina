// made by ������ & ������ & ������

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"map.h"
#include"start_display.h"
#include"character.h"
#include"menu.h"
#include"monster.h"
#include"skill.h"
#include"stage.h"

int main() {
	skill_set();
	all_item();
	initial_exp();
	initial_charac(clist, slist);
	print_initial_disp();
	stlist[0].is_clear = 1;
	stlist[1].is_clear = 1;
	//stlist[2].is_clear = 1;
	//stlist[3].is_clear = 1;
	while (1) {
		char a;
		system("cls");
		printf("\n");
		printf("  �����������������������������������������������������������������\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                   ���ѷα׸� �����Ͻðڽ��ϱ�?      (Y or N)                                               ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                          ��  ���ѷα׿����� ������ ����Ǵ� ��İ� �⺻���� ������ ����˴ϴ�.                             ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                          ��  ���ѷα׿����� ĳ���͸� ������� ������ �� �����ϴ�.                                          ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                          ��  N�� �����ϸ� ���ѷα׸�  �ǳʶٰ� ���� ������ �����մϴ�.                                     ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                          ��  ù �÷��̶�� ���ѷα׸� ���� �ϴ°��� �����մϴ�.                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  ��                                                                                                                            ��\n");
		printf("  �����������������������������������������������������������������\n");
		check_exp();
		a = (_getch());
		if (a == 'y' || a == 'Y') {
			//=====================        ���ѷα� ����        ==============================
			prologue();
			//=====================        ���ѷα� ����        ==============================
			break;
		}
		if(a=='n'||a=='N')
			break;
	}

	//=====================          ������ ����         ===========================

	//=====================          �׽�Ʈ ����         ===========================








	//=====================          �׽�Ʈ ����         ===========================
	town(clist, ilist);

	//=====================          ������ ����         ===========================
}