#include<stdio.h>
#include<math.h>
int main()
{
	int d_num,b_num=0,r,i=0;
	printf("\n enter a number ");
	scanf("%d",&d_num);
	while(d_num!=0)
	{
		r=d_num%2;
		b_num=b_num+r*pow(10,i);
		d_num=d_num/2;
		i++;
	}
	printf("%d",b_num);
}
