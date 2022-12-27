#include <stdio.h>

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
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fact(i);
    }
    printf("%d", sum);
    return 0;
}