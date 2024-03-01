#include<stdio.h>

#define ONE_HUNDRED_AND_FIVE_PERCENT 1.05f

int main (void){
    float input_pounds_amount, input_plus_tax;

    printf("Enter an amount in pounds: ");
    scanf("%f", &input_pounds_amount);
    input_plus_tax = input_pounds_amount * ONE_HUNDRED_AND_FIVE_PERCENT;
    printf("With tax added: £%.2f\n", input_plus_tax);

    return 0;
}