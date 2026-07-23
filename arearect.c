#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,p,a;
	printf("Area and Perimeter of Rectangle");
	printf("\n------------------\n");
	printf("Enter length and breadth");
	scanf("%f%f",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf(" Area of rectangle is %f",a);
	printf(" perimeter is %f",p);
}
	
	

