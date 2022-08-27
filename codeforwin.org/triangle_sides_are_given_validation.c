#include<stdio.h>
int main(){
	
	
	
//	A triangle is valid if sum of its two sides is greater than the third side.
// x+y > z ; x+z > y; y+z > x


	int x,y,z;
	
	printf("enter the first side of triangle : ");
	scanf("%d",&x);
	
	printf("enter the second side of triangle : ");
	scanf("%d",&y);
	
	printf("enter the third side of triangle : ");
	scanf("%d",&z);
	

// check every side then decide is valid or not
	
	if(x+y > z){
		if(x+z > y){
			if(y+z > x){
				printf("valid traingle");
			}
			else{
				printf("not valid");
			}
		}
		else{
			printf("not valid");
		}							
	}
	else{
		printf("not valid");
	}
	
	
	
	
	return 0;
}




