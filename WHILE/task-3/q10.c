#include<stdio.h>
int main()
{
	int i=1,j,a=11;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("\t%d",a);
			a++;
			j++;
			
		}
            	 a+=5;
		printf("\n");
		i++;
	}
}