#include<stdio.h>
#include<string.h>
int getminindex(int a[],int s,int e)
{
	int i,j,min;
	min=a[s];
	for(i=s;i<e;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			j=i;
		}	
	}
	return j;
}
int main()
{
	int n,i,t;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=getminindex(a,0,n-1);
	printf(" minimum index is %d",t);
	
	
}
