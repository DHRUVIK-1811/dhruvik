#include<stdio.h>
int main()
{
	int i=65,j;
	do
	{
		j=65;
		do
		{
			printf(" %c",j);
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=69);
}