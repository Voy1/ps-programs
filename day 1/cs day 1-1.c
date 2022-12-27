#include <stdio.h>

int main()
{
    int basic_salary;
    char grade;
    scanf("%d", &basic_salary);
    fflush(stdin);
    scanf("%c", &grade);

    int hra = 0.2 * basic_salary;
    int da = 0.5 * basic_salary;
    int allow;
    switch (grade)
    {
    case 'A':
        allow = 1700;
        break;

    case 'B':
        allow = 1500;
        break;

    default:
        allow = 1300;
    }
    int pf = 0.11 * basic_salary;

    int total_salary = basic_salary + hra + da + allow - pf;

    printf("%d", total_salary);

    return 0;
}