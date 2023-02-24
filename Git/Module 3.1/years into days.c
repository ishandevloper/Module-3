#include<stdio.h>
main()
{
	int days,years;
	
	printf("Enter days:");
	scanf("%d",&days);
	
	years= days/365;
	
	printf("\nNumber of year is : %d",years);
	
	printf("\n\nEnter years :");
	scanf("%d",&years);
	
	days= years*365;
	printf("\nNumber of the days is : %d",days);
	
}
