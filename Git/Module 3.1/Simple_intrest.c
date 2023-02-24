/*WAP to find simple interest*/

#include<stdio.h>
main()
{
	int p,n,r,SI;
	
	printf("Enter the value P :");
	scanf("%d",&p);
	
	printf("Enter the value N :");
	scanf("%d",&n);
	
	printf("Enter the value R :");
	scanf("%d",&r);
	
	SI=p*n*r/100;
	printf("SI: %d",SI);
	
	
	
}
