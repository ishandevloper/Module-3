#include<stdio.h>
main()
{
	int a[10],i,evensum=0,oddsum=0;
	
	printf("Enter 10 Number: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n=>Even Number are :");
	for (i=0;i<10;i++)
	{
		if(a[i]%2==0)
		printf("%d,",a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		  evensum+=a[i];
	}
	printf("\n=>Sum of even number are :%d", evensum);
	
	printf("\n\n=>Odd Number are :");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		printf("%d,",a[i]);
	}
	for(i=0;i<10;i++)
		{
			if(a[i]%2==1)
			 oddsum+=a[i];
		}
		printf("\n=>Sum of Odd numbers are : %d",oddsum);
}
