#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("Enter n: ");
	scanf("%d",&n);
	do
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
		i++;
	} 
	while(i<=n);
	
}