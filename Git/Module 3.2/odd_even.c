#include<stdio.h>
main()
{
	int a[10],i,odd=0,even=0,sum=0,Sum_even=0,Sum_odd=0;
	for(i=0;i<10;i++)
	{
		printf("enter array element : ");
		scanf("%d",&a[i]);
	}
	

	 for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		    {
			  even++;
		     Sum_even+=a[i];
		     
		}
	

	else
	{

	 odd++;
	 Sum_odd+=a[i];
	}
}
printf("\nSum of even number : %d & sum of odd number: %d",Sum_even,Sum_odd);
printf("\nTotal even number is %d ",even);
printf("\nTotal odd number is %d ",odd);
}
