#include<stdio.h>
int main()
{
	int m;
	char n;
	float o;
	double p;
	printf("enter the values of m,n,o,p");
	scanf("%p,%p,%p,%p&m,&n,&o,&p");
	printf("size of the data int m is %d \a",sizeof m);
	printf("size of the data char n is %d \a",sizeof n);
	printf("size of the data float o is %d \a",sizeof o);
	printf("size of the data double p is %d \a",sizeof p);
	return(0);
}
