//programm to accept stu name,roll,mark in 3 sub,calculate avg and grade
#include<stdio.h>
#include<conio.h>
void main()
{
	int roll,M1,M2,M3;
	char s[10];
	float avg,sum;
	printf("\nEnter Student Name");
	scanf("%s",&s);
	printf("\nEnter Student Roll no");
	scanf("%d",&roll);
	printf("\nEnter Mark of 1 Sub");
	scanf("%d",&M1);
	printf("\nEnter mark of 2 Sub");
	scanf("%d",&M2);
	printf("\nEnter Mark of 3 Sub");
	scanf("%d",&M2);
	sum=M1+M2+M3;
	avg=sum/3;
	printf("\n\nthe Average Mark is %f\n",avg);
	if(avg>=50)
	{
	    if(avg>=30)
	    {
	    	printf("The grade is A");
		}
	else
	{
		printf("The grade is B");
	}
}
   if(avg>=20)

	{
		printf("the grade is C");
	
	}
	else 
	printf("The student is failed");
	
	
}
