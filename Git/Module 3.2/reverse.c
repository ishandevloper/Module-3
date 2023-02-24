#include<stdio.h>
main()
{
	int i,n,reverse=0,reminder;
	printf("ENTER NUMBER :");
	scanf("%d",&n);
	
	for(i=0;n!=0;i++)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n/=10;

	}
	printf("REVERSE NUMBER IS :%d",reverse);
}
