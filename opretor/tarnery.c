#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number: ");
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	scanf("\n%d",&c);

	(a>b&&a>c)?printf("a (%d) is greater ",a):b>c?printf("b (%d) is greater ",b):printf("c (%d) is greater",c);

	
}