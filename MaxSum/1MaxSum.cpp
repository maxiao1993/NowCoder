#include<iostream>

using namespace std;

int MaxSum(int n, int *a);

int main (void)
{
	int a[] = {0, -2, 11, -4, 13, -5, -2};
	int sum = MaxSum(6,a);
	cout << sum <<endl;
	return 0;
}

int MaxSum(int n, int *a)
{
	int sum = 0, b = 0;
	for (int i = 1; i<=n; i++)
	{
		if(b > 0)
			b += a[i];
		else
			b = a[i];
		if (b > sum)
			sum = b;
	}

	return sum;
}
