#include<stdio.h>
int main()
{
	int a[3][3],i,j,at[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\t******* at ********\n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			at[j][i]=a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",at[i][j]);
		}
		printf("\n");
	}
}