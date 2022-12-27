#include <stdio.h>
#include <math.h>

float fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        j *= i;
    }
    return j;
}

int main()
{
    int n;
    scanf("%d", &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i / fact(2 * i - 1);
        }
        else
        {
            sum -= i / fact(2 * i - 1);
        }
    }

    printf("%f", sum);

    return 0;
}