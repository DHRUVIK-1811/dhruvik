#include<stdio.h>
#include<conio.h>
void main()
{       int a;
	clrscr();
	printf("Enter person age: ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Voting");
	}
	else
	{
		printf("Not Voating");
	}
	getch();
}