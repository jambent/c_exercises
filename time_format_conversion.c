#include<stdio.h>
#include<stdbool.h>

int main (void) {
    int hours, minutes;
    bool am;

    printf("Enter a 24-hour time (HH:MM): ");
    scanf("%2d:%2d",&hours,&minutes);

    am = hours >= 12 ? false:true;

    if (hours == 0)
        hours = 12;
    else if (hours > 12)
        hours = hours - 12;

    if (am == true)
        printf("Equivalent 12-hour time: %2d:%2.2d A.M.\n", \
            hours,minutes);
    else
        printf("Equivalent 12-hour time: %2d:%2.2d P.M.\n", \
            hours,minutes);

    return 0;
}