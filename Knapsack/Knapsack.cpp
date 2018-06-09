#include<iostream>

template <class Type>
void Knapsack(Type v, int w, int c, int n, Type ** m)
{
	int jMax = min(w[n]-1, c);
	for (int j = 0; j <= jMax; j++)
		m[n][j] = 0;
	for (int j = w[n]; j <= c; j++)
		m[n][j] = v[n];
}
