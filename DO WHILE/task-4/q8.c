#include<stdio.h>
int main()
{
	char i=1,j,n=64,a;
	do
	{
		j=1;
		do
		{
			n=n+1;
			if(j%2==0)
			{
				
				printf(" %c",n);
			}
			else
			{
				a=n+32;
				printf(" %c",a);
			}
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
}