#include<stdio.h>
int main()
{
	int i,a[5],odd=0,even=0,o=0,e=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
	}

	for(i=1;i<5;i+=2)
	{
		odd=odd+i;
	}
	printf("\n\n odd position total: %d ",odd);

	for(i=0;i<5;i+=2)
	{
		even=even+i;
	}
	printf("\n even position total: %d ",even);
	
	for(i=1;i<5;i+=2)
	{
		o=o+a[i];
	}
	printf("\n\n odd number total : %d",o);

	for(i=0;i<5;i+=2)
	{
		e=e+a[i];
	}
	printf("\n even number total : %d",e);
	
	
	printf("\n\n all number total : %d",o+e);

}


