#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,m,count=1;
    int r;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the value of power");
    scanf("%d",&b);
    m=pow(a,b);
    printf("%d \n",m);
    printf("enter the value of k");
    scanf("%d",&k);
    while(count!=k)
    {
        m=m/10;
        count++;
        
    }
    r=m%10;
    printf("the output is %d",r);
}