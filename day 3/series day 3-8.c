#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1) * (i + 2);
    }

    printf("%d", sum);

    return 0;
}