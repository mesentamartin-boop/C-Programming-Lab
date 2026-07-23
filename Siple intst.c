#include<stdio.h>
#include<conio.h>
void main()
{
	float pa,ri,si,n;
	printf("Calculate Simple Intrest");
	printf("\n**************\n");
	printf("Enter the principle Amount\n Enter Rate of Intrest\n Enter NO.of Years\n");
	scanf("%f%f%f",&pa,&ri,&n);
	si=(pa*n*ri)/100;
	printf("Simple Intrest is %f",si);
	
	
}
