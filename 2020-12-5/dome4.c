#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
//int  show(int num){
//	int i = 2;
//	//int top = num / 2;
//	//int top=(int)sqrt(num);
//	for (; i < num; i++){
//		if (num%i == 0){
//			break;
//		}
//	}
//	if (i < num){
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//void show(){
//	int n = 1;
//	int count = 0;
//	for (; n < 100; n++){
//		if (n % 3 == 0){
//			printf("%3d ", n);
//			count++;
//			if (count % 10 == 0){
//				printf("\n");
//			}
//		}
//	}
//	printf("\n");
//}
//void MaxCommon(int x, int y){//18 9
	//int top = x > y ? y :x;//9
	//int i = top;
	//for (; i >= 2; i--){//9 8 7 6 5 4 3 2(��ٷ���
	//	if ((x%i == 0) && (y%i == 0)){
	//		return i;
	//	}
	//}
	//return 1;
	//while (1){
	//	if (x > y){
	//		x = x - y;//շת���
	//	}
	//	else if(x<y){
	//		y = y - x;
	//	}
	//	else{
	//		break;
	//	}
	//}
	//printf("%d\n", x);
//	while (x*y!=0){
//		if (x > y){
//			x = x%y;//շת���
//		}
//		else if (x < y){
//			y = y%x;
//		}
//		else{
//			break;
//		}
//	}
//	int ret = x == 0 ? y : x;
//	printf("%d\n", ret);
//}
int CountNine(){
	int i = 1;
	int count = 0;
	for (; i < 100; i++){
		if (i % 10 == 9){
			count++;
		}
		if (i / 10 == 9){
			count++;
		}
	}
	return count;
}
int main()
{
	//��100����9�ĸ���
	int ret = CountNine();
	printf("%d\n", ret);
	//�����Լ��
	/*int a = 0;
	int b = 0;
	printf("�����������");
	scanf("%d %d", &a, &b);
	MaxCommon(a, b);*/
	/*int ret=MaxCommon(a, b);
	printf("%d\n", ret);*/
	//��ӡ100-200����
	/*int i = 100;
	for (; i < 200; i++){
		if (show(i)){
			printf("%d ", i);
		}
	}
	printf("\n");*/
	/*int ret = show(a);
	printf("%d\n", ret);*/
	//��ӡ1-100��3�ı���
	//show();
	//��������С
	/*int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	printf("������3������");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b){
		t = a; a = b; b = t;
	}
	if (a < c){
		t = a; a = c; c = t;
	}
	if (b < c){
		t = b; b = c; c = t;
	}
	printf("�Ӵ�С��%d %d %d\n", a, b, c);*/
	system("pause");
	return 0;
}