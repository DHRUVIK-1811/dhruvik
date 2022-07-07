#include<stdio.h>

int main()
{

int a,b;

printf("\n enter a:");
scanf("%d",&a);

printf("\n enter b:");
scanf("%d",&b);

int dosum(int,int);

dosum(a,b);
printf("\n sum : %d",a+b);
}

int dosum(int a,int b)
{
return a+b;
}