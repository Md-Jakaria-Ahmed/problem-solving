#include<stdio.h>
int main(){
	
	
	// all sides are equal => equilateral
	// two sides are equal => isoscale
	// three differece side => scalene
	
	
	
	int x,y,z;
	
	printf("enter the first side of triangle : ");
	scanf("%d",&x);
	
	printf("enter the second side of triangle : ");
	scanf("%d",&y);
	
	printf("enter the third side of triangle : ");
	scanf("%d",&z);
	
	// don't use => x==y==z (not right)
	
	if(x == y && y== z){  		
		printf("equilteral");
		
	}
	else if(x == y || x == z || y == z){
		printf("isoscele");
	}	
	else{		
		printf("scalene");
		
	}
	
	return 0;
}