#include<stdio.h>
#include<stdlib.h>
void main()
{ 	FILE *fp;
	char ch;
	fp=fopen("/home/aceec/saikrupa/t.txt","r");
	while((ch=fgetc(fp))!=EOF)
		{
			printf("%c" , ch);
		}
	fclose(fp);
}
