#include<stdio.h>

int main (void){
    int day, month, year;

    printf("Enter a date in American format (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("You entered the date %4.4d%2.2d%2.2d\n", year, month, day);

    return 0;
}