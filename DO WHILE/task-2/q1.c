#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("Enter n: ");
	scanf("%d",&n);
	do
	{	
		j=i*i;
		printf("\n %d",j);
		i++;
	}
	while(i<=n);
}