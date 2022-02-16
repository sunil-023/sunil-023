#include<stdio.h>
main()
{
	int age;
	printf(" enter the age");
	scanf("%d",&age);
	if(age>=18)
	{
	printf("person is eligible for voting%d",age);
    }
    else
    {
    	printf("person is not eligible for voting%d",age);
	}
}
