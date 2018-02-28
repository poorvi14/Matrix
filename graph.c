#include<stdio.h>
#include<malloc.h>

struct graph
{
	int vc;
	struct graph *next;
}*dptr,*tptr,*t1;

struct node
{
	int vn;
	struct node *net;
	struct graph *list;
}*start,*ptr,*rptr,*t;

int i,j;

void vertex()
{
	printf("\n Adjacency list :");
		for(j=0;j<2;j++)
		{
			dptr=malloc(sizeof(struct graph));
			printf("\n enter connected vertex number :");
			scanf("%d",&dptr->vc);
			dptr->next=NULL;
			if(ptr->list==NULL)
			ptr->list=dptr;
			else
			tptr->next=dptr;
			tptr=dptr;
			
		}
}

void display()
{
	t=start;
	while(t!=NULL)
	{
		printf("\n%d",t->vn);
		t1=t->list;
		while(t1!=NULL)
		{
			printf("\t%d",t1->vc);
			t1=t1->next;
		}
		t=t->net;
	}
}
int main()
{
	start=NULL;
	for(i=0;i<3;i++)
	{
		ptr=malloc(sizeof(struct node));
		printf("enter node number : ");
		scanf("%d",&ptr->vn);
		ptr->net=NULL;
		ptr->list=NULL;
		if(start==NULL)
		{
			start=ptr;
			vertex();	
		}
		else
		{
		rptr->net=ptr;
		vertex();
	}
	rptr=ptr;
	}
	display();
}
