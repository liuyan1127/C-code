#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
void show(int n){
	int i = 0;//上半部
	for (; i < n; i++){
		int j = 0; 
		for (; j < n - 1 - i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++){//下半部
		int j = 0;
		for (; j <= i; j++){
			printf(" ");
		}
		for (j=0; j < 2*n-3-2*i; j++ ){
			printf("*");
		}
		printf("\n");
	}
}
void Swap(int *arr, int num){
	/*int start = 0;
	int end = num - 1;
	while(start < end){
		while (start < end&&arr[start] % 2 != 0){
			start++;
			while (start < end&&arr[end] % 2 == 0){
				end--;
			}
			if (start < end){
				int temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				start++; end--;
			}
		}
	}*/
	int *start = arr;
	int *end = arr + num - 1;
	while (start < end){
		while (start < end && (*start & 1)){
			start++;
		}
		while (start < end && !(*end & 1)){
			end--;
		}
		if (start < end){
			*start ^= *end;
			*end ^= *start;
			*start ^= *end;
			start++;
			end--;
		}
	}
}
int Soda(int money){
	int total = money;
	int empty = money;
	while (empty >= 2){
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}
int main(){
	//4.喝汽水
	printf("请输入钱数：");
	int money = 0;
	scanf("%d", &money);
	int total = Soda(money);
	printf("total:%d\n", total);
	//1.打印菱形
	//show(12);
	/*int ret = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		int j = 0;
		for (j = 1; j <= i; j++){
			ret = ret*j;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);*/
	//2.模拟库函数strlen(写过，指针相减）、strcpy（后面写库函数模拟）
	//3.调整数组奇偶顺序，奇数前，偶数后
	/*int arr[] = { 11, 22, 34, 1 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Swap(arr, num);
	for (int i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");*/
	system("pause");
	return 0;
}