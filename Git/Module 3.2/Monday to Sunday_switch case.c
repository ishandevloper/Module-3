#include<stdio.h>
main()
{
	int Days;
	printf("enter number :");
	scanf("%d",&Days);
	
	switch (Days)
	{ 
	case 1:
	    printf("monday");
	    break;
	case 2:
	    printf("tuesday");
		break;
	case 3:
	    printf("Wednesday");
		break;
	case 4:
	    printf("Thursday");
		break;
	case 5:
	    printf("Friday");
		break;
	case 6:
	    printf("Saturday");
		break;
	case 7:
	    printf("Sunday");
	    break;
				
	default:
	printf("Enter valid data ");						   
	   
		
	}
}
