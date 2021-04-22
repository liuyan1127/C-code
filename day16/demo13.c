#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<stdlib.h>
#pragma warning(disable:4996)
//1.
void swap(char *x, char *y, int size){
	for (int i = 0; i < size; i++){
		*(x + i) ^= *(y + i);
		*(y + i) ^= *(x + i);
		*(x + i) ^= *(y + i);
	}
}
int comp(const void*vx, const void*vy){
	int * x = (int*)vx;
	int * y = (int*)vy;
	if (*x > *y){
		return 1;
	}
	if (*x < *y){
		return -1;
	}
	if (*x == *y){
		return 0;
	}
}
void mySort(void * base, int sum, int size, int(*comp)(const void *, const void *)){
	assert(base);
	assert(comp);
	//冒泡排序
	char *base1 = (char *)base;
	for (int i = 0; i < sum - 1; i++){
		int flag = 0;
		for (int j = 0; j < sum - i - 1; j++){
			if (comp(base1 + size*j, base1 + size*(j + 1))>0){
				flag = 1;
				swap(base1 + size*j, base1 + size*(j + 1), size);
			}
		}
		if (flag == 0){
			break;
		}
	}
}
void Show(int *arr, int num){
	for (int i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//2.
int comp1(const void*vx, const void*vy){
	float * x = (float*)vx;
	float * y = (float*)vy;
	if (*x > *y){
		return 1;
	}
	else if (*y>*x){
		return -1;
	}
	else{
		return 0;
	}
}
void Show1(float *arr, int num){
	for (int i = 0; i < num; i++){
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}
//3.
int Find(int a[][5], int row, int col, int num)
{
	//查找的本质: 排除的过程
	//从右上角开始比较，一次可以排除一行，或者一列
	int i = 0;
	int j = col - 1;
	while (i < row && j >= 0){
		if (num < a[i][j]){//排除一列
			j--;
		}
		else if (num > a[i][j]){//排除一行
			i++;
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(){
	//3.杨氏矩阵:有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
	//请编写程序在这样的矩阵中查找某个数字是否存在。
	int a[][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 22, 33, 44, 55 }
	};
	int x = 31;
    int ret=Find(a, 3, 5, x);
	if (ret){
		printf("找到数字了！\n");
	}else{
		printf("没有找到数字！\n");
}
	//2.qsort
	/*float arr1[10] = { 1.1, 1.2, 1.0, 1.8, 1.7, 1.5, 2.1, 5.1, 3.1, 2.2 };
	int num = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, num, sizeof(float), comp1);
	Show1(arr1, num);*/
	//1.qsort模拟
	/*int arr[10] = { 1, 5, 2, 7, 3, 8, 10, 14, 4, 3 };
	int num = sizeof(arr) / sizeof(arr[0]);
	mySort(arr, num, sizeof(int), comp);
	Show(arr, num);*/
	system("pause");
	return 0;
}