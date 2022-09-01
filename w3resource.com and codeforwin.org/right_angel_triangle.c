#include<stdio.h>
int main(){
	
	int i,j,star_number;
	
	printf("Entr star number: ");
	scanf("%d",&star_number);
	
	
	for(i=1;i<=star_number;i++){
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");		
	}
	
	return 0;
}