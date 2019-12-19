#include<stdio.h>
#include<string.h>
void swap(char *p,char *q)
{
	char temp=*p;
	*p=*q;
	*q=temp;
}
void sort(char a[],int q)
{
	int i,j;
	for(i=0;i<q;i++)
	{
		for(j=i+1;j<q;j++)
		{
			if(a[i]>a[j])
			{
				swap(&a[i],&a[j]);
			}
		}
	}
}
int main()
{
	int n,i,t;
	
	char a[900],b[900],c[900],d[900];
	char p,p1;
gets(a);
gets(b);
t=strlen(a);
n=strlen(b);
	sort(a,t);
	sort(b,n);
	puts(a);
	puts(b);
	if(strcmp(a,b))
	{
		printf("not an anagram");
	}
	else
	{
		printf("yes it is a anagram");
	}
	
	
}
