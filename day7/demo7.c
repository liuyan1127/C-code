#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
//void Reverse(char *str){
	//3.
	/*char *start = str;
	char *end = str + strlen(str) - 1;
	char temp = *start;
	*start = *end;
	*end = '\0';
	if (strlen(str + 1) >= 2){
		Reverse(str + 1);
	}
	*end = temp;*/
	//2.
	/*if (*str != '\0'){
		Reverse(str + 1);
		printf("%c", *str);
	}*/
	//1.�ǵݹ�
	/*char *start = str;
	char *end = str + strlen(str) - 1;
	while (start < end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}*/
//}
//int Sum(int n){
//	if (n < 10){
//		return n;
//	}
//	return (n % 10 + Sum(n/10));
//}
int Power(int a, int m){
	if (m == 1){
		return a;
	}
	return a*Power(a, m - 1);
}
int main(){
	//�����ݹ���n��k�η�
	printf("������n��k��");
	int n = 0;
	int k = 0;
	scanf("%d %d", &n,&k);
	int result=Power(n,k);
	printf("result=%d\n", result);
	//�����ݹ�����λ֮��1356--��15
	/*printf("������һ������");
	int num = 0;
	scanf("%d", &num);
	int sum=Sum(num);
	printf("sum=%d\n", sum);*/
	//һ�������ӡ abcd1234-->4321dcba
	/*char str[] = "abcd1234";
	printf("%s\n",str);
	Reverse(str);*/
	//printf("\n");
	//printf("%s\n", str);
	system("pause");
	return 0;
}