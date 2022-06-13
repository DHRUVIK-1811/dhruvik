#include<stdio.h>
int main()
{
	float i=-0.5,n,j=1;
	printf("Enter n: ");
	scanf("%f",&n);
	while(i<=n)
	{
		j=j+i;
		printf("\n %0.2f",j,i++);
	}
}