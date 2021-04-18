#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>
//1.
//char *my_strcpy(char *dst,char *src){
//	char *ret = dst;
//	assert(dst != NULL);
//	assert(src != NULL);
//	while (*src!='\0'){
//		*dst = *src;
//		dst++, src++;
//	}
//	*dst = *src;
//	return ret;
//}
//int main()
//{
//	char *src = "abcdefgh";
//	char dst[50];
//	my_strcpy(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}
//2.
//int find(const char*str1, const char *str2){
//	char tem[200] = { 0 };
//	strcpy(tem, str1);
//	strcat(tem, str2);
//	return strstr(tem, str2) != NULL;
//}
//int main(){
//	char arr[] = "AABCD";
//	char arr2[] = "BBDAA";
//	printf("%d\n", find(arr, arr2));
//	system("pause");
//	return 0;
//}
//3.
//int my_strlen(char *str){
//	char *arr = str;
//	assert(arr!= NULL);
//	while (*arr){
//		arr++;
//	}
//	return arr - str;
//}
//int main()
//{
//	char *arr = "abcdefgh";
//	int num = my_strlen(arr);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//4.
//char *MyStrcat(char *arr1, const char *arr2){
//	char *a = arr1;
//	while (*arr1){
//		arr1++;
//	}
//	while (*arr1++ = *arr2++){
//		; }
//	return a;
//}
//int main(){
//	char arr[20] = "abcd";
//	char arr2[20] = "abc";
//	MyStrcat(arr, arr2);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//5.
int MyStrcmp(const char*arr1, const char *arr2){
	while (*arr2 != '\0'){
		if (*arr1++ > *arr2++){
			return 1;
		}
		else if (*arr1++ < *arr2++){
			return -1;
		}
	}
	return 0;
}
int main(){
	char *arr = "abc";
	char *arr2 = "abcd";
	int temp = MyStrcmp(arr, arr2);
	printf("%d\n", temp);
	system("pause");
	return 0;
}
//6.
//void MyStrcpy(char*arr1, const char *arr2){
//	while (*arr1++ = *arr2++){
//	}
//}
//int main(){
//	char *arr = "12345678abcaca";
//	char str[15];
//	MyStrcpy(str, arr);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
