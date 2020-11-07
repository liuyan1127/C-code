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
	//用函数求两个数的最大值
	int x = 0;
	int y = 0;
	printf("请输入两个数：");
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