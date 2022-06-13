#include<stdio.h>
int main()
{
	float i,n,j=1;
	printf("Enter n: ");
	scanf("%f",&n);
	for(i=-0.5;i<=n;i++)
	{
		j=j+i;
		printf("\n %0.2f",j);
	}
}