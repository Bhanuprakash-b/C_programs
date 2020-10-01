#include<stdio.h>
void main()
{ int c,a,b,s,i;
printf(" MENU \n 1.Press 1 Perform Add\n 2.Press 2 Perform sub\n 3.Press 3 Perform multiply\n 4.Press 4 Perform division\n 5.Press 5 Perform mod\n");
scanf("%d",&s);
printf("Enter any two numbers ");
scanf("%d%d",&a,&b);
switch(s)
{
case 1:
	
	c=a+b;
	printf("Add of %d,%d is %d",a,b,c);
	break;
	
case 2:
	
	if (a-b>0)
	{
		c=a-b;
	}
	else
		c=b-a;
	printf("sub of %d,%d is %d",a,b,c);
	break;

case 3:
	
	c=a*b;
	printf(" multiply of %d,%d is %d",a,b,c);
	break;

case 4:
	
	c=a/b;
	printf("division of %d,%d is %d",a,b,c);
	break;
	
case 5:
	
	c=a%b;
	printf("mod of %d,%d is %d",a,b,c);
	break;
	
}
}
