#include"mine.h"
static void Menu(){
	printf("#################\n");
	printf(" ��ӭ����ɨ����Ϸ��\n");
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
			printf("����һ�Σ�\n");
			break;
		case 2:
			quit = 1;
			printf("��ӭ�´���ս��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}
		system("pause");
		return 0;
}