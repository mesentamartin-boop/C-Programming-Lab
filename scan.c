#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,diff,mul,div;
	printf("enter the first  number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	sum= a+b;
	diff=a-b;
	mul=a*b;
	div=a%b;
	printf("sum=%d",sum);
	printf("diff=%d",diff);
	printf("mul=%d",mul);
	printf("div=%d",div);
}
