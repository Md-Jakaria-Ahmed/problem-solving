#include<stdio.h>
int main(){
	
	
	int total_subject,sub[100],total=0;
	float avg;
	
	printf("enter total number of subject  : ");
	scanf("%d",&total_subject);
	
	
	printf("enter your subject marks: \n");
	for(int i=0; i<total_subject; i++){
		
		scanf("%d",&sub[i]);
	}
	for(int i=0; i<total_subject; i++){
		total += sub[i];
	}
	
	printf("average number : \n");
	
	avg = ( total/total_subject );
	
	printf("%.2f",avg);
	
	printf("\n");
	
	
// test grade
	
	if(avg >= 80){  		
		printf("Grade: A+");
		
	}
	else if(avg >= 70){  		
		printf("Grade: A");
		
	}
	else if(avg >= 60){  		
		printf("Grade: A-");
		
	}
	else if(avg >= 50){  		
		printf("Grade: B");
		
	}
	else if(avg >= 40){  		
		printf("Grade: C");
		
	}
	else if(avg >= 33){  		
		printf("Grade: D");
		
	}
	else{
		printf("Fail");	
	}
	
	
	
	
	return 0;
}