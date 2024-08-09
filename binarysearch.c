#include<stdio.h>
#include<conio.h>

void binarysearch(int ele[],int s_ele)
{
	int mid,low=0,high=9;

	while(high>=low)
	{
		mid=(low+high)/2;

		if(ele[mid]==s_ele)
		{
			printf("%d is available in array",s_ele);
			break;
		}
		
        else{
			
			if(ele[mid]<s_ele)
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
void main()
{
	int ele[10],s_ele,i;


	for(i=0;i<=9;i++)
	{
		printf("\n Enter element:");
		scanf("%d",&ele[i]);
	}
	printf("\nEnter search element:");
	scanf("%d",&s_ele);

    binarysearch(ele,s_ele);
	getch();
}