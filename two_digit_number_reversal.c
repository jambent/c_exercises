#include<stdio.h>

int main (void){
    int input_number,first_digit,second_digit;

    printf("Enter a two-digit integer: ");
    scanf("%d",&input_number);
    
    first_digit = input_number / 10;
    second_digit = input_number % 10;

    printf("The integer reversed is: %d%d\n", second_digit,first_digit);
    
    return 0;
}