#include<stdio.h>
int main(){
	
	//quadratice equation	
	
	float a,b,c,discriminant,root1,root2,imaginary;
	
	printf("Discriminant: \n");
	
	printf("enter a: ");
	scanf("%f",&a);
	
	printf("enter b: ");
	scanf("%f",&b);
	
	printf("enter c: ");
	scanf("%f",&c);
	
	discriminant = (b*b) - (4*a*c);
	
	if(discriminant > 0){
		root1 = ((-b) + sqrt(discriminant))/(2*a);
		root2 = ((-b) - sqrt(discriminant))/(2*a);
		
		printf("roots of quadratic equation: %.2f and %.2f", root1, root2);
	}
	else if(discriminant == 0){
		root1 = root2 = (-b)/(2*a);
		printf("roots of quadratic equation: %.2f and %.2f", root1, root2);
	}
	else{
		root1 = root2 = (-b)/(2*a);
		imaginary = sqrt(discriminant)/(2*a);
		
		printf("roots of quadratic equation and imaginary: %.2f %f and %.2f %f",root1,imaginary,root2,imaginary);	
	}


	
	
	return 0;
}