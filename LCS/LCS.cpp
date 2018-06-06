#include<iostream>

using namespace std;


void LCSLength (int m, int n, char *x, char *y);
char x[]={0,'A', 'B', 'C', 'B', 'D', 'A', 'B'};
char y[]={0,'B', 'D', 'C', 'A', 'B', 'A'};

int c[7][8];

int main (void)
{
	LCSLength(7,6,x,y);

	for (int i = 0; i <=7; i++)
	{
		for (int j =0; j <=6; j++)
			cout << c[i][j] << " ";
		
		cout<<endl;
	}
	
	return 0;
}



void LCSLength (int m, int n, char *x, char *y)
{
	int i,j;
	for (i =1; i <= m; i++)
		c[i][0]=0;
	for (i =1; i <= n; i++)
		c[0][i]=0;

	for (i =1; i <= m; i++)
		for (j =1; j <= n; j++)
		{
			if( x[i] == y[i])
			{
				c[i][j] = c[i-1][j-1]+1;
				//b[i][j] = ' ';
			}
			else if (c[i-1][j] >= c[i][j-1])
			{
				c[i][j] = c[i-1][j];
			}
			else
				c[i][j] = c[i][j-1];
		}
}
