#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
int n,maxi=0,count=0;
cin>>n;
int a[n];
for (int i = 0; i <n; i++)
{
  cin>>a[i];
}
int b=sizeof(a)/sizeof(a[0]);
sort(a,a+b);
for (int i = 0; i <n; i++)
{
  cout<<a[i];
}
for (int j= 0; j<n; j++)
{
  if (a[j+1]-a[j]==1)
  {
   count++;
  }
  else {
  count=0;
  }
maxi=max(count,maxi);
}
cout<<maxi+1;
return 0;
}