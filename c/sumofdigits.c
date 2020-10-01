#include<stdio.h>

void main()
{
int a,b=0,c,n;
printf("Enter the any number");
scanf("%d",&n);

for (;n>0;)
{
c=n%10;
b=b+c;
n=n/10;



}
printf("%d  ",b);
}
