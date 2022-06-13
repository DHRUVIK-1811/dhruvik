#include<stdio.h>
int main()
{
	int i=1,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	do
	{	
		printf("\n %d",i);
		i*=2;
	}
	while(i<=n);
}