#include<stdio.h>
int main(){
	
	int total_amount;
	int thousand,fiveHundred,onehundred,fifty,twenty,ten,five,two,one;
	
	printf("enter your total amount : ");
	scanf("%d",&total_amount);
	
	
	
	if(total_amount >= 1000){
		
		thousand = total_amount/1000;
		total_amount = total_amount - (thousand * 1000);
		printf("1000 : %d\n", thousand);
	}
    if(total_amount >= 500){
		
		fiveHundred = total_amount/500;
		total_amount = total_amount - (thousand * 500);
		printf("500 : %d\n", fiveHundred);
	}
	if(total_amount >= 100){
		
		onehundred = total_amount/100;
		total_amount = total_amount - (thousand * 100);
		printf("100 : %d\n", onehundred);
	}
	if(total_amount >= 50){
		
		fifty = total_amount/50;
		total_amount = total_amount - (fifty * 50);
		printf("50 : %d\n",fifty);
	}
	if(total_amount >= 20){
		
		twenty = total_amount/20;
		total_amount = total_amount - (twenty * 20);
		printf("20 : %d\n", twenty);
	}
	if(total_amount >= 10){
		
		ten = total_amount/10;
		total_amount = total_amount - (ten * 10);
		printf("10 : %d\n", ten);
	}
	if(total_amount >= 5){
		
		five = total_amount/5;
		total_amount = total_amount - (five * 5);
		printf("5 : %d\n",five);
	}
	if(total_amount >= 2){
		
		two = total_amount/2;
		total_amount = total_amount - (two * 2);
		printf("2 : %d\n", two);
	}
	if(total_amount >= 1){
		
		one = total_amount/1;
		total_amount = total_amount - (one * 1);
		printf("1 : %d\n",one);
	}
	else{
		
		printf("0 : 0 ");
	}
	
	
	
	
	return 0;
}