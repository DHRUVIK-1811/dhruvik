#include<stdio.h>
int main()
{
	int i=1,j=1,k=2,a=0,b=0,c=0;

	while(i<=10)
	{	
		a=a+i;
		printf("\n %d ",i++);	
	}
	printf("\n Total: %d",a);

	printf("\n\n/******Even*******/");

	while(j<=10)
	{
		b=b+j;
		printf("\n %d",j+=2);
	}
	printf("\n Total: %d",b);

	printf("\n\n/******Odd*******/");

	while(k<=10)
	{
		c=c+k;
		printf("\n %d",k+=2);
	}
	printf("\n Total: %d",c);
}