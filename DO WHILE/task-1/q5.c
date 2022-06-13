#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n:");
	scanf("%d",&n);
	do
	{
		printf("\n %d * %d  = %d",n,i++,i*n);
	}
	while(i<=10);
}