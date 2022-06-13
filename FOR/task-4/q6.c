#include<stdio.h>
int main()
{
	int i,n,c,a=1,b=0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d",c);
	}
}