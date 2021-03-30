#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
//2.函数计算n!
//int Mul(x){
//	printf("%d!= ", x);
//	int result = 1;
//	for (; x > 0; x--){
//		result = result*x;
//	}
//	printf("%d\n", result);
//	return result;
//}
void BubbleSort(int arr[], int num){
	int i = 0;
	for (; i < num - 1; i++){
		int j = 0;
		for (; j < num - 1 - i; j++){
			if (arr[j]>arr[j + 1]){
				int temp = arr[j];
				arr[j ] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}
void Show(int arr[], int num){
	int i = 0;
	for (; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	//6.冒泡排序
	int arr[] = { 22, 34, 12, 45, 39, 56, 7, 26, 8, 57, 31 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Show(arr, num);
	BubbleSort(arr, num);
	Show(arr, num);
	//5.分别求1~100奇数、偶数、总和
	/*int i = 0;
	int odd = 0;
	int num = 0;
	while (i <= 100){
		if (i % 2 == 0){
			num = num + i;
		}
		else{
			odd = odd + i;
		}
		i++;
	}
	int add = num +odd ;
	printf("偶数的和是%d\n",num);
	printf("奇数的和是%d\n", odd);
	printf("总和是%d\n", add);*/
	//4.计算1！+2！+...+5!
	/*int sum = 0;
	for (int num = 1; num <= 5; num++){
		int ret = 1;
		for (int i = 1; i <= num; i++){
			ret *= i;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);*/
	//3.计算5！
	/*int num = 5;
	int ret = 1;
	for (int i = 1; i <= num; i++){
		ret *= i;
	}
	printf("%d\n", ret);*/
//2.计算1！+2！+...+n!
	/*printf("请输入你要求的阶乘n：");
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int i = 1;
	for (; i <= n; i++){
		sum = sum + Mul(i);
	}
	printf("sum=%d\n", sum);*/
//1.main中计算n!非递归
	/*printf("请输入你要求的阶乘n：");
	int n = 0;
	scanf("%d", &n);
	int result = 1;
	for (; n>0; n--){
		result = result*n;
	}
	printf("%d\n", result);*/
	system("pause");
	return 0;
}