#include<stdio.h>
int main()
{
	int i=1,j=1,k=2,a=0,b=0,c=0;

	do
	{	
		a=a+i;
		printf("\n %d ",i++);	
	}
	while(i<=10);
	printf("\n Total: %d",a);

	printf("\n\n/******Even*******/");

	do
	{
		b=b+j;
		printf("\n %d",j+=2);
	}
	while(j<=10);
	printf("\n Total: %d",b);

	printf("\n\n/******Odd*******/");

	do
	{
		c=c+k;
		printf("\n %d",k+=2);
	}
	while(k<=10);
	printf("\n Total: %d",c);
}