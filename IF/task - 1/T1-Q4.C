#include<stdio.h>
#include<conio.h>
void main()
{       int income;
	float tax,i;
	clrscr();
	printf("Enter Your Income: ");
	scanf("%d",&income);

	if(income<=2500)
	{
		printf("Your Tax:00.00");
	}
	else if(income>2500 && income<=5000)
	{       i=income-2500;
		tax=i*0.1;
		printf("Yoyr Tax: %0.2f",tax);
	}
	else if(income>5000 && income<=10000)
	{
		i=income-5000;
		tax=i*0.2+250;
		printf("Your Tax:%0.2f",tax);
	}
	else
	{
		i=income-10000;
		tax=i*0.3+1250;
		printf("Your Tax:%0.2f",tax);
	}

	getch();
}