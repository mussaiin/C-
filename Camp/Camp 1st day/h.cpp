#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
long long a[200][200],n,b,c,m;
int main()
{
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=m;i++)
	{
	 		cin>>b>>c;
	 		a[b][c]++;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (a[i][j]-1)
			{
				cout<<"YES";
				return 0;
			}
		}	
	}
	cout<<"NO";
	return 0;	
}