/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/

#include<stdio.h>
main()
{
	int a,b,ans=0;
	printf("ENTER THE VALUE A :");
	scanf("%d",&a);
	printf("ENTER THE VALUE B :");
	scanf("%d",&b);
	

	ans=a+b;
	printf("\nans=%d",ans);
	ans=a-b;
	printf("\nans=%d",ans);	
	ans=a*b;
	printf("\nans=%d",ans);
	ans=a/b;
	printf("\nans=%d",ans);


	ans=b%a;
	printf("\nANSWER %d",ans);
}
