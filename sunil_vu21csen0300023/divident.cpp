#include<stdio.h>
main()
{
	int d,di,q,r;
	printf("the divident");
	scanf("%d",&d);
	printf("the divisor");
	scanf("%d",&di);
	q=d/di;
	r=d-(di*q);
	printf("value of quotient%d\n",q);
	printf("value of remainder%d",r);
}
