#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int sq[10];
int gq[10];

void insert(int *r,int *f,int *r1,int *f1)
{
	int v;
	
	if(*r!=9)
	{
		printf("Enter element:");
		scanf("%d",&v);
		
		if(v>60)
		{
			if(*r==-1&&*f==-1)
			{
				*r=0;
				*f=0; 
				sq[*r]=v;
			}
			else
			{
				*r=*r+1;
				sq[*r]=v;
			}
		}
		else
		{
			if(*r1==-1 &&  *f1==-1)
			{
				*r1=0;
				*f1=0;
				gq[*r1]=v;
			}
			else
			{
				*r1=*r1+1;
				gq[*r1]=v;
			}
		}
	}
}
void display(int *r,int *f,int *r1,int *f1)
{
	int i=0;
	 printf("\n\n");
	for(i=*f;i<=*r;i++)
	{
		printf(" %d ",sq[i]);
	}
	printf("\n");
	for(i=*f1;i<=*r1;i++)
	{
		printf(" %d ",gq[i]);
	}
}

void rem(int *r,int *f,int *r1,int *f1)
{
	if(*r!=-1)
	{ 
		if(*f==*r)
		{
			printf("Remove GQ %d value:",*f);
			printf("%d",sq[*f]);
		    *r=-1;
			*f=-1;
			
		}
		else
		{ 
			printf("Remove SQ %d value:",*f);
			printf("%d",sq[*f]);
			*f=*f+1;
			
		}
		
	}
	
	else
	{
		
		if(*r==-1)
		{
			if(*r1!=-1)
			{
				if(*f1==*r1)
				{
					printf("Remove GQ %d value:",*f1);
					printf("%d",gq[*f1]);
					*r1=-1;
					*f1=-1;
					
				}
				else
				{
					printf("Remove GQ %d value:",*f1);
					printf("%d",gq[*f1]);
				    *f1=*f1+1;
					
				}
				
			}
			else
			{
				printf("\ng-q is empty:");
			}
		}
	}
}

void main()
{
	
	int rr=-1,rr2=-1,ff=-1,ff2=-1,c;
	
	int *r=&rr,*r1=&rr2,*f=&ff,*f1=&ff2;
	
	while(1)
	{
		printf("\n1:insert:");
		printf("\n2:delete:");
		printf("\n3:exit:");
		printf("\nEnter value");
		scanf("%d",&c);
		
		switch(c)
		{
		case 1:insert(r,f,r1,f1);
			   display(r,f,r1,f1);
			   break;
		case 2:rem(r,f,r1,f1);
			   display(r,f,r1,f1);
			break;
		case 3:exit(0);
		}
	}
	
	getch();
	
}
