#include<iostream>

using namespace std;

int MaxSum(int n, int *a);
static int MaxSubSum(int *a, int left, int right);

int main (void)
{
	int a[] = {2, 11, -4, 13, -5, -2};
	int sum = MaxSum(6,a);
	cout << sum <<endl;
	return 0;
}

int MaxSum(int n, int *a)
{
	return MaxSubSum(a,1,n);
}
static int MaxSubSum(int *a, int left, int right)
{
	int sum = 0;
	if (left == right)
		sum = a[left] >0?a[left]:0;
	else
	{
		int center = (left +right)/2;
		int leftsum = MaxSubSum(a, left, center);
		int rightsum = MaxSubSum(a, center+1, right);

		int s1 = 0;
		int lefts = 0;
		for (int i = center; i >= left; i--)
		{
			lefts += a[i];
			if (lefts > s1)
				s1 = lefts;
		}

		int s2 =0;
		int rights = 0;
		for (int i = center+1; i <= right; i++)
		{
			right += a[i];
			if (rights > s2)
				s2 = rights;
		}
		
		sum = s1+s2;
		if (sum < leftsum)sum = leftsum;
		if (sum <rightsum)sum = rightsum;
	}

	return sum;
}
