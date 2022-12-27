#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i <= (n + 1) / 2)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                printf("  ");
            }
            for (int j = 1; j <= (n + 2) - 2 * i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf("  ");
            }
            for (int j = 1; j <= 2 * i - n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}