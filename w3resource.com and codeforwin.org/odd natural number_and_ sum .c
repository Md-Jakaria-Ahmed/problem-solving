#include<stdio.h>
int main(){
	
	int i,odd_number,odd,sum=0;
	
	printf("Enter total odd number: ");
	scanf("%d",&odd_number);
	
	printf("Natural Odd numbers : \n");
	
	for(i=1; i<=odd_number; i++){
		
		odd = (i*2)-1;
		
		printf("%d\t",odd);
		
		sum+=odd;
	}
	
	printf("\n\n");	
	printf("Sum of the Natural Odd Number: %d",sum);
	
		
	
	return 0;
	
}


