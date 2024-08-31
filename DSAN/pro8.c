#include<stdio.h>

#include<stdlib.h>

#define max 5

int que[max];

void insert(int *r,int *f)
{
	int val=0;
	if(*r==max-1 &&*f==0 || *r==*f-1)
	{
		printf("que is full\n");
	}
	else
	{
		printf("Enter Element:");
		scanf("\n%d",&val);

		if(*r==-1&&*f==-1)
		{
			 *f=*r=0;
			 que[*r]=val;
		}
		else if(*r==max-1&&*f!=0)
		{
		    *r=0;
			que[*r]=val;
		}
		else
		{
			*r=*r+1;
			que[*r]=val;
		}
	}
	
}


void removesq(int *r,int *f)
{
	 if(*f==-1&&*r==-1)
	 {
		 printf("\nque is empty:\n");
	 }
	 else if(*f==*r)
	 {
		 printf("\n%d",que[*f]);
		 que[*f]=0;
		 *f=-1;
		 *r=-1;
	 }
	 else if(*f==max-1&&*r<*f)
	 {
		 printf("\n%d",que[*f]);
		 que[*f]=0;
	     *f=0;
	 }
	 else
	 {
		 
		 printf("\n%d\n",que[*f]);
		 que[*f]=0;
		 *f=*f+1;
	 }
}

void display()
{

	 int i=0;

	 for(i=0;i<max;i++)
	 {
		 printf("\n%d ",que[i]);
	 }
}
int simpleFind(int *r,int *f,int serchEl)
{
  int i=0,t=0;

  if(*r<*f)
  {
     for(i=0;i<=max;i++)
     {
       if(que[i]==serchEl)
       {
        t=i;
        break;
       }
     } 
  }
  else
  {
  for(i=0;i<=*r;i++)
  {
    if(que[i]==serchEl)
    {
        t=i;
        break;
    }
  }
  }
  if(i>*r)
  {
    return -1;
  }
  return t;
}
void modify(int *r,int *f)
{
  int ind,ne,pe;
   printf("\nEnter old value:");
   scanf("%d",&pe);
   printf("\nEnter new value:");
   scanf("%d",&ne);
   ind=simpleFind(r,f,pe);
   if(ind!=-1)
   {
     que[ind]=ne;
     printf("Change value %d  to %d",pe,ne);
   }
   else
   {
     printf("\nElement is not present in array");
   }
   

}
void main()

{
	int r1=-1,f1=-1,c;
	int *r=&r1;
	int *f=&f1;
  
	while(1)
	{
		printf("\n1:insert:");
		printf("\n2:remove:");
		printf("\n3:modify:");
		printf("\n4:exit:");
		
		printf("\nEnter your choice:");
		scanf("%d",&c);

		switch(c)
		{
		case 1:insert(r,f);
			   display();
			   break;
		case 2:removesq(r,f);
			   display();
			   break;
	 	case 3:modify(r,f);
			   display();
			   break;
		case 4:exit(0);

		}
	}
	
}