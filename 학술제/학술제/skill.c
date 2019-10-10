
#include<stdio.h>
#include<string.h>
#include"skill.h"

SKILL slist[32] = { 0 };

void skill_set() {

	strcpy(slist[1].name, "����");
	strcpy(slist[1].info, "�����Ͽ� ���� ���� �մϴ�.");
	strcpy(slist[2].name, "��Ÿ");
	strcpy(slist[2].info, "������ �ϰ��� �����ϴ�.");
	strcpy(slist[3].name, "���� ����");
	strcpy(slist[3].info, "�� ����� �� �� �����մϴ�.");
	strcpy(slist[4].name, "Ʈ���� ����");
	strcpy(slist[4].info, "�� ����� �� �� �����մϴ�.");
	strcpy(slist[5].name, "������ ��");
	strcpy(slist[5].info, "��ü ��󿡰� ���� ���ظ� �����ϴ�.");
	strcpy(slist[6].name, "������ ��");
	strcpy(slist[6].info, "��ü ��󿡰� ���ظ� �����ϴ�.");
	strcpy(slist[7].name, "������ ��");
	strcpy(slist[7].info, "��ü ��󿡰� ������ ���ظ� �����ϴ�.");


	strcpy(slist[11].name, "��Ÿ");
	strcpy(slist[11].info, "������ �ϰ��� �����ϴ�.");
	strcpy(slist[12].name, "�� ��Ÿ");
	strcpy(slist[12].info, "�� ������ �ϰ��� �����ϴ�.");
	strcpy(slist[13].name, "������(����)");
	strcpy(slist[13].info, "��ü ��󿡰� ���ظ� �����ϴ�.");
	strcpy(slist[14].name, "����(2��)");
	strcpy(slist[14].info, "����� 2�ϵ��� �ൿ �Ҵ� ���·� ����ϴ�.");
	strcpy(slist[15].name, "��������(1��)");
	strcpy(slist[15].info, "��� ����� 1�ϵ��� �ൿ �Ҵ� ���·� ����ϴ�."); //46
	strcpy(slist[16].name, "���� ���� 1��");
	strcpy(slist[16].info, "1���� ������ ���Ƴ��ϴ�.");
	strcpy(slist[17].name, "���� ���� 2��");
	strcpy(slist[17].info, "2���� ������ ���Ƴ��ϴ�.");


	strcpy(slist[21].name, "��Ÿ");
	strcpy(slist[21].info, "������ �ϰ��� �����ϴ�.");
	strcpy(slist[22].name, "�ʱ� ȸ��");
	strcpy(slist[22].info, "�Ʊ� �Ѹ��� ���� ȸ����ŵ�ϴ�.");
	strcpy(slist[23].name, "�߱� ȸ��");
	strcpy(slist[23].info, "�Ʊ� �Ѹ��� ȸ����ŵ�ϴ�.");
	strcpy(slist[24].name, "��� ȸ��");
	strcpy(slist[24].info, "�Ʊ� �Ѹ��� ���� ȸ����ŵ�ϴ�.");
	strcpy(slist[25].name, "�ʱ� ��ü��");
	strcpy(slist[25].info, "��ü �Ʊ��� ���� ȸ����ŵ�ϴ�.");
	strcpy(slist[26].name, "�߱� ��ü��");
	strcpy(slist[26].info, "��ü �Ʊ��� ȸ����ŵ�ϴ�.");
	strcpy(slist[27].name, "��� ��ü��");
	strcpy(slist[27].info, "��ü �Ʊ��� ���� ȸ����ŵ�ϴ�.");
	strcpy(slist[28].name, "���� ȸ��");
	strcpy(slist[28].info, "�Ʊ��� ������ ȸ����ŵ�ϴ�.");
	strcpy(slist[29].name, "��ü ���� ȸ��");
	strcpy(slist[29].info, "��ü �Ʊ��� ������ ȸ����ŵ�ϴ�.");
	strcpy(slist[30].name, "��ü�� + ���� ȸ��");
	strcpy(slist[30].info, "��ü �Ʊ��� ü�°� ������ ȸ����ŵ�ϴ�.");


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
	slist[14].diff_mp = 20; //����
	slist[15].add_att = 0;
	slist[15].diff_mp = 50;	//��������
	slist[16].add_att = 0;
	slist[16].diff_mp = 20;	//����
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