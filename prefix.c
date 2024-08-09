#include<stdio.h>
#include<conio.h>


char stack[10];

int prec(char ch)
{
	if(ch=='+' || ch=='-')
	{
		return 1;
	}
	else if(ch=='*'||ch=='/')
	{
		return 2;
	}
	return 0;
	
}
int push(char ch,int top)
{
   
	if(top==9)
	{
		printf("stack is overflow::");
	}
	else
	{	
		top++;
		stack[top]=ch;
	
	}
	return top;
}
int pop(int top)
{
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
	    printf("%c",stack[top]);
		top--;
	}
	return top;

}
void prefix(char ch[],int top)
{
	int i=0;

	while(ch[i]!=';')
	{
		if(ch[i]=='+' || ch[i]=='-')
		{
		    //printf("first if call");
			if(top==-1)
			{

			top=push(ch[i],top);
		
			}
			else if(prec(stack[top])>=prec(ch[i]))
			{
			//	printf("first else if");
				top=pop(top);
				top=push(ch[i],top);
			}
			else
			{
				top=push(ch[i],top);
			}
		}
		else if(ch[i]>='a' && ch[i]<='z')
		{
		//	printf("second else if");
			printf("%c",ch[i]);
		}
		i++;
	}
	while(top!=-1)
	{
		top=pop(top);
	}
}


void main()
{
	char s[10];
	int top=-1;
	printf("Enter char :");
	scanf("%s",s);
	prefix(s,top);
	getch();
}