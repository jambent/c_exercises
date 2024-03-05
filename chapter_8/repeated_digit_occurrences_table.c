#include<stdio.h>
#include<stdbool.h>

#define N 10

int main (void){
    int repeated_digit_occurrences[N] = {0,0,0,0,0,0,0,0,0,0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        repeated_digit_occurrences[digit]++;
        n /= 10;
    }

    
    printf("Digit:       ");
    for (i=0;i<N;i++){
        printf("  %d",i);
    }
    printf("\n");
    printf("Occurrences: "); 
    for (i=0;i<N;i++){
        printf("  %d",repeated_digit_occurrences[i]);
    }
    printf("\n");
    
    return 0;
}