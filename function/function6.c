#include<stdio.h>

int main()
{
int num,s,c;

printf("enter number :");
scanf("%d",&num);

void myfun(int,int,int); 
myfun(num,s,c);
}

void myfun(int num,int s,int c)
{
s=num*num;
c=num*num*num;

printf("\n square : %d \n cube : %d",s,c);
}