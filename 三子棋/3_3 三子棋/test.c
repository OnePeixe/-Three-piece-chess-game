#define _CRT_SECURE_NO_WARNINGS 1
//����������

#include "game.h"
//��Ϸ�������㷨��ʵϰ
void game()
{
	char ret=0;
	//����
	char board[ROW][COL] = {0};	//����һ��ʼȫ���ǿո�
	//��ʼ������
	Init_Board(board, ROW, COL);
	//��ӡ
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//�����
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж������Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ�����Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����������¿�ʼ��\n");
			break;
		}
	} while (input);
}
int main(void)
{
	test();
	return 0;
}