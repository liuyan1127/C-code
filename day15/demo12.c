#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<stdlib.h>
#pragma warning(disable:4996)
//3.1.2逆置
void Reverse(char *str, int start, int end)
{
	while (start < end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++, end--;
	}
}
void LeftRotate(char *str, int len, int num)
{
	assert(str);
	assert(len > 0);
	assert(num >= 0);
	num %= len; //去重,
	//3.2.2双倍串
	//3.1.2逆置（左旋）
	//[0, num-1]
	Reverse(str, 0, num - 1);
	//[num, len-1]
	Reverse(str, num, len - 1);
	//[0, len-1]
	Reverse(str, 0, len - 1);
	//3.1.1在逐次进行左旋，然后不断进行比较
	//while (num){
	//	char temp = str[0];
	//	int i = 0;
	//	for (; i < len - 1; i++){//i : max : len-2;
	//		str[i] = str[i + 1];
	//	}
	//	str[i] = temp;
	//	num--;
	//}
}
int main(){
	//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
	//例如：3.2给定s1 = AABCD和s2 = BCDAA，是返回1；
	//给定s1 = abcd和s2 = ACBD，不是返回0.
	//3.1AABCD左旋一个字符得到ABCDA；AABCD左旋两个字符得到BCDAA；AABCD右旋一个字符得到DAAB
	//3.2.2双倍串实现判断
	char str1[] = "1234abcd"; 
	char str2[] = "abcd1234"; 
	int len = strlen(str1);
	int num = 3;
	char *double_string = (char*)malloc(2 * len + 1);
	if (double_string == NULL){
		return -1;
	}
	strcpy(double_string, str1);
	strcat(double_string, str1);
	printf("double string : %s\n", double_string);
	if (strstr(double_string, str2) != NULL){
		printf("yes\n");
	}
	else{
		printf("no!\n");
	}
	free(double_string);
	printf("before: %s\n", str1);
	LeftRotate(str1, len, 2);
	printf("after: %s\n", str1);
	//3.1.2 逆置左旋
	/*char str1[] = "1234abcd";
	int len = strlen(str1);
	int num = 3;
	printf("before: %s\n", str1);
	LeftRotate(str1, len, 2);
	printf("after: %s\n", str1);*/
	//3.1.1实现任意次数的左旋（循环左旋）
	/*char str1[] = "1234abcd";
	int len = strlen(str1);
	int num = 3;
	printf("before: %s\n", str1);
	LeftRotate(str1, len, num);
	printf("after: %s\n", str1);*/
	//3.2.1一个字符串是否为另外一个字符串旋转之后的字符串
	//char str1[] = "1234abcd"; 
	//char str2[] = "abcd1235"; 
	//int len = strlen(str1);
	//int num = 3;
	//int i = 0;
	//for (; i < len; i++){
	//	if (strcmp(str1, str2) == 0){//判断str1和str2是否相等，等1，yes
	//		printf("yes!\n");
	//		break;
	//	}
	//	LeftRotate(str1, len, 1);
	//}
	//if (i == len){
	//	printf("no！\n");
	//}
	system("pause");
	return 0;
}