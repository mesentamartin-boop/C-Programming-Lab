#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Smallest of three Numbers");
printf("\n------------------\n");
printf("Enter the three Numbers");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
	if(a<c)
	{
		printf("%d a is smallest",a);	
	}
	else
	{
			printf("%d c is smallest",c);
		}

}
else{

     if(b<c)
     {
     	printf("%d b is smallest",b);
	 }

	 else
	 
	printf("%d c is smallest",c);
}
}
