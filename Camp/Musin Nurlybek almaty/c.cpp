#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
freopen ("numbers.in","r",stdin);
freopen ("numbers.out","w",stdout); 
 	long long n, sum=0, a[10000][10];
	cin >> n;
	for(int i=1; i<=9; i++)
	a[1][i]=1;
	for(int i=2; i<=n; i++)
		for(int j=0; j<=9; j++)
			for(int k=0; k<=9; k++)
				 if(abs(j-k)<=1) a[i][j]+=a[i-1][k]; 
	for(int i=0; i<=9; i++) 
		sum += a[n][i];
	cout << sum;  
return 0; 
}  
         