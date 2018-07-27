#include<stdio.h>

void 
get(int );
int 
main()
{
	get(1024);
	return 0;
}

void get(int a)
{
	int b = a;
	
	while(a)
	{
		printf("%d ",a%10);
		a = a / 10;
	}
	
	printf("\n");

	while(b)
	{
		printf("%d ",b%2);
		b = b >> 1;
	}
	printf("\n");
	
}
