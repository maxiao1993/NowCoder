#include<iostream>

using namespace std;

//void MatrixChain(int *p, int n, int ** m, int ** s);

void MatrixChain();
int s[7][7];
int m[7][7];
int p[7] = {30,35,15,5,10,20,25};
int n = 6;
int main()
{
	MatrixChain();

	cout << "m[i][j] is :"<<endl;
	for (int i = 1; i <=6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cout << m[i][j] <<"\t";
		}
		
		cout<<endl;
	}
	
	cout << "s[i][j] is :"<<endl;
	for (int i = 1; i <=6; i++)
	{
		for (int j = 1; j <=6; j++)
		{
			cout << s[i][j] <<"\t";
		}
		cout <<endl;
	}
	return 0;
}

void MatrixChain()
{
	for(int i = 1; i <= n; i++)	//单一矩阵，无需计算
		m[i][i] = 0;
	for(int r = 2; r <= n; r++)
		for (int i = 1; i <= n-r+1; i++)	// +1 修补
		{	
			int j = i+r-1;			// -1 修补

			m[i][j] = m[i+1][j] + p[i-1]*p[i]*p[j];
			s[i][j] = i;
			for (int k = i+1; k < j; k++)
			{
				int t = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				
				if (t < m[i][j])
				{
					m[i][j] = t;
					s[i][j] = k;
				}
			}
		}

}
