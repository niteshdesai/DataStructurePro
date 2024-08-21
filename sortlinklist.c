#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};


struct node* insert(struct node *head,int ele)
{
	struct node *n,*prev,*curr;

	n=(struct node*)malloc(sizeof(struct node));

    n->data=ele;
	prev=NULL;
	curr=head;
     
	if(head==NULL)
	{
	   
		n->next=NULL;
		head=n;

	}
	else
	{

		while(ele>curr->data && curr!=NULL)
		{
			prev=curr;
			curr=curr->next;
		}
		if(prev!=NULL)
		{
        if(prev->next==NULL)
		{
		    prev->next=n;
			n->next=curr;
		}
		}
		if(head==curr)
		{
           n->next=head;
		   head=n;
		}
		else
		{
	
			prev->next=n;
			n->next=curr;
		}
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
		printf("\n 2:Exit");
		printf("\n Enter your chioce");
		scanf("%d",&c);
		switch(c)
		{
		case 1:printf("\n Enter element :");
			   scanf("%d",&data);
			   head=insert(head,data);
			   display(head);
			   break;
		case 2:exit(0);
		}
	}
	getch();
}