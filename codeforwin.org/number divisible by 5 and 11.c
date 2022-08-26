#include<stdio.h>
int main(){
	
	int number;
	
	printf("enter the number : ");
	scanf("%d",&number);
	
	if(number%5 == 0 && number%11 == 0){
		printf("divisible");
	}else{
		printf("not divisible");
	}
	
	
	return 0;
}