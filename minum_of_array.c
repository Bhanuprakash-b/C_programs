#include<stdio.h>
#include<string.h>
int getmin(int a[],int s,int e)
{
	int i,j,min;
	min=a[s];
	for(i=s;i<e;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}	
	}
	return min;
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
	t=getmin(a,0,n-1);
	printf(" minimum is %d",t);
	
	
}
