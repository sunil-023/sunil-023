#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("%d\n%d",a,b);
}
