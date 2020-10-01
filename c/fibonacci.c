#include<stdio.h>
#include<math.h>
void main()
{
int a,c,b,d,n;
printf("Enter the fibonacci series limit ");
scanf("%d",&n);
printf("Fibonacci sequence\n");
for(a=0,b=1,c=1,d=0;n>=c;c++)

{

d=a+b;
a=b;
b=d;
printf("%d  ",d);
}
}
