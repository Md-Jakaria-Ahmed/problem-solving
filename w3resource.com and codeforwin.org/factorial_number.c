
#include <stdio.h>

int main(){
    
   
   int number, i, fact = 1;
    printf("Enter the positive number to find the factorial: ");
    scanf("%d",&number);
    
    if (number < 0){
    printf("Error! You have entered negative number and Factorial for negative number does not exist.");
    }
    else{
        for(i = number; i >= 1; i--){
             fact *= i;              
        }
        printf("Factorial of the given number %d is %llu", number, fact);
    }
   
   
    return 0;
}
