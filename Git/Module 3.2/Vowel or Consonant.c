#include<stdio.h>
main()
{
	int ch;
	printf("enter any alphabets : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
        case 'O':
        case 'U':
        	printf("%c is a vowel",ch);
        	break;
        
		default:
			printf("%c is constant",ch);
	}
}
