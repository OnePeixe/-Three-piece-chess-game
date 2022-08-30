#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋

#include "game.h"
//游戏，整个算法的实习
void game()
{
	char ret=0;
	//棋盘
	char board[ROW][COL] = {0};	//棋盘一开始全部是空格
	//初始化棋盘
	Init_Board(board, ROW, COL);
	//打印
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//玩家走
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家输赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑输赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新开始！\n");
			break;
		}
	} while (input);
}
int main(void)
{
	test();
	return 0;
}