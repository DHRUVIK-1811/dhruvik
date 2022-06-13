#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("Enter n: ");
	scanf("%d",&n);
	while(i<=n)
	{	
		j=i*i;
		printf("\n %d",j);
		i++;
	}
}