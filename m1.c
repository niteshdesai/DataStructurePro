#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* insert(struct node *head)
{
  struct node *n,*c,*p;
  int ele;
  n=(struct node *)malloc(sizeof(struct node));
  printf("Enter element:");
  scanf("%d",&ele);
  c=head;
  p=NULL;
  n->data=ele;

  if(head==NULL)
  {
   n->next=n;
   head=n;
  }
  else
  {
  while(head->data>ele?1:c->data<ele)
  {
  p=c;
  c=c->next;
  if(c==head )
  {  
    break;
  }
  }
  if(head->data>ele)
  {
   n->next=head;
   head=n;
   p->next=head;
  }
  else
  {
   p->next=n;
   n->next=c;
  }
  }
  return head;
 }
  void dis(struct node *head)
  {
   int i;
   struct node *temp=head->next;
   printf("%d ",head->data);
   while(temp!=head)
   {
    printf(" %d ",temp->data);
    temp=temp->next;
   }
  }
struct node* rem(struct node *head,int ele)
{
 struct node *c,*p;
 c=head;NULL;
 if(head==NULL)
 {
    printf("Element not present:");
 }
 else
 {
 while(c->data<ele)
 {
   p=c;
   c=c->next;
 }
 if(c==head)
 {
 head=c->next;
 free(c);
 }
 else
 {
 p->next=c->next;
 free(c);
 }
 }
 return head;
}
void main()
{
  int c,ele;
  struct node *head=NULL;

  do
  {
  printf("\n1.push");
  printf("\n2.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
  case 1:
       head=insert(head);
       dis(head);
       break;
  case 2:
         printf("Enter element to remove:");
         scanf("%d",&ele);
         head=rem(head,ele);
         //dis(head);
  case 3:break;
  }
  }
  while(c!=3);
}