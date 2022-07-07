#include<stdio.h>

int main()
{
int num;
int myfun(int);
myfun(num);
}

int myfun(int num)
{
printf("enter number :");
scanf("%d",&num);

printf("\nsquare : %d \n cub : %d",num*num,num*num*num);

return num;
}