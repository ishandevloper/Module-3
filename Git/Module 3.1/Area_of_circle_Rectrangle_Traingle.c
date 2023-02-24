/*  WAP to find area of circle, rectangle and triangle */
#include<stdio.h>
main()
{
	float radius, cirarea;
	int length, breadth, rectarea, base, height, triarea;
	
	printf("Enter Radius of circle:");
	scanf("%f", &radius);
	
	cirarea = 3.14 * radius * radius;
	
	printf("\nArea of circle is: %f", cirarea);
	
	printf("\n\nEnter Length of Rectangle:");
	scanf("%d", &length);
	printf("\n\nEnter Breadth of Rectangle:");
	scanf("%d", &breadth);
	
	rectarea = length * breadth;
	
	printf("\nArea of Rectangle is: %d", rectarea);
	
	printf("\n\nEnter Base of Triangle:");
	scanf("%d",&base);
	printf("\n\nEnter Height of Triangle:");
	scanf("%d",&height);
	
	triarea = (base * height)/2;
	
	printf("\nArea of Triangle is: %d", triarea);
	
}
