#include<stdio.h>
int main(){
	
	char txt[50];
	int day_number;
	
	printf("enter the number of day : ");
	scanf("%d",&day_number);
	
	switch(day_number){
		case 1:
			printf("Friday");
			break;
			
		case 2:
			printf("Sutarday");
			break;
		
		case 3:
			printf("Sunday");
			break;
			
		case 4:
			printf("Monday");
			break;
			
		case 5:
			printf("Tuesday");
			break;
		
		case 6:
			printf("Wesnesday");
			break;
			
		case 7:
			printf("Thurstday");
			break;
			
		default:
			printf("enter 1-7 input number");
					
	}
	
	
	
	
	return 0;
}