#include<stdio.h>
#include<Windows.h>

int Max(a, b){
	int max = 0;
	if (a > b){
		max = a;
	}
	else{
		max= b;
	}
	return max;
	/*int c = a > b ? a : b;
	return c;*/
}
int main()
{
	//�ú����������������ֵ
	int x = 0;
	int y = 0;
	printf("��������������");
	scanf_s("%d %d", &x, &y);
	int max = Max(x, y);
	printf("max=%d\n", max);


	/*char c= 'A';
	for (; c <= 'Z'; c++){
		printf("%c ", c);
	}
	printf("\n");
	printf("hello word!\n");*/
	system("pause");
	return 0;

}