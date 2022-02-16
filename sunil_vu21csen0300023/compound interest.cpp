#include<stdio.h>
#include<math.h>
main ()
{ 
	float ci,p,r,t,x,a,amount;
	printf("enter the value of p");
	scanf("%f",&p);
	printf("enter the value of t");
	scanf("%f",&t);
	printf("enter the value of r");
	scanf("%f",&r);
	x=1+r/100;
	a=p*pow(x,t);
	amount=p*a;
	ci=amount-p;
	printf("%f",ci);
}
