#include<stdio.h>
int main()
{
	int i,j,f,k,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
			if(i>1 || i<5)
			{
				for(f=1;f<=i;f++)
				{
					printf(" ");
					
				}
				printf("*");
			}
			
			if(i==5)
			{
				while(a<6)
				{
					printf("*");
					a++;
				}
			}
		}
		
		
		printf("\n");
	}
}