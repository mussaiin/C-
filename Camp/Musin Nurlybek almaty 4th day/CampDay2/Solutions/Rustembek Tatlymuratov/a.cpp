#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long  n,a[3000],b[3000],maxa=-9999999,ans=1,z=0;
int main()
{
freopen("sequence.in","r",stdin);
freopen("sequence.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a[i];
}
for(int i=1;i<=n;i++)
{          maxa=-9999999;
	for(int j=i-1;j>=1;j--)
	{       
		
		if(a[i]!=0 && a[i]%a[j]==0 && b[j]>maxa)
		{
			 maxa=b[j];
			 b[i]=maxa+1;
			 ans=max(maxa+1,ans);
		}

	}
}

cout<<ans+1;
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                             
