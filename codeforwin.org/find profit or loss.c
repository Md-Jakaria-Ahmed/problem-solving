#include<stdio.h>
int main(){
	
	
	float cost_price,sell_price,profit,loss;
	
	printf("enter amount of costing price  : ");
	scanf("%f",&cost_price);
	
	printf("enter amount of selling price  : ");
	scanf("%f",&sell_price);
	
	
	if(sell_price > cost_price){
		
		profit = (sell_price - cost_price);
		printf("profit : %.2f",profit);
	}
	else if(sell_price < cost_price){
		
		loss = (cost_price - sell_price);
		printf("loss : %.2f",loss);
	}
	else{
		printf("no porfit no loss");
	}
	
	
	
	return 0;
}