#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b) && (b == c))
    {
        printf("Equilateral Triangle");
    }
    else if (((a == b) && (b != c)) || (a == c) && (c != b) || (b == c) && (b != a))
    {
        printf("Isoscales Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}