#include<stdio.h>
void main()
{
int a,i,sum=0;
printf("Enter any number :");
scanf("%d",&a);
for (i=1;i<a;i++)
{
if (a%i==0)
{
sum=sum+i;
}
}
if (a == sum)
{
printf("perfect\n");
} 
else
{
printf(" Not perfect\n");}
}
