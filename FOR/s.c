#include<stdio.h>
int main()
{
	int i,j,h,w;
	printf("\nEnter height: ");
	scanf("%d",&h);
	printf("\n Enter width: ");
	scanf("%d",&w);

	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			if(i==1 || i==h || j==1 || j==w)
			{ 
				printf(" *");
			}
			else
			{
				printf(" %c",68);
			}
		}
		printf("\n");
	}
	
}