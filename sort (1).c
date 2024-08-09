#include<stdio.h>
#include<conio.h>

struct student
{
	int no;
	char name[10];
	float res;
};

void read(struct student s[])
{
	int i;

	for(i=0;i<3;i++)
	{
		printf("Enter your roll no::");
		scanf("%d",&s->no);
		printf("Enter your name::");
		scanf("%s",s->name);
		printf("Enter your result marks::");
		scanf("%f",&s->res);

	}
}

void print(struct student s[])
{
	int i;

	for(i=0;i<3;i++)
    {
		printf("\nRoll No:%d",s->no);
		printf("\nName:%s",s->name);
		printf("\nResault Marks:%f",s->res);
	}
}

void main()
{
	struct student s[10];
	
	read(s);
	print(s);
	getch();
}