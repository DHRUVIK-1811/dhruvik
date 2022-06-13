#include<stdio.h>
int main()
{
	char i=1,j,a=65;
	do
	{
		j=1;
		do
		{
			printf("\t%c",a);
			a++;
			j++;
			
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=5);
}