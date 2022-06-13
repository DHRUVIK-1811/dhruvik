#include<stdio.h>
int main()
{
	int i=5,j,a;
	do
	{
		a=i;
		j=5;
		do
		{
			printf(" %d",a);
			a++;
			j--;
		}
		while(j>=i);
		printf("\n");
		i--;
	}
	while(i>=1);
}

