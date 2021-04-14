#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
void Swap(int *a, int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
int CountOne(int x){
	//2.2
	int count = 0;
	while (x){
		x = x&(x - 1);
		count++;
	}
	return count;
	//2.1
	/*int count = 0;
	int i = 0;
	while (i < 32){
		if (x&(1<<i)){
			count++;
		}
		i++;
	}
	return count;*/
}
int DifferOne(int a, int b){
	int ret = CountOne(a^b);
	return ret;
}
void Print(int a){
	int i = 30;
	for (; i >= 0; i -= 2){//奇数
		int ret =(a>>i)&1;
		printf("%d ", ret);
	}
	printf("\n");
	for (i=31; i >=1; i -= 2){//偶数
		int ret = (a>>i)&1;
		printf("%d ", ret);
	}
	printf("\n");
}
int MyStrlen(char *str){
	if (NULL == str){
		return 0;
	}
	char *start = str;
	char *end = str;
	while (*end != '\0'){
		end++;
	}
	return end - start;//指针相减 
}
void Show(int (*arr)[5], int n){
	int i = 0;
	for (; i < n; i++){
		int j = 0;
		for (; j < 5; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int Sn(int a, int n){
	int sum = a;
	int i = 0;
	int start = a;
	for (; i < n; i++){
		start= start * 10 + a;
		if (i == n - 1){
			printf("%d", start);
		}
		else{
			printf("%d+", start);
		}
		sum = sum + start;
	}
	return sum;
}
int main(){
	//7.Sn=a+aa+aaa+aaaa+aaaaa
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int ret = Sn(a, n);
	printf("=%d\n", ret);
	//6.指针打印二维数组
	/*int arr[3][5] = { 0 };
	Show(arr, 3);*/
	//5.自己实现求字符串长度
	/*char *str = "hello world";
	int len = MyStrlen(str);
	printf("%d\n", len);*/
	//4.打印二进制的偶数位和奇数位
	/*int x = 70;
	Print(x);*/
	//3.统计两个数二进制中不同位的个数
	/*int x = 90;
	int y = 70;
	int count = DifferOne(x, y);
	printf("%d\n", count);*/
	/*int a = (1, 2, 3, 4);
	printf("%d\n", a);*///逗号表达式的结果是最后一个表达式的值
	//2.求二进制序列中1的个数
	/*int n = 0;
	scanf("%d", &n);
	int num = CountOne(n);
	printf("1的个数:%d\n", num);*/
	//1.不创建变量，交换两个数字
	/*int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	Swap(&x, &y);
	printf("%d %d\n", x, y);*/
	system("pause");
	return 0;
}