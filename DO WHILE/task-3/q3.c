#include<stdio.h>
int main()
{
	int i=1,j;
	do
	{
		j=1;
		do
		{
			printf("\t%d",j);
			j++;
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=5);
}