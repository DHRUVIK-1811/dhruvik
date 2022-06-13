#include<stdio.h>
int main()
{
	int i,j,n=64;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			n++;
			printf(" %c",n);
		}
		printf("\n");
	}
}