#include<iostream>
#include<fstream>
using namespace   std;
int main()
{
ifstream cin("input.txt");
ofstream cout("output.txt");
int n,a[333][333];
cin>>n;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
cin>>a[i][j];
   for(int i=1;i<=n;i++)
   for(int j=1;j<=n;j++){
   if(i==j && a[i][j]) {
   cout<<"YES";  
    return 0;
   }
          }
          cout<<"NO";
          return 0;
          }