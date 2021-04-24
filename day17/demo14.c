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
	//�������
	int result = a[0]; //result: 3, 011
	for (int i = 1; i < num; i++){
		result ^= a[i];
	}
	//�ҵ���ͬ�ı���λ��λ��
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
	//���ݲ�ͬ�ı���λ��λ��pos���������黮�֣������黮�ֳ�Ϊ2����
	for (int i = 0; i < num; i++){
		if (a[i] & pos){
			//A��
			*x ^= a[i];
		}
		else{
			//B��
			*y ^= a[i];
		}
	}
}
//2.
int status = 0;//�������������0���ʹ�������1,2��
int myAtoi(const char *str) //"-1"
{
	assert(str);
	int flag = 1;
	long long result = 0;
	int i = 0;
	while (isspace(str[i])){//�ж�һ���ַ��Ƿ��ǿո�
		i++;
	}
	if (str[i] == '-'){
		flag = -flag;
		i++;
	}
	while (str[i]){
		if (isdigit(str[i])){//�ж�һ���ַ��Ƿ���ʮ��������0~9
			result = result * 10 + flag*(str[i] - '0'); 
			if (result > INT_MAX || result < INT_MIN){ //INT_MAXĬ��int���ֵ����Сֵ���ж��Ƿ�Խ�磩
				status = 1;//Խ��
				break;
			}
		}
		else{
			status = 2;//���������ַ�
			break;
		}
		i++;
	}
	return (int)result;
}
int main(){
	//3.

	//2.ģ��ʵ��atoi(���ַ���ת�����������ĺ�����
	const char *str = "12367";
	int res = myAtoi(str); 
	printf("%d %d\n", status,res);
	//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
	int a[] = { 1, 2, 3,  11, 33, 1, 2, 3 };
	int num = sizeof(a) / sizeof(a[0]);
	int x = 0;
	int y = 0;
	FindTwo(a, num, &x, &y); 
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}