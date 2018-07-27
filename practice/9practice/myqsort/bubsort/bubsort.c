#include<stdio.h>

static void swap (int A[], int i, int j);
static int lt (int x, int y);

void bubsort (int A[], int n)
{
	int i,j;
	for (i = 0; i<n-1; i++)
		for(j = n-1; j>0; j--)
			if(lt(A[j],A[j-1]))
				swap(A,j,j-1);
}

int main (void)
{
	int i;
	int A[] = {42,20,17,13,28,14,23,15};
	bubsort(A , 8);

	for(i = 0; i<8; i++)
		printf("%d ",A[i]);
	printf("\n");
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
