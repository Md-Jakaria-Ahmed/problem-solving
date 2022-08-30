#include<stdio.h>
int main(){
	
	float units,survice_charge,total,total_bill;
	
	printf("Enter Electricity Units: ");
	scanf("%f",&units);
	
	if(units <= 50){
		
		total = (units * 0.50);		
	}
	else if(units <= 150){
		total = 25.0 + ((units-50) *0.75);
	}
	else if(units <= 250){
		total = 100.0 + ((units-150) * 1.2);
	}
	else{
		total = 220 + ((units-250) *0.75);
	}
	
	
	survice_charge  = (total * 0.20);
	total_bill = survice_charge + total ;
	
	
	printf("Electric bill : %.2f",total_bill);
	
	
	return 0;
}