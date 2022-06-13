#include<stdio.h>
int main()
{
	int i=1,j,a=11;
	do
	{
		j=1;
		do
		{
			printf("\t%d",a);
			a++;
			j++;
			
		}
		while(j<=5);
            	 a+=5;
		printf("\n");
		i++;
	}
	while(i<=5);
}