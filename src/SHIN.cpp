#include <iostream>
using namespace std;


int a[100001][2];
int d[100001][2];


int main(void)
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		for(int i=1; i<=n; i++)
		{
			cin>>a[i][1];
		}

		for(int i=1; i<=n; i++)
		{
			cin>>a[i][2];
		}

		for(int i=1; i<=n; i++)
		{
			d[i][0] = max(d[i-1][0], d[i-1][1], d[i-1][2]);
		}
	}
}
