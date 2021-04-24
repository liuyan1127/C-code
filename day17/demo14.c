#include<stdio.h>
#include<assert.h>
#include<windows.h>
#include<limits.h>
#pragma warning(disable:4996)
//1.
void FindTwo(int a[], int num, int *x, int *y)
{
	assert(a);
	assert(num > 0);
	assert(x);
	assert(y);
	//整体异或
	int result = a[0]; //result: 3, 011
	for (int i = 1; i < num; i++){
		result ^= a[i];
	}
	//找到不同的比特位的位置
	int pos = 1;
	while (1)
	{
		if (result & pos){ //000001-> 000010
			break;
		}
		pos <<= 1;
	}
	*x = 0;
	*y = 0;
	//根据不同的比特位的位置pos，进行数组划分，把数组划分成为2部分
	for (int i = 0; i < num; i++){
		if (a[i] & pos){
			//A组
			*x ^= a[i];
		}
		else{
			//B组
			*y ^= a[i];
		}
	}
}
//2.
int status = 0;//区分正常结果（0）和错误结果（1,2）
int myAtoi(const char *str) //"-1"
{
	assert(str);
	int flag = 1;
	long long result = 0;
	int i = 0;
	while (isspace(str[i])){//判断一个字符是否是空格
		i++;
	}
	if (str[i] == '-'){
		flag = -flag;
		i++;
	}
	while (str[i]){
		if (isdigit(str[i])){//判断一个字符是否是十进制数字0~9
			result = result * 10 + flag*(str[i] - '0'); 
			if (result > INT_MAX || result < INT_MIN){ //INT_MAX默认int最大值，最小值（判断是否越界）
				status = 1;//越界
				break;
			}
		}
		else{
			status = 2;//包含特殊字符
			break;
		}
		i++;
	}
	return (int)result;
}
int main(){
	//3.

	//2.模拟实现atoi(把字符串转换成整形数的函数）
	const char *str = "12367";
	int res = myAtoi(str); 
	printf("%d %d\n", status,res);
	//1.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
	int a[] = { 1, 2, 3,  11, 33, 1, 2, 3 };
	int num = sizeof(a) / sizeof(a[0]);
	int x = 0;
	int y = 0;
	FindTwo(a, num, &x, &y); 
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}