#include<stdio.h>
int main(){
	
	char letter;
	
	printf("enter the letter : ");
	scanf("%c",&letter);
	
	if(letter >= 'a' && letter <= 'z'){
		printf("lowercase");
	}
	else if(letter >= 'A' && letter <= 'Z'){
		printf("UPPERCASE");
	
	}
	else{
		printf("Not letter");
	
	}
	
	
	return 0;
}