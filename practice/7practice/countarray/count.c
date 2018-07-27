#include<stdio.h>

int
main(void)
{
	int a[] = {0,1,2,3,4,5};
	int * p = a;

	printf("the number of members in a[] is %d\n",sizeof(a)/sizeof(a[0]));
	printf("the number of members in a[] is %d\n",sizeof(p)/sizeof(p[0]));

	return 0;
}
