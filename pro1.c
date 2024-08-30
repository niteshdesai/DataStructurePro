#include<stdio.h>
#define max 5
// int add(int arr[],int top);
// int del(int arr[],int top);
// int simpleFind(int arr[],int top,int serchEl);

int add(int arr[],int top)
{
  int ele;
  if(top==max-1)
  {
    printf("Array is overflow:");
  
  }
  else{
    printf("Enter Element:");
    scanf("%d",&ele);
    top++;
    arr[top]=ele;
    
  }
  
   return top;
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
int del(int arr[],int top)
{
  int ele,tr=0,i;
  if(top==-1)
  {
    printf("array is empty");
  }
  else
  {
    printf("Enter Element:");
    scanf("%d",&ele);
    tr=simpleFind(arr,top,ele);
    if(tr!=-1)
    {
    for(i=tr;i<top;i++)
    {
        arr[i]=arr[i+1];
    }
    top--;
    }
  }
  return top;
}

void sort(int arr[],int top)
{
   int temp,i,j;
 for(i=0;i<=top;i++)
 {
  for(j=i+1;j<top;j++)
  {
   if(arr[i]>arr[j])
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
 }

}

void modify(int arr[],int t)
{
  int ind,ne,pe;
   printf("\nEnter old value");
   scanf("%d",&pe);
   printf("\nEnter new value:");
   scanf("%d",&ne);
   ind=simpleFind(arr,t,pe);
   if(ind!=-1)
     arr[ind]=ne;
   else
     printf("\nElement is not present in array");

}

void binarysearch(int arr[],int s_ele,int top)
{
     sort(arr,top);
	int mid,low=0,high=max;

	while(high>=low)
	{
		mid=(low+high)/2;

		if(arr[mid]==s_ele)
		{
			printf("%d is available in array",s_ele);
			break;
		}
		
        else{
			
			if(arr[mid]<s_ele)
			{
	         low=mid+1;	   
			}
		   else
		   {
			high=mid-1;
		   }
		}
	}
	if(low>high)
	{
        printf("%d is not available in array:",s_ele);	
	
	}

}

void display(int arr[],int top)
{
  int i;
  for(i=0;i<=top;i++)
  {
    printf("%d ",arr[i]);
  }
}

void main()
{
  int arr[]={10,5,12,45,6,2,21};
  int top=-1,i,choice,sele;
  while(1)
  {
    printf("\n1:add");
    printf("\n2:delet");
    printf("\n3:modify");
    printf("\n4:sort");
    printf("\n5:simple search");
    printf("\n6:binary search");
    printf("\nEnetr your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:top=add(arr,top);
           display(arr,top);
           
      break;
    case 2:top=del(arr,top);
           display(arr,top);
           break;
           
    case 3:modify(arr,top);
           display(arr,top);
           break;
     case 4:sort(arr,top);
           display(arr,top);
           break;
    case 5:printf("\nEnter element for search:");
           scanf("%d",&sele);
           int tr=simpleFind(arr,top,sele);
           printf("position of %d is %d ",sele,tr);
           display(arr,top);
           
      break;
   case 6:printf("\nEnter element for search:");
           scanf("%d",&sele);
           binarysearch(arr,sele,top);
           break;
    
    default:
      break;
    }
  }
}