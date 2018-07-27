#include<stdio.h>

int B = 2;

void
func(int **p)
{
	*p =&B;
}

int
main()
{
	int A = 1, C = 3;
	int *parA =&A;

	func(&parA);
	printf("%d\n", *parA);
	
	printf("%d\n", A);
	return 0;
}
