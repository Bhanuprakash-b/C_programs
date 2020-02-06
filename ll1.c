#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;
int c=0;
int main()
{int h;
while(1)
{
	printf("enter any one 1:insbegin 2:insend 3:delbeg 4:delend 5:insmid  6:diplay 7:exit 8:delatmid");
	scanf("%d",&h);
	switch(h)
	{
		case 1:ibegin1();
		break;
		case 2:iend1();
		break;
		case 3:delbeg1();
		break;
		case 4:delend1();
		break;
		case 5:imid1();
		break;
		case 6:display1();
		break;
	
		case 9: f1();
		break;
		case 7:exit(1);
	}}
	

return 0;
}

int ibegin1()
{
    int x;
    c++;
    scanf("%d",&x);
    struct node *first;
    first=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
    first->d=x;
    first->next=NULL;
    head=first;
    }
    else
    {
    first->d=x;
    first->next=head;
    head=first;
    }
    return 0;
	}
int iend1()
{c++;
    int x;
    struct node *p;
    p=head;
    scanf("%d",&x);
    struct node *first1;
    first1=(struct node*)malloc(sizeof(struct node));
    first1->d=x;
    first1->next=NULL;
    while(p->next!=NULL)
    {
p=p->next;
	}
	p->next=first1;
	return 0;
}
int delend1()
{c--;
	    struct node *p,*t;
p=head;
	while(p->next!=NULL)
    {
   	t=p;
p=p->next;
	}
	t->next=NULL;
	printf("%d deleted",p->d);
	free(p);
	return 0;
}
/*void delmid()
{int x;
c--;
	struct node *t,*u,*p;
	printf("enter the data at after which you want to delete the data");
	scanf("%d",&x);
		t=search(x);
		if(t->next==NULL)
		{
			printf("last elemecnt of list");

		}
		else
		{
			u=t->next;
			t->next=u->next;
				printf("%d deleted is",u->d);
			free(u);
		}	
	}
*/
	
int delbeg1()
{
	 struct node *p;
	 c--;
	 if(head==NULL)
	 {printf("empty");
	 }
	 else
	 {p=head;
	 head=p->next;
	 printf("%d deled\n",p->d);
	 free(p);
	 }
	 return 0;
}
int imid1()
{

	int x,m;
	c++;
	struct node *p,*t,*u;
	u=(struct node*)malloc(sizeof(struct node));
	printf("enter the data at after which you want to place the list");
	scanf("%d",&x);
	printf("enter the data");
	scanf("%d",&m);
	u->d=m;
	p=head;
	while(p!=NULL)
	{
		if(p->d==x)
		{
			u->next=p->next;
			p->next=u;
			break;
		}
		else
		{p=p->next;
		}
	}
	return 0;
}
int display1()
{struct node *p,*t;
int i=1;
p=head;
if(head==NULL)
{
	printf("empty list");
}
	while(p!=NULL)
    {
	printf("%d data of node %d\n",p->d,i);
	
    	t=p;
    	i++;
        p=p->next;
	}
	return 0;
}
int f1()
{struct node *p;
p=head;
	int k,i;
	k=c/2;
	for(i=1;i<=k;i++)
	{
	if(i==k)
	{
		printf("%d is the middle element",p->d);
		}	
		p=p->next;
	}
	return 0;
}
