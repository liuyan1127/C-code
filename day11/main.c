#include"chess.h"
void Menu()
{
	printf("欢迎来到三子棋！\n");
	printf("  1.Play     2.Exit  \n");
	printf("Please Enter Select: ");
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
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("Enter Error!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
