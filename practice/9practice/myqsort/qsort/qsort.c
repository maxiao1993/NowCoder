#include<stdio.h>
#include<stdlib.h>

void myqsort(int A[],int i, int j);
int partition(int A[],int l,int r, int* pivot);
int findpivot(int A[],int i,int j);

static void swap(int A[],int i,int j);
static int lt(int x,int y);
static int eq(int x,int y);
static int gt(int x,int y);


int main(void)
{
	int i;
	int A[] = {72,6,57,88,60,42,83,73,48,85};

	for(i = 0; i<10; i++)
		printf("%d ",A[i]);
	printf("\n");
	
	myqsort(A,0,9);
	for(i = 0 ; i< 10;i++)
		printf("%d ",A[i]);
	printf("\n");
	exit(0);
	
}

void 
myqsort(int A[],int i,int j)
{
	if(j <= i)
		return;
	int pivotindex = findpivot(A,i,j);
	swap(A,pivotindex,j);

	int k = partition(A,i-1,j,(A+j));
	swap(A,k,j);
	myqsort(A,i,k-1);
	myqsort(A,k+1,j);
}

int findpivot(int A[],int i, int j)
{
	return (i + j) / 2;
}

int partition(int A[],int l, int r, int * pivot)
{
	do
	{
		while(lt(A[++l],*pivot));
		while((r != 0) && gt(A[--r],*pivot));
		swap(A,l,r);
	}while(l < r);

	swap(A,l,r);
	return l;
}

static void swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

static int lt(int x, int y)
{
	return x < y;
}

static int eq(int x, int y)
{
	return x == y;
}
static int gt(int x, int y)
{
	return x > y;
}
