#include<stdio.h>
int main(){
	
	char choice;
	
	printf("enter the alphabet : ");
	scanf("%c",&choice);
	
 	if( (choice >= 'a' && choice <= 'z') || (choice >= 'A' && choice <= 'Z')){
		printf("Alphabet");
	}
	else if(choice >=0 && choice <= 9){
		printf("Digit");
	
	}
	else{
		printf("Special Character");
	}
	
	
	return 0;
}