#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int sq[10];
int gq[10];

//void insert(int *r,int *f,int *r1,int *f1)
//{
//int v;
	
//	if(*r!=9)
//	{
//	printf("Enter element:");
//		scanf("%d",&v);
//		
//		if(v>60)
//		{
//			if(*r==-1&&*f==-1)
//			{
///				*r=0;
//				*f=0;
//				sq[*r]=v;
///			}
//			else
///			{
//			*r=*r+1;
//				sq[*r]=v;
//			}
//		}
//		else
//		{
//			if(*r1==-1&&*f1=-1)
//			{
//				*r1=0;
//			*f1=0;
//				sq[*r1]=v;
///			}
//			else
//		{
///				*r1=*r1+1;
//				sq[*r1]=v;
//			}
//		}
//	}
//}

void remo(int *r,int *f,int *r1,int *f1)
{
	if(*r==-1)
	{
		printf("first");
	}
	if(*r1==-1)
	{
		printf("second");
	}
}

void main()
{
	
	int rr=-1,rr2=-1,ff=-1,ff2=-1;

	int *r=&rr,*r1=&rr2,*f=&ff,*f1=&ff2;
	
	
	clrscr();
	remo(r,f,r1,f1);
	getch();

}
