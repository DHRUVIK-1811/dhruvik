#include<stdio.h>
int main()
{
	int i=1,j,n=0;
	do
	{
		j=1;
		do
		{
			n=n+1;
			printf(" %d",n);
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
}