#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

int main()
{
	//自己实现复制粘贴图片（二进制文件）1.open
	FILE *src = fopen("s1.png", "rb");
	if (src == NULL){
	perror("fopen");
	return 1;
	}
	FILE *dst = fopen("s1_copy.png", "wb");
	if (dst == NULL){
	perror("fopen");
	return 2;
	}
	//会使文件大小发生变化
	//char buffer[1024];
	//int n = 0;
	//while ((n = fread(buffer, 1, 1024, src)) > 0){
	//fwrite(buffer, 1, n, dst);
	//}
	//if (feof(src)){//文件结束判定
	//printf("read src file end!\n");
	//}
	//2. copy
	fseek(src, 0, SEEK_END); //将src对应的读取位置设置到最结尾
	int size = ftell(src);   //获得结尾偏移量，代表就是文件的大小
	rewind(src);             //将src对应的读取位置恢复到开始
	char *file_content = (char*)malloc(size);
	if (file_content == NULL){
		perror("malloc");
		return 3;
	}
	 fread(file_content, size, 1, src);
	//size_t s = fread(file_content, size, 1, src); //将文件的所有内容，读取到file_content中
	fwrite(file_content, size, 1, dst);
	//3. close
	fclose(src);
	fclose(dst);
	free(file_content);

	//二、
	/*FILE *fp = fopen("log.txt", "w");
	if (fp == NULL){
		perror("fopen error!\n");
		return 1;
	}
	printf("begin: %d\n", ftell(fp));
	fputs("hello world, hello bit!", fp);
	printf("end: %d\n", ftell(fp));*/
	//fseek---"w"
	//printf("seek before: %d\n", ftell(fp));
	//fseek(fp, -3, SEEK_END); //SEEK_END+XX
	//fputs("123", fp);
	//fseek(fp, 0, SEEK_SET);   //将读写位置，恢复到最开始,相当于rewind(fp);
	//fputs("HELLO", fp);
	//printf("seek after : %d\n", ftell(fp));
	//ftell---"r"
	/*char c = 0;
	printf("%d\n", ftell(fp));
	while ((c = fgetc(fp)) != EOF){
		printf("%d\n", ftell(fp));
	}*/
	//fclose(fp);

	//一、
	//FILE *fp = fopen("log.txt", "r");//w是清空式写入，a,追加式写入
	//if (fp == NULL){
	//	perror("fopen");
	//	return 1;
	//}
	//5."r"
	//int a =0;
	//double b = 0.0;
	//char c = 'a';
	//fscanf(fp, "%d %lf %c", &a, &b, &c); //scanf( "%d %f %c", &a, &d, &c);从文件
	//printf("%d, %f, %c\n", a, b, c);//标清楚数据来源
	/*fprintf(stdout, "a : %d, b: %f, c: %c\n", a, d, c);*///从键盘
	//4."w";
	/*char buffer[1024];
	char *ret = NULL;
	do
	{
		 ret = fgets(buffer, 1024, stdin);
		 if (ret == NULL){
			 break;
		 }
		fputs(buffer, fp);
	} while (1);*/
	//3."r";
	//char c = 'a';//FILE *fp = fopen("log.txt", "w");
	//while ((c = fgetc(stdin)) != EOF){
	//	fputc(c, fp);
	//}
	//char c = 'a';//FILE *fp = fopen("log.txt", "r");
	//while (( c = fgetc(fp) ) != EOF){//EOF=-1
	//	printf("read: %c\n", c);
	//}
	//printf("%d\n", c);
	//fclose(fp);
	//2. "w";
	//char c = 'a';
	//for (; c <= 'z'; c++){
	//	//fputc(c, fp);//向文件写入字符内容
	//	fputc(c, stdout);//向显示器上写
	//}
	//fclose(fp);//关闭
	//1.FILE *fp = fopen("log.txt", "w");
	//fputs("XYZ", fp); //默认打开三个文件stdin, stdout, stderr
	//printf("hello %d,%c\n", 10, 'c');
	//fputs("hello %d,%c\n", stdout);
	//fclose(fp);
	system("pause");
	return 0;
}