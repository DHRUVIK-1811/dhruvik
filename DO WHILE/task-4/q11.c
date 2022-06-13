#include<stdio.h>
int main()
{
	int i=1,j,k=1;
	do
	{
		j=1;
		do
		{
			if(k%2==0)
			{
			printf(" 0");
			}
			else
			{
				printf(" 1");
			}
			k++;
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
}