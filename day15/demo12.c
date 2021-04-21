#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<stdlib.h>
#pragma warning(disable:4996)
//3.1.2����
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
	num %= len; //ȥ��,
	//3.2.2˫����
	//3.1.2���ã�������
	//[0, num-1]
	Reverse(str, 0, num - 1);
	//[num, len-1]
	Reverse(str, num, len - 1);
	//[0, len-1]
	Reverse(str, 0, len - 1);
	//3.1.1����ν���������Ȼ�󲻶Ͻ��бȽ�
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
	//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
	//���磺3.2����s1 = AABCD��s2 = BCDAA���Ƿ���1��
	//����s1 = abcd��s2 = ACBD�����Ƿ���0.
	//3.1AABCD����һ���ַ��õ�ABCDA��AABCD���������ַ��õ�BCDAA��AABCD����һ���ַ��õ�DAAB
	//3.2.2˫����ʵ���ж�
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
	//3.1.2 ��������
	/*char str1[] = "1234abcd";
	int len = strlen(str1);
	int num = 3;
	printf("before: %s\n", str1);
	LeftRotate(str1, len, 2);
	printf("after: %s\n", str1);*/
	//3.1.1ʵ�����������������ѭ��������
	/*char str1[] = "1234abcd";
	int len = strlen(str1);
	int num = 3;
	printf("before: %s\n", str1);
	LeftRotate(str1, len, num);
	printf("after: %s\n", str1);*/
	//3.2.1һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
	//char str1[] = "1234abcd"; 
	//char str2[] = "abcd1235"; 
	//int len = strlen(str1);
	//int num = 3;
	//int i = 0;
	//for (; i < len; i++){
	//	if (strcmp(str1, str2) == 0){//�ж�str1��str2�Ƿ���ȣ���1��yes
	//		printf("yes!\n");
	//		break;
	//	}
	//	LeftRotate(str1, len, 1);
	//}
	//if (i == len){
	//	printf("no��\n");
	//}
	system("pause");
	return 0;
}