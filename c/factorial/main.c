#include<stdio.h>
int factorial (int);
int main()
{
    int a;
    printf("enter value for a");
    scanf("%d",&a);
    printf("the factorial of the %d is %d",a,factorial(a));
}
int factorial (int x)
{
    int c=1;
    for (int b=x;b>=1;b--)
    {
    c=c*b;
    }
    return(c);
}
