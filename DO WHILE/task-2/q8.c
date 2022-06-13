#include<stdio.h>
int main()
{
	char i=65;
	
	do
	{	
		printf("%c \t %c\t",i,i+34);
		i+=4;	
	}
	while(i<=90);
}