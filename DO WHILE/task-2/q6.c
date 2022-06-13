#include<stdio.h>
int main()
{
	int i=1,n,c,a=1,b=0;
	printf("Enter n: ");
	scanf("%d",&n);
	do
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d",c,i++);
	}
	while(i<=n);
}