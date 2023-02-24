/*WAP to check if the given year is a leap year or not.*/


#include<stdio.h>
main()
{
	int year;
	printf("ENTER THE VALUE : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{printf("LEAP YEAR");
	
	}
	else 
	{
		printf("NON LEAP YEAR");
	}
}
