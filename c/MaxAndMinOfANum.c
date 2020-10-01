#include <stdio.h>
void main()
{
int a,b,c,max;
printf("Enter any two numbers a,b,c");
scanf("%d%d%d",&a,&b,&c);
if (a>b) 
 {
if (a>c)
	{
printf("%d is the greater number among three numbers\n",a);
}
else
	{
printf("%d is the greater number among three numbers\n",c);
	}
 }
else
{
 if (b>c)
 	{
printf("%d is the greater number among three numbers\n",b);
        }
else 
	{
printf("%d is the greater number among three numbers\n",c);
 	}




 }
if (a<b) 
 {
if (a<c)
	{
printf("%d is the lowest number among three numbers\n",a);
}
else
	{
printf("%d is the lowest number among three numbers\n",c);
	}
 }
else
{
 if (b<c)
 	{
printf("%d is the lowest number among three numbers\n",b);
        }
else 
	{
printf("%d is the lowest number among three numbers",c);
 	}
 }
}
