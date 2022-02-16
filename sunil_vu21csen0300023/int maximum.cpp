#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("maximm of three is a");
	}
	else if(b>a&&b>c)
	{
		printf("maximum of three is b");
	}
	else
	{
		printf("maximum of three is c");
	}
}
