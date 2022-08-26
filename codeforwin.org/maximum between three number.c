#include<stdio.h>
int main(){
	
	int n1,n2,n3;
	
	printf("enter first number n1 : ");
	scanf("%d",&n1);
	
	printf("enter second number n2 : ");
	scanf("%d",&n2);
	
	printf("enter third number n3 : ");
	scanf("%d",&n3);
	
	
	if(n1 > n2){
		if(n1 > n3){
			printf("maximum number n1 : %d",n1);
		}
		else{
			printf("maximum number n3 : %d",n3);
		}	
	}
	else if(n2 > n1){
		if(n2 > n3){
			printf("maximum number n2 : %d",n2);
		}
		else{
			printf("maximum number n3 : %d",n3);
		}
	}
	
	
	
	
	
}