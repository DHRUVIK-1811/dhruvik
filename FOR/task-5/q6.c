#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=10;i+=2)
	{
		for(j=1;j<=5;j++)
		{
			printf("\t%d",i);
		}
		printf("\n");
	}
}