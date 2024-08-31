
#include <stdio.h>
#include <stdlib.h>

void insert(int que[], int *r, int *f)

{

    int v;
    if (*r == 9)
    {
        printf("\n queue is overflow");
    }
    else
    {
        printf("\nEnter element:");
        scanf("%d", &v);

        if (*r == -1 && *f == -1)
        {
            *f = *r = 0;
            que[*r] = v;
        }
        else
        {
            *r += 1;
            que[*r] = v;
        }
    }
}
void rem(int que[], int *r, int *f)
{
    if (*f == -1)
    {
        printf("\n Queue is empty:");
    }
    else if (*f == *r)
    {
     
        printf("\nRemove Element:%d", que[*f]);
        *f = *r = -1;
    }
    else
    {
      
        printf("\nRemove Element: %d", que[*f]);
        *f = *f + 1;
    }
}
int simpleFind(int que[], int *r,int serchEl)
{
  int i=0,t=0;
  for(i=0;i<=*r;i++)
  {
    if(que[i]==serchEl)
    {
        t=i;
        break;
    }
  }
  if(i>*r)
  {
    return -1;
  }
  return t;
}
void modify(int que[], int *r, int *f)
{
  int ind,ne,pe;
   printf("\nEnter old value:");
   scanf("%d",&pe);
   printf("\nEnter new value:");
   scanf("%d",&ne);
   ind=simpleFind(que,r,pe);
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

void display(int que[], int *r,int *f)
{
    int i;
    for(i=*f;i<=*r;i++)
    {
        printf("%d ",que[i]);
    }
}
void main()
{
    int r1 = -1, f1 = -1, c,t;
    int *r = &r1;
    int *f = &f1;
    int que[10];

    while (1)
    {
        printf("\n1:insert:");
        printf("\n2:remove:");
        printf("\n3:display:");
        printf("\n4:exit:");
        printf("\nEnter your choice:");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            insert(que, r, f);
            break;
        case 2:
            rem(que, r, f);
            break;
        case 3:
               display(que,r,f);
               break;
        case 4:t=simpleFind(que,r,20);
               printf("%d",t);
               break;
        case 5:
            exit(0);
        }
    }
}