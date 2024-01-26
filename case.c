#include<stdio.h>
main(){
int day;
printf("please Enter the day number\n");
scanf("%d",&day);
switch(day)
{
	case 1:
		printf("monday");
		break;
		case 2:
		printf("tuesday");
		break;
		case 3:
		printf("wensenday");
		break;
		case 4:
		printf("thursday");
		break;
		case 5:
		printf("friday");
		break;
		case 6:
		printf("saturday");
		break;
		case 7:
		printf("sunday");
		break;
		default:
			printf("please Enter the valid number");
			
		
		
	}	
}
