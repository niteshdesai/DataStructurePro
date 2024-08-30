#include<stdio.h>
#include<stdlib.h>


int push(int stack[],int top)
{
	int v;
   if(top==9)
   {
	   printf("\nstack is overflow:");
   }
   else
   {
	   printf("\nEnter number:");
	   scanf("%d",&v);
	    top++;
	   stack[top]=v;
	  
	   
   }
   return top;
}

int  pop(int stack[],int top)
{
	if(top==0)
	{
		printf("\nStack is underflow:");
	}
	else
	{
		top--;
		printf("\nTop value:%d",stack[top]);
	}
	return top;
}
int peep(int stack[],int top)
{

  if(top==-1)
    return top;
  else
  {

  return stack[top];
  }
}

int simpleFind(int arr[],int top,int serchEl)
{
  int i=0,t=0;
  for(i=0;i<=top;i++)
  {
    if(arr[i]==serchEl)
    {
        t=i;
        break;
    }
  }
  if(i>top)
  {
    return -1;
  }
  return t;
}
void modify(int stack[],int top)
{
  int ind,ne,pe;
   printf("\nEnter old value:");
   scanf("%d",&pe);
   printf("\nEnter new value:");
   scanf("%d",&ne);
   ind=simpleFind(stack,top,pe);
   if(ind!=-1)
   {
     stack[ind]=ne;
     printf("Change value %d  to %d",pe,ne);
   }
   else
   {
     printf("\nElement is not present in array");
   }

}
void display(int stack[],int top)
{
	int i;
	for(i=0;i<=top;i++)
	{
	  printf("%d ",stack[i]);
	}

}

void main()
{
	int stack[10],top=-1,ch,val;

	while(1)
	{
		printf("\n1:push..");
		printf("\n2:pop..");
		printf("\n3:display..");
		printf("\n4:exit..");
		printf("\nEnter your choice:");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:top=push(stack,top);
			   break;
		case 2:top=pop(stack,top);
			   break;
		case 3:display(stack,top);
			   break;
		case 4:val=peep(stack,top);
		       printf("Stack Top Element:%d",val);
			   break;
		case 5:modify(stack,top);
	        	break;
		case 6:exit(0);
		}
	}
	
}