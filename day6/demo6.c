#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
//void show(int x){
//	if (x > 9){
//		show(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int Factorial(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n*Factorial(n - 1);
//}
int Fib(int x){
	int first = 1;
	int second = 1;
	int third = 1;
	while (x > 2){
		third = first + second;
		first = second;
		second = third;
		x--;
	}
	return third;//迭代
	/*if (x == 1 || x == 2){
		return 1;
	}
	return(Fib(x - 1) + Fib(x - 2));*///有重复计算，效率低
}
int main(){
	//求斐波那契数（递归、迭代）
	//递归求阶乘
	//输入一个整型值，顺序打印每一位1234   1 2 3 4 
	//printf("请输入数据：");
	//printf("请输入阶乘数：");
	printf("请输入第n个菲波那契数：");
	int date = 0;
	scanf("%d", &date);
	//int num=Factorial(date);
	int num = Fib(date);
	//show(date);
	printf("%d\n",num);
	system("pause");
	return 0;
}