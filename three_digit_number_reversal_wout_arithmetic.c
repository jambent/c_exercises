#include<stdio.h>

int main (void){
    int first_digit,second_digit,third_digit;

    printf("Enter a three-digit integer: ");
    scanf("%1d%1d%1d",&first_digit,&second_digit,&third_digit);

    printf("The integer reversed is: %d%d%d\n", \
        third_digit,second_digit,first_digit);
    
    return 0;
}