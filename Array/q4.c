#include<stdio.h>
int main()
{
	int i,j,a[5],temp;

	for(i=0;i<5;i++)
	{
		printf("\n A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}

	printf("\n");

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
}