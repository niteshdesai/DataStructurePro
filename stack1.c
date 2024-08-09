#include<stdio.h>
#include<conio.h>

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
	   stack[top]=v;
	   top++;
	   
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
void display(int stack[],int top)
{
	int i;
	for(i=0;i<top;i++)
	{
	  printf("%d",stack[i]);
	}

}

void main()
{
	int stack[10],top=0,ch;

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
		case 4:exit();
		}
	}
	getch();
}