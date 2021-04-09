#include<stdio.h>
#include<windows.h>

#include<time.h>
#include<string.h>
#include<stdlib.h>
void Menu()
{
	printf("###################\n");
	printf("1.Guess   2.Quit\n");
	printf("###################\n");
	printf("请选择：");
}
void Game()
{
	printf("游戏开始!\n");
	srand((unsigned int)time(NULL));
	int data = rand() % 100 + 1;
	printf("规则:请随机选择[1,100]之间的数字，快来试试你能猜对吗\n");
	for (;;){
		printf("Guess:");
		int x = 0;
		scanf_s("%d", &x);
		if (x > data){
			printf("你猜大了!\n");
		}
		else if (x < data){
			printf("你猜小了!\n");
		}
		else{
			printf("恭喜你，猜对了! %d\n", x);
			break;
		}
	}
	printf("游戏结束!\n");
}
int main()
{
	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf_s("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("要不要再试一次?\n");
			break;
		case 2:
			quit = 1;
			printf("Game End!\n");
			break;
		default:
			printf("你的输入有误，请重新输入!\n");
			break;
		}
	}

}