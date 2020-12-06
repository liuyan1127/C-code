#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
#define SIZE 10
//void Inc(int *p){
//	//(*p)++;
//	*p = *p + 1;
//}
//int Max(int a[], int num){
//	int i = 1;
//	int max = a[0];//假设一个最大
//	for (; i < num; i++){
//		if (max < a[i]){//比较交换
//			max = a[i];
//		}
//	}
//	return max;
//}
//int MyStrlen(const char*str){
	/*int i = 0;
	while (str[i] != '\0'){
	i++;
	}
	return i;*/
	/*int count = 0;
	while (*str != '\0'){
	count++;
	str++;
	}
	return count;*/
	/*if (*str == '\0'){
		return 0;
	}
	return 1 + MyStrlen(str + 1);
} */
//double Sum(){
//	int sign = 1;
//	double deno = 2.0, sum = 1.0, term = 1.0;
//	while (deno <= 100){
//		sign = -sign;
//		term = sign / deno;
//		sum = sum + term;
//		deno = deno + 1;
//	}
//	return sum;
//}
void show()
{
	int i = 1;
	for (; i <= 9; i++){
		int j = 1;
		for (; j <= i; j++){
			int k = i*j;
			printf("%d*%d=%d ", j, i, k);
		}
		printf("\n");
	}
}
int main()
{
	//输出9 9 乘法表
	show();
	//分数求和
	/*double ret = Sum();
	printf("%f\n", ret);*/
	//创建临时变量求字符串长度
	/*const char *str = "abcde";
	int ret = MyStrlen(str);
	printf("%d\n", ret);*/
	// 求10个数中最大的
	//int a[SIZE] = { 0 };
	//int i = 0;
	//for (; i < SIZE; i++){//循环往数组里写入数字
	//	scanf("%d", &a[i]);
	//}
	//	int max = Max(a, SIZE);
	//	printf("max=%d\n", max);
	//写一个函数，每调用一次，num值加1
	/*int num = 0;
	Inc(&num);
	printf("%d\n", num);
	Inc(&num);
	printf("%d\n", num);
	Inc(&num);
	printf("%d\n", num);*/
	system("pause");
	return 0;
}