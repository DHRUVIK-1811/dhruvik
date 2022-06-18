#include<stdio.h>
int main()
{
	int a[5][5],i,j,sum=0,upp=0,low=0;

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

	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
	}
	printf("\n diagonal element total: %d",sum);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			{
				upp=upp+a[i][j];
			}
		}
	}
	printf("\n upper triangle total: %d",upp);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			{
	 			low=low+a[i][j];
			}
		}
	}
	printf("\n lower triangle total: %d",low);

}