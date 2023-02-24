#include<stdio.h>
main()
{
	int n;
	int a,b,c;
	printf("====Calculator====\n");
	printf("1: Addition\n");
	printf("2: Substraction\n");
	printf("3: Multiplication\n");
	printf("4: Division\n\n");
	printf("Enter the value A=");
	scanf("%d",&a);
	printf("Enter the value of B=");
	scanf("%d",&b);
	printf("Give your choice=");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			c=a+b;
			printf("Addition of number is=%d",c);
			break;
		case 2:
			c=a-b;
			printf("Substraction of number is=%d",c);
			break;
		case 3:
			c=a*b;
		    printf("Multiplication of number is=%d",c);
			break;
		case 4:
			c=a/b;
		    printf("Division of number is+%d",c);
			break;
			
		default:
			printf("Enter the valid character");		
	}
}
