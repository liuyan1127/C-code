#include"mine.h"
void InitBoard(char board[][COL], int row, int col, char elem){
	int i = 0;
	for (; i < row; i++){
		int j = 0;
		for (; j < col; j++){
			board[i][j] = elem;
		}
	}
}
void SetMine(char mine[][COL], int row, int col){
	int n = NUM;
	while (n){
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (mine[x][y] == '1'){
			continue;
		}
		mine[x][y] = '1';
		n--;
	}
}
void ShowBoard(char board[][COL], int row, int col){
	int i = 1;
	printf(" ");
	for (; i <= col - 2; i++){
		printf("%-2d|", i);
	}
		printf("\n");
		for (i = 1; i <= col -2; i++){
			printf("%3s", "---");
		}
		printf("--\n");
		for (i = 1; i <= row - 2;i++){
			printf("%2d|", i);
			int j = 1;
			for (; j < col - 2; j++){
				printf("%-2c|", board[i][j]);
			}
			printf("\n");
			for (j = 1; j < col - 2; j++){
				printf("%3s","---");
			}
			printf("--\n");
	}
}
char GetNum(char mine[][COL], int x, int y){
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + \
		mine[x][y - 1] + mine[x][y + 1] + \
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7 * '0';
}
void Game(){
	srand((unsigned long)time(NULL));
	char board[ROW][COL];
	char mine[ROW][COL];
	InitBoard(board,ROW,COL, '*');
	InitBoard(mine, ROW, COL, '0');
	SetMine(mine, ROW, COL);
	int count = (ROW - 2)*(COL - 2) - NUM;
	do{
		system("cls");
		int x = 0;
		int y = 0;
		ShowBoard(board, ROW, COL);
		printf("��������Ҫɨ��λ�ã�");
		scanf_s("%d %d", &x, &y);
		if (x<1 || x>10 || y<1 || y>10){
			printf("λ����������������λ�ã�\n");
			Sleep(1000);
			continue;
		}
		if (board[x][y] != '*'){
			printf("λ���Ѿ�ɨ����������ѡ��λ�ã�\n");
			Sleep(1000);
			continue;
		}
		if (mine[x][y] == '0'){
			count--;
			char num = GetNum(mine, x, y);
			board[x][y] = num;
		}
		else{
			printf("�������λ�ã�%d,%d)����!\n", x, y);
			break;
		}
		}while (count > 0);
		char*result = NULL;
		if (count > 0){
			result = "�㱻ը���ˣ�ɨ�׽�����\n";
		}
		else{
			result = "��ɹ��ˣ�ɨ�׽�����\n";
		}
		printf("#################\n");
		printf("%s", result);
		printf("#################\n");
		ShowBoard(mine, ROW, COL);
	}