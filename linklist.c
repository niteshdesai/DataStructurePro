#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};


void insert(struct node *head,int data)
{
	struct node *n;

	n=(struct node*)malloc(sizeof(struct node));

	if(head==NULL)
	{
		n->data=data;
		n->next=NULL;
		head=n;
	}
	else
	{
		n->data=data;
		n->next=head;
		head=n;
	}
}

void display(struct node *head)
{
	struct node *temp;

	temp=head;
    if(head==NULL)
	{
		printf("link list is empty:");
	}
	else
	{
		printf("%d",temp->data);
         temp=temp->next;
		
	}
}

void main()
{
	struct node *head;

	int d,c;
    
    
	while(1)
	{
		printf("1:insert");
		printf("\n2:exit");
		printf("\n Enetr your choice:");
		scanf("%d",&c);
        
		switch(c)
		{
		   case 1: printf("Enter data:");
	               scanf("%d",&d);
			       insert(head,d);
			       break;
		   case 2:exit(0);
		}
		getch();

	}


}