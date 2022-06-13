#include<stdio.h>
int main() 
{
	int i,j,h;
	printf("\nEnter height: ");
	scanf("%d",&h);

	for(i=1;i<=h;i++)
	{
		for(j=i;j<h;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==h || j==1 || j==(2*i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}