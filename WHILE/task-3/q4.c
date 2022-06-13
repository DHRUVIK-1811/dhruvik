#include<stdio.h>
int main()
{
	int i=1,j;
	while(i<=5)
	{
		j=5;
		while(j>=1)
		{
			printf("\t%d",j);
			j--;
		}
		printf("\n");
		i++;
	}
}