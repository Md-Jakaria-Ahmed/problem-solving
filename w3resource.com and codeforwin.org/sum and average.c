#include<stdio.h>
int main(){
	
	int i,sum=0,temp=0;
	int arr[10];
	float avg;
	
	for(i=1; i<=10; i++){
		
		printf("Number-%d:",i);
		scanf("%d",&arr[i]);
		
		temp = arr[i];
		arr[i]=0;
		sum+=temp;
	}
	
	avg = sum/10;
	
	printf(" the sum numbers from keyboard: %d\n",sum);
	printf("average of the numbers: %.2f",avg);
	
	return 0;
}
