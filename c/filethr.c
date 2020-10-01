#include<stdio.h>
void main()
{ 	FILE *fp,*rp,*sp;
	char ch,k;

	fp=fopen("/home/aceec/saikrupa/t.txt","r");
	sp=fopen("/home/aceec/saikrupa/thr.txt","a");
	while((ch=fgetc(fp))!=EOF)
		{
			fputc(ch,sp);
				
		}
	fclose(fp);
	fclose(sp);


	rp=fopen("/home/aceec/saikrupa/new.txt","r");
	sp=fopen("/home/aceec/saikrupa/thr.txt","a+");
	while((ch=fgetc(rp))!=EOF)
		{
			fputc(ch,sp);
				
		}
	fclose(rp);
	fclose(sp);
	
	}
