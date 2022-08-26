#include<stdio.h>
int main(){
	
	char alphabet;
	
	printf("enter your choice : ");
	scanf("%c",&alphabet);
	
	if( (alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')){
		printf("Alphabet");
	}
	else{
		printf("Not Alphabet");
	
	}
	
	
	return 0;
}