#include<stdio.h>
int main(){
	
	int i,j,number;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	
	for(i=1; i<=number; i++){
		
		for(j=1; j<=i; j++){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	
	
	return 0;
}