#include<stdio.h>
#include<conio.h>
void main()
{
	int m,p,c,e,total,per;
	clrscr();
	printf("\n Enter maths marks: ");
	scanf("%d",&m);
	printf("\n Enter physics marks: ");
	scanf("%d",&p);
	printf("\n Enter chemistry marks: ");
	scanf("%d",&c);
	printf("\n Enter english marks : ");
	scanf("%d",&e);
	total=m+p+c+e;
	printf("\n\n Your Total is:%d",total);
	per=total/4;
	printf("\n Your per is:%d",per);

	if(per>=75)
	{
		 printf("\nGrade: A");
	}
	else if(per<75 && per>=60)
	{
		printf("\nGrade: B");
	}
	else if(per<60 && per>=45)
	{
		printf("\nGrade: C");
	}
	else if(per<45 && per>=35)
	{
		printf("\nGrade: D");
	}
	else
	{
		printf("\n Fail");
	}

	getch();
}