#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;

int a[1111],n , d[1111];
int main (){
freopen("sequence.in" , "r" , stdin);
freopen("sequence.out" , "w" , stdout);
cin>>n;
for(int i = 1; i <= n; i ++){
cin>>a[i];
d[i]=1;
}
for(int  i = n; i >= 1 ;i --){
    for(int j = 1;  j < i; j ++){
    if(abs(a[i])%abs(a[j])==0)d[i]++,d[i]%1000000000;
    }
}
sort(d + 1, d + n + 1);
cout<<d[n];
return 0;
}
