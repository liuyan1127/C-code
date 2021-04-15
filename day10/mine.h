#ifndef _MINE_H_
#define _MINE_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 6
#define COL 6
#define NUM 4
void Game();
void InitBoard(char board[][COL], int row, int col, char elem);
void SetMine(char mine[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
char GetNum(char mine[][COL], int x, int y);
#endif




