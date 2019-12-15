#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
	int i, j, k=1,c=0,n;
gets(a);
n=strlen(a);
    b[0]=a[0];
    for(i = 1; i < n; i++)
    {
    	if(a[i]!=' ')
    	{
    	for(j=0;j<k;j++)
    	{
	   if(a[i]==b[j])
	   {
	   	c++;
	   }
   }}
       if(c==0)
       {
       	b[k]=a[i];
	   	c=0;
	   	k++;
	   }
	   else
	   {
	   	c=0;
	   }
    }
    printf("%d\n",k);

    for(i = 0; i<k; i++)
    {
        printf("%c", b[i]);
    }
}
