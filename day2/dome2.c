#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
//����n!
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

	//����1��+2��+...+n!
	printf("��������Ҫ��Ľ׳ˣ�");
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int i = 1;
	for (; i <=n; i++){
		sum = sum + Mul(i);
	}
	printf("sum=%d\n",sum);
	//����n!
	/*printf("��������Ҫ��Ľ׳ˣ�");
	int n = 0;
	scanf("%d", &n);
	int result = Mul(n);
	printf("%d\n", result);*/
	//������ⷶΧ������
	/*int start = 0;
	int end = 0;
	int count = 0;
	printf("�����뷶Χ��");
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
	//�ж�һ�����Ƿ�Ϊ����
	//printf("������һ�����֣�");
	//int num = 0;
	//scanf("%d", &num);
	////int res=num % 2 == 1 ? 1 : 0;
	//int rest = num & 1;
	//if (rest== 1) {
	//	printf("��������\n");
	//}
	//else{
	//	printf("��ż����\n");

	//}
	//��������
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