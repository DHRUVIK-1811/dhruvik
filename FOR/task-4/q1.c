#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		j=i*i;
		printf("\n %d",j);
	}
}