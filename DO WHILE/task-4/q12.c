#include<stdio.h>
int main()
{
	char i=1,j,a=65,b;
	do
	{
		b=a;
		j=1;
		do
		{
			
			printf(" %c",b);
			b--;
			j++;
			
		}
		while(j<=i);
		a++;
		printf("\n");
		i++;
	}
	while(i<=5);
}