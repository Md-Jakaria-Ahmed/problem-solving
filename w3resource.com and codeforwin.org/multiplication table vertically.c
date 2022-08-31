#include<stdio.h>
int main(){
	
	int i,n,multiplication;
	
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
		
	for(i=1; i<=n; i++){
		
		for(int j=1; j<=10; j++){
			
			multiplication = (j*i);
			printf("%d X %d = %d\n",i,j,multiplication);
		}
		
		printf("\n");				
	}
	

	
	return 0;
}

