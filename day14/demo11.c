#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning (disable:4996)
void Show(int n){
	int arr[10][10] = { 1 };
	int i = 1;
	for (; i < n; i++){
		arr[i][0] = 1;
		for (int j = 1; j <= i; j++){
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void FindMurder() {
	char murder = 'A';
	for (; murder <= 'D'; murder++){
		if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D') == 3){
			break;
		}
	}
	printf("凶手是%c\n", murder);
}
void Game() {
	for (int a = 1; a <= 5; a++) {//a尝试1~5的名次
		for (int b = 1; b <= 5; b++) {
			for (int c = 1; c <= 5; c++) {
				for (int d = 1; d <= 5; d++) {
					for (int e = 1; e <= 5; e++) {
						if ((b == 2) + (a == 3) == 1//一真一假，谁真不论，一半是对的，所以和为1
							&& (b == 2) + (e == 4) == 1
							&& (c == 1) + (d == 2) == 1
							&& (c == 5) + (d == 3) == 1
							&& (e == 4) + (a == 1) == 1) {
							if (a*b*c*d*e != 120){//根据现实场景筛选合适的，名次不能跳
								continue;
							}
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}
size_t myStrlen(const char *str){
	assert(str);
	//1.！=\0 ++方式
	/*int length = 0;
	while (*str !='\0'){
		str++;
		length++;
	}
	return length;*/
	//2.指针相减方式
	//3.递归求
	if (*str == '\0'){
		return 0;
	}
	int strlen = 1+myStrlen(str + 1);
	return strlen;
}
char *myStrcpy(char *dst, const char *src){
	//1.
	while (*dst++ = *src++){
			}
	//2.
		char *ret = dst;
		/*assert(dst != NULL);
		assert(src != NULL);
		while (*src!='\0'){
			*dst = *src;
			dst++, src++;
		}
		*dst = *src;*/
		return ret;
	}
char *myStrcat(char *arr1, const char *arr2){
	assert(arr1);
	assert(arr2);
	char *arr = arr1;
	while (*arr1){
		arr1++;
	}
	while (*arr1++ = *arr2++){
		 }
	return arr;
}
int myStrcmp(const char*arr1, const char *arr2){//优化后的简洁方式
	assert(arr1);
	assert(arr2);
	int temp = 0;
	while (!(temp = *arr1 - *arr2) && *arr1){
		//arr1和arr2内容相同相减temp为0,在temp不为0而且arr1不为空时，指针向后移动
		arr1++; arr2++;
	}
		if (temp>0){
			return 1;
		}
		else if (temp<0){
			return -1;
		}
		else{
			return 0;
		}
}
char *myStrstr(const char *stc, const char *det){
	assert(stc);
	assert(det);
	char *str1 = (char *)stc;
	char *str2 = (char *)det;
	char *s = NULL;
	if (det == "\0" || strlen(stc)<strlen(det)){
		return NULL;
	}
	while (*str1){
		s = str1;
		str2 = (char *)det;
		while (*str2 && (*str2 == *s)){
			s++;
			str2++;
		}
		if (*str2 == '\0'){
			return str1;
		}
		str1++;
	}
	return NULL;
}

char * myMemcpy(void *src, const void *dst, size_t num){
	assert(src != NULL);
	assert(dst != NULL);
	void *str = src;
	while (num--){
		*(char*)src = *(char*)dst;
		src = (char*)src + 1;
		dst = (char*)dst + 1;
	}
	return (str);
}
int main()
{
	const char* det = "adacada123456";
	char arr[36];
	myMemcpy(arr, det, 13+1);
	printf("%s\n", arr);
   /* char* stc = "abc123bca";
    char* det = "bc";
	printf("%s\n", myStrstr(stc, det));*/
	/*char *arr1 = "abcD123";
	char *arr2 = "abcd123";
	int ret = myStrcmp(arr1, arr2);
	printf("%d\n", ret);*/
	/*char arr1[20] = "abcd";
	char arr2[20] = "abc";
	myStrcat(arr1, arr2);
	printf("%s\n", arr1);*/
	//char *str="hello world";
	/*char dst[50];
	myStrcpy(dst, str);
	printf("%s\n", dst);*/
	//int ret = myStrlen(str);
	//printf("%d\n", ret);
	//4.模拟字符串库函数strlen\strcpy\strcat\strcmp\strstr\memcpy
	//3.确定比赛名次
	//Game();
	//2.确认凶手
	//FindMurder();
	//1.打印杨辉三角
	/*int n = 0;
	printf("请输入小于10的层数: ");
	scanf("%d", &n);
	Show(n);*/
	system("pause");
	return 0;
}