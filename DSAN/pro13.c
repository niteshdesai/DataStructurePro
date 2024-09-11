#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct node
{
    struct node *pre;
    int id;
    char name[10];
    struct node *next;
};
struct node* insert(struct node *head,int id,char nm[])
{
    struct node *n,*prev,*curr;

   n=(struct node*)malloc(sizeof(struct node)) ;
   n->id=id;
   strcpy(n->name,nm);

    if(head==NULL)
    {
      
        n->pre=n;
        n->next=n;
        head=n;
        return head;
    }
   curr=head;
   prev=NULL;
        do
        {
              prev=curr;
              curr=curr->next;
             if (curr == head || id < curr->id) {
              break;
             }
        }while (curr!=head);
            
            n->next=curr;
            n->pre=prev;
            prev->next=n;
            curr->pre=n;
   if (curr == head && id<head->id) {
        head = n;
    }
    return head;
}
struct node* del(struct node *head)
{
    int ele;
    struct node *c=head;
    if(head==NULL)
       printf("\nList is empty ");
    else
    {
      printf("\nEnter id to delete:");
      scanf("%d",&ele);
      if(head->next==head && head->id==ele)
           head=NULL;
     else if(head->id==ele)
        {
           head->pre->next=head->next;
           head->next->pre=head->pre;
           head=head->next;
           printf("\nData is delete successfully");
        } 
     else
     { 
      do
      {
        if(c->id==ele)
           break;
        c=c->next;
      }while (c!=head);
      if(c==head)
         printf("\nElement is not present");
      else
      {
         c->pre->next=c->next;
         c->next->pre=c->pre;
        printf("\nData is delete successfully");
      }
     }
     free(c);
    }
    return head;
}
void modify(struct node *head)
{
    int per,nele;
    struct node *c=head;
    if(head==NULL)
    {
        printf("\nList is empty ");
    }
    else
    {
          printf("\nEnter Previous id: ");
          scanf("%d", &per);  
          printf("\nEnter newElement id: ");
          scanf("%d", &nele);
          do
          {
             if(c->id==per)
              break;
            c=c->next;
          } while (c!=head);
         if(c==head)
           printf("\nprevious element is not present");
        else
           c->id=nele;  
        
    }
}
void display(struct node *head)
{
    struct node *t=head;
        if(head==NULL)
    {
        printf("\nList is empty ");
    }
    else
    {
            do
    {
        printf(" %d ",t->id);
         printf(" %s ",t->name);
        t=t->next;
      
    } while (t!=head);
    }

    
}
void main()
{
    struct node *head=NULL;
    int choice,id;
    char name[10];
    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.delete");
        printf("\n3.modify");
        printf("\n4.display");
        printf("\n5.exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter id: ");
            scanf("%d",&id);
             printf("\nEnter name: ");
            scanf("%s",name);
            head=insert(head,id,name);
            break;
        case 2:
            head=del(head);
            break;
        case 3:
             modify(head);
             break;
        case 4:
            display(head);
            break;
        case 5:
               exit(0);
        default:printf("\nPlease,enter valid choice");
            break;
        }
    }
   
}