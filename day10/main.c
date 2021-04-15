#include"mine.h"
static void Menu(){
	printf("#################\n");
	printf(" 欢迎来到扫雷游戏！\n");
	printf("#################\n");
	printf(" 1.Play    2.Exit \n");
	printf("#################\n");
	printf("Please Select: ");
}
int main()
{
	int quit = 0;
	while (!quit){
		int select = 0;
		Menu();
		scanf_s("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("再试一次？\n");
			break;
		case 2:
			quit = 1;
			printf("欢迎下次挑战！\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
			break;
		}
	}
		system("pause");
		return 0;
}