#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1 ");
        }
        else
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                printf("%d ",j);
                break;
                }
            }
        }
    }
    return 0;
}
