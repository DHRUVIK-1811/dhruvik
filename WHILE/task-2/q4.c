#include<stdio.h>
int main()
{
	int i=1,n,j=1;
	printf("Enter n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n %d",i*j++);
		i*=2;
	}
}