#include<stdio.h>

void selsort (int A[], int n);

static void swap (int A[], int i, int j);
static int lt (int x, int y);

int main (void)
{
	int i;
	int A[] = {42,20,17,13,28,14,23,15};
	
	selsort(A,8);

	for(i = 0; i<8; i++ )
		printf("%d ", A[i]);

	printf("\n");
}

void selsort (int A[], int n)
{
	int i;
	for (i = 0; i<n-1; i++)
	{
		int j;
		int lowindex = i;

		for(j = n-1; j>i; j--)
			if(lt(A[j], A[lowindex]))
				lowindex = j;

		swap(A, i ,lowindex);
	}
}

static void swap (int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
static int lt (int x, int y)
{
	return x<y;
}
