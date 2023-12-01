#include<stdio.h>
main()
{
	char day;
	
	printf("Enter s for sunday\n");
	printf("Enter m for monday\n");
	printf("Enter t for tuesday\n");
	printf("Enter w for wednesday\n");
	printf("Enter T for Thursday\n");
	printf("Enter f for friday\n");
	printf("Enter S for Saturday\n");
	
	printf("Enter for day=");
	scanf("%c",&day);
	
	switch(day){
		case 's':
			printf("Sunday");
			break;
			
			case 'M':
		 	    printf("Monday");
				break;
			
			case 't':
				printf("tuesday");
				break;
				
			case 'w':
				printf("wednesday");
				break;
				
			case 'T':
				printf("Thursday");
				break;
				
			case 'f':
				printf("friday");
				break;
				
			case 'S':
				printf("Saturday");
				break; 
				
			default:
		     	printf("plz enter the day between suggestion");
    }
}