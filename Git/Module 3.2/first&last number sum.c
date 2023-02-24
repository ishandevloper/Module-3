#include<stdio.h>
main()
{
	int n,no1,no2,sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	no1=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	no2 = n;
	sum = no1 + no2 ;
	printf("Reverse Number Is : %d",sum);
}
