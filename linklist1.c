
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
};

struct node* insert(struct node *head,int d)
{
	struct node *ne;
  
	ne=(struct node*)malloc(sizeof(struct node));

	ne->data=d;
	
	if(head==NULL)
	{
		
		ne->next=NULL;
		head=ne;
	
	}
	else
	{
		
		ne->next=head;
		head=ne;
	}
	return head;
}

struct node* del(struct node *head)
{
	struct node *temp;
	temp=head;

	if(temp==NULL)
	{
       printf("list is empty:");
	}
	else
	{
		head=temp->next;
		free(temp);
	}
	return head;
}
void display(struct node *head)
{
	struct node *temp;
	temp=head;
    

    while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void main()
{
	struct node *head=NULL;
	int data,c;

	while(1)
	{
		printf("\n 1:insert");
		printf("\n 2:delete");
		printf("\n 3:Exit");
		printf("\n Enter your chioce");
		scanf("%d",&c);
		switch(c)
		{
		case 1:printf("\n Enter element :");
			   scanf("%d",&data);
			   head=insert(head,data);
			   display(head);
			   break;
		case 2:head=del(head);
			   display(head);
			   break;
		case 3:exit(0);
		}
	}
	getch();
}