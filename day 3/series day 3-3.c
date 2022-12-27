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
    scanf("%d%d", &n, &x);

    float sum = 1;
    for (int i = 1; i < n; i++)
    {
        float s = pow(x, i);
        sum += s / fact(i);
    }
    printf("%f", sum);
    return 0;
}