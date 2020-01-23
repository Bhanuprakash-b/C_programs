#include<stdio.h>
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}


void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
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
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a,n);
	sort(b,m);
	int c[m+n];
	for(i=j=k=0;i<n && j<m;k++)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
	}
	while(i<n)
	{
		c[k++]=a[i++];
	
	}
	while(j<m)
	{
		c[k++]=b[j++];
		
	}
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
	
}


