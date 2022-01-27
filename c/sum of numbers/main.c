#include<stdio.h>
int sum (int x,int y)
{
    return(x+y);
}
int main()
{
   int a,b;
   printf("Enter the numbers : ");
   scanf("%d%d",&a,&b);
   printf("sum = %d",sum(a,b));
}

