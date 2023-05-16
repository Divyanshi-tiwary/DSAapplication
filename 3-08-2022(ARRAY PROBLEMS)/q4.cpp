#include <stdio.h>
int main(){
    int num, firstDigit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    firstDigit = num;
    while (firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }
    
    printf("First digit of the entered number is: %d \n", firstDigit);
    
    return 0;
}
