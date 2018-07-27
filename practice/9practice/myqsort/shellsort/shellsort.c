#include<stdio.h>
#include"comp.h"

void inssort2 (int A[], int n, int incr);
void shellsort (int A[] , int n);

int main (void)
{
	int i;
	int A[] = {59,20,17,13,28,14,23,83,36,98,11,70,65,41,42,15};

	shellsort(A,16);

	for(i=0; i<16; i++)
		printf("%d ",A[i]);

	printf("\n");

	return 0;

}

void inssort2 (int A[], int n, int incr)
{
	int i,j;
	for (i = incr; i<n; i+=incr)
		for (j = i;
				(j>=incr) && lt(A[j],A[j-incr]); j -= incr)
			swap (A, j ,j-incr);
}

void shellsort(int A[], int n)
{
	int i,j;
	for (i = n/2; i>2; i/=2)
		for (j = 0; j<i; j++)
			inssort2(&A[j], n-j, i);
	inssort2 (A, n ,1);
}
