#include<stdio.h>
#include<conio.h>
void main()
{       int x,y;
	clrscr();
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter Y: ");
	scanf("%d",&y);

	if(x<2000 || x>3000)
	{
		printf("\nX= %d",x);
	}
	if(y>100 && y<500)
	{
		printf("\nY= %d",y);
	}

	getch();
}