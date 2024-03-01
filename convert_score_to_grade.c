#include<stdio.h>

int main (void){
    int score, score_tens_digit;
    unsigned char grade;

    printf("Enter numerical grade: ");
    scanf("%d",&score);

    if (score > 100 || score < 0)
        printf("You have entered an illegal grade\n");
    else{
        score_tens_digit = score / 10;
        switch(score_tens_digit){
            case 10: grade = 'A'; break;
            case 9: grade = 'A'; break;
            case 8: grade = 'B'; break;
            case 7: grade = 'C'; break;
            case 6: grade = 'D'; break;
            default: grade = 'F'; break;
        }
        printf("Letter grade: %c\n", grade);
    }
    
    return 0;
}