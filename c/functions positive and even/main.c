#include<stdio.h>

void positive_negative (int);
void even_odd (int);

main()
{
    int a;
    
    printf("a=");
    scanf("%d",&a);
    
    positive_negative(a);
    even_odd(a);
}

void positive_negative (int x)
{
    if (x>=0)
    printf("the number is positive");
    
    else
    printf("the number is negative");
}

void even_odd (int x)
{
    if (x%2==0)
    printf("\nthe number is even");
    
    else
    printf("\nthe number is odd");
}
