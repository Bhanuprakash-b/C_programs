#include<stdio.h>
#include<string.h>
int main()
{
	char a[90];
	int t,i,c=0;
	gets(a);
	t=strlen(a);
	for(i=0;i<t;i++)
	{
		if(a[i]!=' ' && (a[i+1]==' '||a[i+1]=='\0'))
		{
			c++;
		}
	}
	printf("%d",c);
}
