#include<stdio.h>
void main()
{ 	FILE *fp,*rp,*sp;
	char ch;
	int s,k,r;


	sp=fopen("/home/aceec/saikrupa/thr.txt","r");
	while((ch=fgetc(sp))!=EOF)
		{
			if (ch == " ")
				s++;
			else
				r++;
	}
printf("%d ,%d ,%d",s,k,r);
fclose(sp);
}