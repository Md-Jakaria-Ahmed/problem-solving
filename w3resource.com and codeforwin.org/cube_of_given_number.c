#include<stdio.h>
int main(){
	
	int i,n,cube;
	
	
	printf("How many times do you want to proccess the loop: ");
	scanf("%d",&n);
	int arr[n];
	
	
	for(i=1; i<=n; i++){
		
		printf("Number-%d: ",i);
		scanf("%d",&arr[i]);
		
		cube = (arr[i]*arr[i]*arr[i]);
		printf("cube of the %d is : %d\n",i,cube);
		
	}
	

	
	return 0;
}

