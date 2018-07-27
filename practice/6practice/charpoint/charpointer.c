#include<stdio.h>
#include<limits.h>

int main()
{
	int buf = NULL;
	int tmp = UINT_MAX;
	char *p = NULL;

	printf("buf = %d\n",buf);

	p = (char *) &tmp;
	printf("*p = %d\n",*p);

	return 0;
}
