#include <stdio.h>
#include <math.h>

int fact(int n)
{
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
    int f = 0;
    scanf("%d%d", &n, &x);

    float sum = 0;
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        float s = pow(x, i);
        if (f % 2 == 0)
        {
            sum += s / fact(i);
        }
        else
        {
            sum -= s / fact(i);
        }
        f++;
    }
    printf("%f", sum);
    return 0;
}