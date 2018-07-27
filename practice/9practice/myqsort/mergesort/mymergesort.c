#include<stdio.h>

void mymergesort(int A[], int temp[], int left, int right);
int lt (int x , int y);

int main(void)
{
	int A[] = {36,20,17,13,28,14,23,15};
	int temp[8];
	int i;

	mymergesort(A,temp,0,7);
	for(i = 0; i < 7; i++)
		printf("%d ", A[i]);

	printf("\n");

	return 0;
}

void mymergesort(int A[], int temp[], int left, int right)
{
	int mid = (left + right)/2;
	int i, curr;
	if(left == right)
		return;

	mymergesort(A, temp, left, mid);
	mymergesort(A, temp, mid+1,right);

	for(i = left; i <= right; i++)
	       temp[i] = A[i];

	int i1 = left;
	int i2 = mid + 1;

	for (curr = left; curr <= right; curr++)
	{
		if (i1 == mid + 1)
			A[curr] = temp[i2++];
		else if (i2 > right)
			A[curr] = temp[i1++];
		else if (lt(temp[i1],temp[i2]))
			A[curr] = temp[i1++];
		else
			A[curr] = temp[i2++];
	}	
}

int lt (int x, int y)
{
	return x < y;
}
