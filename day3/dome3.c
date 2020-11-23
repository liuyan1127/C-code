#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
int DivSort(int arr[],int num,int _n){
	int start = 0;
	int end = num-1;
	while (start < end){
		int mid = (start + end) / 2;
		if (_n < arr[mid]){
			end = mid - 1;
		}
		else if (_n>arr[mid]){
			start = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
void show()
{
	char str1[] = "abcdefghijklmn";
	char str2[] = "##############";
	int start = 0;
	int end = strlen(str1) - 1;
	while (start <=end){
		str2[start] = str1[start];
		str2[end] = str1[end];
		start++;
		end--;
		Sleep(1000);
		//printf("%s\n", str2);
		printf("%s\r", str2);
	}
	printf("\n");
}
int main()
{
	//多个字符向中间汇聚
	show();
	//从有序数组中查找某个数字
	/*int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	int num = sizeof(arr)/sizeof(arr[0]);
	int n = 0;
	printf("请输入你要查找的数字：");
	scanf("%d", &n);
	int index = DivSort(arr,num,n);
	printf("index:%d\n", index);*/
	/*int i;
	for (i = 0; i < num; i++){
		if (arr[i] == n){
			printf("%d\n", i);
			break;
		}
	}
	if(arr[i]!=n){
		printf("没有这个数字!\n");
	}*/
	system("pause");
	return 0;
}