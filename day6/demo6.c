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
	return third;//����
	/*if (x == 1 || x == 2){
		return 1;
	}
	return(Fib(x - 1) + Fib(x - 2));*///���ظ����㣬Ч�ʵ�
}
int main(){
	//��쳲����������ݹ顢������
	//�ݹ���׳�
	//����һ������ֵ��˳���ӡÿһλ1234   1 2 3 4 
	//printf("���������ݣ�");
	//printf("������׳�����");
	printf("�������n���Ʋ���������");
	int date = 0;
	scanf("%d", &date);
	//int num=Factorial(date);
	int num = Fib(date);
	//show(date);
	printf("%d\n",num);
	system("pause");
	return 0;
}