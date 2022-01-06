#include<stdio.h>
#include<math.h>
int main()
{
	float d_num,b_num=0,r,i=0;
	printf("\n enter a number ");
	scanf("%f",&d_num);
	while(d_num!=0)
	{
		r=d_num%2;
		b_num=b_num+r*pow(10,i);
		d_num=d_num/2;
		i++;
	}
	printf("%f",b_num);
}
