// made by ������

#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

void print_initial_disp();

void print_initial_disp() {
	char a;
	while (1) {
		system("cls");
		printf("\n\n\n");
		printf("                  ��������  ��  ��              ��              ��������  ��\n");
		printf("                        ��        ��  ��            ��  ��                      ���  ��\n");
		printf("                        ��        ��  ��          ��      ��                  ���    ����\n");
		printf("                      ��  ��      ��  ��        ��          ��              ���      ��\n");
		printf("                      ��  ��      ����      ��              ��          ���        ��\n");
		printf("                    ��      ��    ��  ��    ������������        ��������\n");
		printf("                    ��      ��    ��  ��              ��                ��              ��\n");
		printf("                  ��          ��  ��  ��              ��                ��              ��\n");
		printf("                  ��          ��  ��  ��              ��                  ��������\n");
		printf("\n\n");
		printf("                                                      ��            ��        ��                          ��\n");
		printf("                                    ���������  ��            ��        ��        ���������  ��\n");
		printf("                                        ��    ��      ��      ��������  ��                    ���  ��\n");
		printf("                                        ��    ��      ��          ����      ��                  ���    ��\n");
		printf("                                        ��    ��      ��        ���  ���    ��                ���      ��\n");
		printf("                                        ��    ��      ��      ���      ���  ����          ���        ��\n");
		printf("                                        ��    ��      ��      ��          ��  ��            ���          ��\n");
		printf("                                    ���������  ��      ���      ���  ��          ���            ��\n");
		printf("                                                      ��        ���  ���    ��        ���              ��\n");
		printf("                                                                  ����      ��                            \n");
		printf("\n\n\n");
		printf("                                                       1. ���� ����\n\n");
		printf("                                                       2. ���� ����\n\n\n");
		printf("                                            ������������������������������������������������������������������������\n");
		printf("                                            ��  ���ϴ� �޴��� ���ڸ� �Է��ϼ��� ��\n");

		a = _getch();
		if (a == '1')
			break;
		if (a == '2')
			exit(0);
		else
			continue;
	}
}