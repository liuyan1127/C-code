#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
//计算n!
int Mul(x){
	printf("%d!= ", x);
	int ret = 1;
	for (; x > 0; x--){
		ret = ret*x;
	}
	printf("%d\n", ret);
	return ret;
}
int main()
{

	//计算1！+2！+...+n!
	printf("请输入你要求的阶乘：");
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int i = 1;
	for (; i <=n; i++){
		sum = sum + Mul(i);
	}
	printf("sum=%d\n",sum);
	//计算n!
	/*printf("请输入你要求的阶乘：");
	int n = 0;
	scanf("%d", &n);
	int result = Mul(n);
	printf("%d\n", result);*/
	//输出任意范围的奇数
	/*int start = 0;
	int end = 0;
	int count = 0;
	printf("请输入范围：");
	scanf("%d %d", &start, &end);
	for (; start < end; start++){
		if (start % 2 == 1){
			printf("%d ", start);
			count++;
			if (count % 5 == 0){
				printf("\n");
			}
		}
	}*/
	//判断一个数是否为奇数
	//printf("请输入一个数字：");
	//int num = 0;
	//scanf("%d", &num);
	////int res=num % 2 == 1 ? 1 : 0;
	//int rest = num & 1;
	//if (rest== 1) {
	//	printf("是奇数！\n");
	//}
	//else{
	//	printf("是偶数！\n");

	//}
	//遍历数组
	/*int arr[] = { 1, 2, 3, 4, 5 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int sum = 0;
	for (; i < num; i++){
		printf("arr[%d]=%d\n",arr[i],i);
		sum = sum + arr[i];
	}
	printf("sum=%d\n", sum);*/
	system("pause");
	return 0;
}