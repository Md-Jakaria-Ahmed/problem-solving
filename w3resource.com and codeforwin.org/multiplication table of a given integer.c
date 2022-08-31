#include<stdio.h>
int main(){
	
	int i,n,multiplication;
	
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
		
	for(i=1; i<=10; i++){
		
		multiplication = (n*i);
		printf("%d X %d = %d\n",n,i,multiplication);
		
	}
	

	
	return 0;
}

