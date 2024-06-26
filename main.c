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
	//printf("扫雷\n");
	//存储雷的信息
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
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
