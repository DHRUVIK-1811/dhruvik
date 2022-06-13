#include<stdio.h>
int main()
{
	int i=1,j,n=64;
	do
	{
		j=1;
		do
		{
			n++;
			printf(" %c",n);
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
}