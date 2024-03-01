#include<stdio.h>

int main (void){
    int input_number,first_digit,second_digit,third_digit;

    printf("Enter a three-digit integer: ");
    scanf("%d",&input_number);
    
    first_digit = input_number / 100;
    second_digit = input_number % 100 / 10;
    third_digit = input_number % 100 % 10;

    printf("The integer reversed is: %d%d%d\n", \
        third_digit,second_digit,first_digit);
    
    return 0;
}