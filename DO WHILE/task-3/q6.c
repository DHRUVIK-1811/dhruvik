#include<stdio.h>
int main()
{
	int i=2,j;
	do
	{
		j=1;
		do
		{
			printf("\t%d",i);
			j++;
		}
		while(j<=5);
		printf("\n");
		i+=2;
	}
	while(i<=10);
}