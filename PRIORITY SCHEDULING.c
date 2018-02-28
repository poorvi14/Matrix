#include<stdio.h>

int l;

struct pro
{
	int pn,pr,burst_time;
}a[],temp;

int front=-1,rear=-1,i,j;

int main()
{
	printf("enter the total no. of processes ");
	scanf("%d",&l);
	a[l];
	
		
	for(i=0;i<l;i++)
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			printf("\n enter process no., burst time and priority respectively ");
			scanf("%d",&a[i].pn);
			scanf("%d",&a[i].burst_time);
			scanf("%d",&a[i].pr);
		}
		else
		{
			printf("\n enter process no., burst time and priority respectively ");
			scanf("%d",&a[i].pn);
			scanf("%d",&a[i].burst_time);
			scanf("%d",&a[i].pr);
			rear++;
		}
	}
	
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i].pr>a[j].pr)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	
display();
	
}

void display()
{
		printf("completed processes with their process no. and burst time accoridng to their priority order are:");
		printf("\n");
	for(i=front;i<=rear;i++)
    {
	printf("%3d %3d %3d",a[i].pn,a[i].burst_time,a[i].pr);
    printf("\n");
}
}
