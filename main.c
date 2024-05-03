#include "MineSweeper.h"

void menu()
{
	printf("====================================\n");
	printf("||           1.play               ||\n");
	printf("||           0.exit               ||\n");
	printf("====================================\n");
}

void game()
{
	//printf("ɨ��\n");
	//�洢�׵���Ϣ
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please select:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit game.\n");
			break;
		default:
			printf("Select again. \n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}
