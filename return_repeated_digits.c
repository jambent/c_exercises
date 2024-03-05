#include<stdio.h>
#include<stdbool.h>

#define N 10

int main (void){
    bool digit_seen[N] = {false};
    bool repeated_digits[N] = {false};
    bool repeated_digits_flag = false;
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        if (digit_seen[digit]){
            repeated_digits[digit] = true;
            repeated_digits_flag = true;
        }
        else
            digit_seen[digit] = true;
        n /= 10;
    }

    if (repeated_digits_flag == true){
        printf("Repeated digit(s) :");
        for (i=0;i<N;i++){
            if (repeated_digits[i] == true)
                printf(" %d",i);
        }
        printf("\n");
    }
    else
        printf("No repeated digit\n");
    
    return 0;
}