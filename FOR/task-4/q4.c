#include<stdio.h>
int main()
{
	int i,n,j=1;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		printf("\n %d",i*j++);
	}
}