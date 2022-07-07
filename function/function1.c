#include<stdio.h>

void p1()
{
int i,j,sp=5;

for(i=0;i<=5;i++)
{
for(j=0;j<sp;j++)
printf(" ");
for(j=0;j<=i;j++)
{
printf(" *",j);
}
sp--;
printf("\n");
}
}

int main()
{
p1();
}