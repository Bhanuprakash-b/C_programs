#include <stdio.h>
void main()
{
int a,s,t;
printf("Enter the values of intial speed and time");
scanf("%d%d",&a,&t);
s=(float)(a*t)+(1/2*a*t*t);
printf("The displacement is %d",s);
}
