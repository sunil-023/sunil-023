#include<stdio.h>
main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
    if(num%2==1)
    printf("lsb of %d is set 1",num);
    else
    printf("lsb of %d is set 0",num);
}
