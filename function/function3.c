#include<stdio.h>

int main()
{
int sum;
int dosum();

sum=dosum();
printf("\n sum : %d",sum);
}

int dosum()
{
int a,b;

printf("\n enter a:");
scanf("%d",&a);

printf("\n enter b:");
scanf("%d",&b);

return a+b;
}