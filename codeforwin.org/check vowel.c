#include<stdio.h>
int main(){
	
	char alphabet;
	
	printf("enter the alphabet : ");
	scanf("%c",&alphabet);
	
	if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
		printf("Vowel");
	}
	else if(alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
		printf("Vowel");
	
	}
	else if( (alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')){
		printf("Alphabet");
	}
	else{
		printf("Not Alphabet");
	
	}
	
	
	return 0;
}