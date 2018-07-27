#include<stdio.h>

static long 
factorial(int n)
{
	int result = 1;

	while(n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}

int
main(void)
{
	int x,fact;
	printf("plear input a number: ");
	scanf("%d",&x);
	fact = factorial(x);
	printf("The factorial is : %d:\n",fact);
	
	return 0;
}
