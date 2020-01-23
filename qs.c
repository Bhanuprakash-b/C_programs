#include<stdio.h>
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

int split(int a[],int l,int h)
{
	int p1=a[l],i=l,j=h;
	while(i<j)
	{
		while(a[i]<=p1)
		{
			i++;
		}
		while(a[j]>p1)
		{
			j--;
		}
		if(i<j)
		{
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[l],&a[j]);
	return j;
}
void sort(int a[],int l,int h)
{
	int p2;
	if(l<h)
	{
	p2=split(a,l,h);  
	sort(a,l,p2-1);
	sort(a,p2+1,h);
} 
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j,l,h;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}


