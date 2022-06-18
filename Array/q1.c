#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,total,per,gr;
	for(i=0;i<5;i++)
	{
		printf("\n Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n********************\n");
	for(i=0;i<5;i++)
	{
		printf("\n Enter b[%d] : ",i); 
		scanf("%d",&b[i]);
	}
		printf("    A \t   B \t Total \t per \t grade");
		printf("\n*************************************");
	for(i=0;i<5;i++)
	{
		total=a[i]+b[i];
		per=total/2;
		
		if(per<35)
		{
			printf("\n  %d \t  %d \t  %d \t %d \t fail",a[i],b[i],total,per);
		}
		else
		{
		printf("\n  %d \t  %d \t  %d \t %d \t pass",a[i],b[i],total,per);
		}
	}

	
}