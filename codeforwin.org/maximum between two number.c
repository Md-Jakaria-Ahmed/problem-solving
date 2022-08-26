#include<stdio.h>
int main(){
		
	int n1,n2;
	
	printf("enter first number: ");
	scanf("%d",&n1);
	
	printf("enter second number: ");
	scanf("%d",&n2);
	
	if(n1 > n2){
		printf("maximum number n1 : %d",n1);
	}else{
		printf("maximum number n2 : %d",n2);	
	}
	
	return 0;
}