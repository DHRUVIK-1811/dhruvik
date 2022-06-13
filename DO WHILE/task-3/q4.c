#include<stdio.h>
int main()
{
	int i=1,j;
	do
	{
		j=5;
		do
		{
			printf("\t%d",j);
			j--;
		}
		while(j>=1);
		printf("\n");
		i++;
	}
	while(i<=5);
}