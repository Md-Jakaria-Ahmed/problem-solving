#include<stdio.h>
int main(){
	
	
	
//	A triangle is said to be a valid triangle if and only if sum of its angles is 180 °.
// x+y+z = 180
//any angel will not be = 0 

	int x,y,z,sum;
	
	printf("enter the first angel of triangle : ");
	scanf("%d",&x);
	
	printf("enter the second angel of triangle : ");
	scanf("%d",&y);
	
	printf("enter the third angel of triangle : ");
	scanf("%d",&z);
	
	sum = (x+y+z);
	
	if(x > 0 && y > 0 && z > 0){
		if(sum == 180){			
			printf("valid traingle");
		}
	    else{
			printf("invalid triangle");
		}
	}
	else{
		printf("any angel will not be : 0 ");
	}
	
	
	
	
	return 0;
}