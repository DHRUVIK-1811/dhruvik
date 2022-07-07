
#include<stdio.h>


void sum()
{
int a,b;
printf("\nenter a:");
scanf("%d",&a);
printf("\nenter b:");
scanf("%d",&b);
printf("\naddition of a and b : %d",a+b);
}


void sub()
{
int a,b;
printf("\nsubstraction of a and b : %d",a-b);
}


void mul()
{
int a,b;
printf("\nmultiplication of a and b : %d",a*b);
}


void div()
{
int a,b;
printf("\ndivision of a and b : %d",a/b);
}

int main()
{

sum();

sub();

mul();

div();
}