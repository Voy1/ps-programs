#include <stdio.h>

int main()
{
    int n;
    printf("Enter the day\n");
    scanf("%d", &n);

    if (n == 1 || n == 7)
    {
        printf("Weekday");
    }
    else
    {
        printf("Not Weekday");
    }
    //     F=k+ [(13*m-1)/5] +D+ [D/4] +[C/4]-2*C where

    // k is  the day of the month.
    // m is the month number.
    // D is the last two digits of the year.
    // C is the first two digits of the year.
    // f=0 =>sunday
    return 0;
}