#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define	COL 3
//棋盘初始化
void Init_Board(char board[ROW][COL], int row, int col);
//打印棋盘，更新状态
void DisplayBoard(char board[ROW][COL],int row,int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//高速我们四种游戏状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q'
//继续   - 'C'
char IsWin(char board[ROW][COL], int row, int col);
