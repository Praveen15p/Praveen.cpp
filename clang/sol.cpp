// advantage
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,p,p1,max=0,max1=0;
cin>>n;
for (int i = 0; i <n; i++)
{
int s;
cin>>s;
int a[s],a1[s];
for (int j = 0; j<s; j++)
{
  cin>>a[j];
}
for (int l = 0; l <s; l++)
{
  if (a[l]>max)
  {
    max=a[l];
    p=l;
  }
}
for (int o = 0; o <s; o++)
{
  if (o!=p)
  {
  if (a[o]>max1 )
  {
    max1=a[o];
    p1=o;
  }
  }
}
for (int f = 0; f <s; f++)
{
  if (f!=p)
  {
 a[f]=a[f]-a[p];
  }
}
a[p]=max-max1;
for (int j = 0; j<s; j++)
{
  cout<<a[j]<<" ";
}
cout<<endl;
}
  return 0;
}