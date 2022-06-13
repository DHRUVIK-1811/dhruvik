#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		if(i%2==0)
		{
			j=i*i;
			printf("\n %d",j);
		}
		else
		{	
			printf("\n %d",i);	
		}
	} 
	
}