#include<stdio.h>

int main()
{
int a,b;

void dosum(int,int);

printf("\n enter a:");
scanf("%d",&a);

printf("\n enter b:");
scanf("%d",&b);

dosum(a,b);

}

void dosum(int x,int y)
{
printf("sum : %d",x+y);
}