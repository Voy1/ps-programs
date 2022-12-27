#include <stdio.h>
#include <math.h>

void printPattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printPattern(n);

    return 0;
}