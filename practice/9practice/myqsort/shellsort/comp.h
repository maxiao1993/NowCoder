
int lt (int x,int y)
{
	return x < y;
}

int eq (int x, int y)
{
	return x == y;
}

int gt(int x, int y)
{
	return x > y;
}

void swap (int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
