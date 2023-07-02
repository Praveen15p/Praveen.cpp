// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {

// return 0;
// }
// #include <bits/stdc++.h>
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int a[n];
//   float max = 0.01;
//   float min = 70000;
//   int ans,p,k,l,t=0,r=0;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//   }
//   for (int k = 0; k < n; k++)
//   {
//     if (max <= a[k])
//     {
//       max = a[k];
//       t=t+k;
//     }
//   }
//   for (int l = 0; l < n; l++)
//   {
//     if (min >= a[l])
//     {
//       min = a[l];
//       r=r+l;
//     }
//       }
//   if (t < r)
//   {
//     r = r + 1;
//     p = n - r;
//     ans = t + p;
//   }
//   else if (t > r)
//   {
//     ans=t+l;
//   }

//   return 0;
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int r=0;  
    getline(cin,s);
    sort(s.begin(),s.end());
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i]=='{'||s[i]==' '||s[i]==','||s[i]=='}')
        {
            continue;
        }
        else
        {
            if (s[i]!=s[i+1])
            {
                r++;
            }
            
        }
    }
    cout<<r<<endl;

    return 0;
} 

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int count = 0,count1=0;
    string s, s1 ,s2;
    cin >> s;
    int size = s.size();
    for (int i = size - 1; i >= 0; i--)
    {
      int j = i + 1;
      s[i] = s1[size - j];
    }
    for (int j = 0; j < size; j++)
    {
      if (s[j] == s1[j])
      {
        count++;
      }
    }
    for (int k = size - 1; k >=1; k--)
    {
      int l = k + 1;
      s[k] = s2[size - l];
    }
     for (int p = 1; p < size; p++)
    {
      if (s[p] == s2[p])
      {
        count1++;
      }
    }
    if (count == size && count1!=size-1)
    {
      cout << size - 1<<endl;
    }
    else
  cout << "-1";
  }
  return 0;
}


#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
  int n,ans=0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
string s;
int size=s.size();
cin>>size;
cin>>s;
int ans1;
for (int i = 0; i <size; i++)
{
  string s1;
  int j;
  s1=s.substr(i,i+2);
  j=i+1;
  for (int j; j <size; j++)
  {
    string s2;
    s2=s.substr(j,j+2);
    if (s1==s2)
    {
      ans++;
    }
  }
  ans=ans+1;
}
ans1=size-ans;
cout<<ans1;

  }
return 0;
}