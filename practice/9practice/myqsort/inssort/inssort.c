#include<stdio.h>

void inssort (int A[],int n);

static void swap (int A[], int i, int j);
static int lt(int x, int y);

int main(void)
{
	int i;
	int A[] = {42,20,17,13,28,14,23,15};
	inssort (A, 8);

	for (i = 0; i<8; i++)
		printf("%d ", A[i]);
	printf("\n");

	return 0;

}

void inssort(int A[],int n)
{
	int i,j;
	for (i=1; i < n; i++)
		for (j=i; (j>0)&&(lt(A[j],A[j-1])); j--)
			swap(A,j,j-1);
}

static void swap (int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

static int lt(int x, int y)
{
	return x<y;
}
