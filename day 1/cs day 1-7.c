#include <stdio.h>

int main()
{
    int temp;
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("Very Cold Weather");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold Weather");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal in Temperature");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("Hot");
    }
    else
    {
        printf("Very Hot Weather");
    }
    return 0;
}