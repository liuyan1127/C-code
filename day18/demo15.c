#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

int main()
{
	//�Լ�ʵ�ָ���ճ��ͼƬ���������ļ���1.open
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
	//��ʹ�ļ���С�����仯
	//char buffer[1024];
	//int n = 0;
	//while ((n = fread(buffer, 1, 1024, src)) > 0){
	//fwrite(buffer, 1, n, dst);
	//}
	//if (feof(src)){//�ļ������ж�
	//printf("read src file end!\n");
	//}
	//2. copy
	fseek(src, 0, SEEK_END); //��src��Ӧ�Ķ�ȡλ�����õ����β
	int size = ftell(src);   //��ý�βƫ��������������ļ��Ĵ�С
	rewind(src);             //��src��Ӧ�Ķ�ȡλ�ûָ�����ʼ
	char *file_content = (char*)malloc(size);
	if (file_content == NULL){
		perror("malloc");
		return 3;
	}
	 fread(file_content, size, 1, src);
	//size_t s = fread(file_content, size, 1, src); //���ļ����������ݣ���ȡ��file_content��
	fwrite(file_content, size, 1, dst);
	//3. close
	fclose(src);
	fclose(dst);
	free(file_content);

	//����
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
	//fseek(fp, 0, SEEK_SET);   //����дλ�ã��ָ����ʼ,�൱��rewind(fp);
	//fputs("HELLO", fp);
	//printf("seek after : %d\n", ftell(fp));
	//ftell---"r"
	/*char c = 0;
	printf("%d\n", ftell(fp));
	while ((c = fgetc(fp)) != EOF){
		printf("%d\n", ftell(fp));
	}*/
	//fclose(fp);

	//һ��
	//FILE *fp = fopen("log.txt", "r");//w�����ʽд�룬a,׷��ʽд��
	//if (fp == NULL){
	//	perror("fopen");
	//	return 1;
	//}
	//5."r"
	//int a =0;
	//double b = 0.0;
	//char c = 'a';
	//fscanf(fp, "%d %lf %c", &a, &b, &c); //scanf( "%d %f %c", &a, &d, &c);���ļ�
	//printf("%d, %f, %c\n", a, b, c);//�����������Դ
	/*fprintf(stdout, "a : %d, b: %f, c: %c\n", a, d, c);*///�Ӽ���
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
	//	//fputc(c, fp);//���ļ�д���ַ�����
	//	fputc(c, stdout);//����ʾ����д
	//}
	//fclose(fp);//�ر�
	//1.FILE *fp = fopen("log.txt", "w");
	//fputs("XYZ", fp); //Ĭ�ϴ������ļ�stdin, stdout, stderr
	//printf("hello %d,%c\n", 10, 'c');
	//fputs("hello %d,%c\n", stdout);
	//fclose(fp);
	system("pause");
	return 0;
}