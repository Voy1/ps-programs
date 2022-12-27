#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
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
            printf("* ");
            printf("\n");
        }
    }

    return 0;
}