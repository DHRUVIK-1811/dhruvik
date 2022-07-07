#include<stdio.h>

int main()
{
int s;
int myfun();
s=myfun();
printf("\n",s);
}

int myfun()
{
int num;

printf("enter number :");
scanf("%d",&num);

printf("\nsquare : %d \n cub : %d",num*num,num*num*num);

return num;
}