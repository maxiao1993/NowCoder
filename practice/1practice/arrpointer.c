#include<stdio.h>

int
main(void)
{
	int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
	printf("%d %d %d %d\n",x[4],*(x+4),*(4+x),4[x]);

	return 0;
}
