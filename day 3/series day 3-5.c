#include <stdio.h>
#include <math.h>

int fact(int n)
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
    int x;
    scanf("%d%d", &n, &x);

    float sum = 1;
    for (int i = 1; i < n; i++)
    {
        float s = pow(x, i);
        if (i % 2 == 0)
        {
            sum += s / fact(i);
        }
        else
        {
            sum -= s / fact(i);
        }
    }
    printf("%f", sum);
    return 0;
}