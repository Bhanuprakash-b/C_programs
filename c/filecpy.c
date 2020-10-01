#include<stdio.h>
#include <ctype.h>
void main()
{ 	FILE *fp,*rp;
	char ch,k;
	fp=fopen("/home/aceec/saikrupa/t.txt","r");
	rp=fopen("/home/aceec/saikrupa/new.txt","w");
	while((ch=fgetc(fp))!=EOF)
		{
			
			fputc(toupper(ch),rp);
		}
	fclose(fp);
	fclose(rp);
	rp=fopen("/home/aceec/saikrupa/new.txt","r");
	while((ch=fgetc(rp))!=EOF)
		{
			
			printf("%c",ch);
		}
}
