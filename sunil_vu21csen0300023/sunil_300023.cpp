#include<stdio.h>
main()
{
	int a=20,b=30,c=0;
	c=a+b;
	a=c-a;
	b=c-b;
	printf("%d%d",a,b);
}
