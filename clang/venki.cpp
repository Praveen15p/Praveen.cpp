// // #include <iostream>
// // #include <algorithm>
// // using namespace std;
// // int main()
// // {
// // int k,n,w,sum=0,s=0;
// // cin>>k>>n>>w;
// // for ( int i = 1; i <=w ; i++)
// // {
// // sum=k*i;
// // }
// // s=sum-n;
// // n=n+s;
// // cout<<n;
// //     return 0;
// // }


// // #include <iostream>
// // #include <array>
// // using namespace std;
// // int main()
// // {
// //   int n;
// //   float max=0.00011;
// //   cin>>n;
// //   int a[n],b[n];
// //   for (int  i = 0; i < n; i++)
// //   {
// // cin>>a[i]>>b[i];
// // cout<<endl;
// //  }
// //   for (int  i = 0; i < n; i++)
// //   { 
// // b[i+1]=(b[i]-a[i+1])+b[i+1];
// // if ((b[i+1]>max))
// // {
// //   int temp=max;
// //   max=b[i+1];
// // }
// //   }
// //   cout<<max;
// //  return 0;
// // }



// // #include <iostream>
// // #include <array>
// // using namespace std;
// // int main()
// // {
// //  string s,t;
// //  cin>>s>>t;
// //  int size=s.size();
// //  int k=size-1;
// //  int count=0;
// //  for (int  i = 0; i <size; i++)
// //  {
// // if ((s[i]==t[k-i]))
// // {
// //   count+=1;
// // }
// //  }
// // if (count==size)
// // {
// //   cout<<"YES";
// // }
// //  else
// //  cout<<"NO";
// //  return 0;
// // }

// // #include <iostream>
// // #include <array>
// // using namespace std;
// // int main()
// // {
// // int n,t;
// // string s;
// // cin>>n>>t;
// // cin>>s;
// // for ( int i =0; i <s.size(); i++)
// // {
// //     if (s[i]=='B')
// //     {
// //  int temp=s[i];
// // s[i]=s[i+t];
// // s[i+t]=temp;
// //     }
// // }
// // cout<<s;
// //  return 0;
// // }
// #include <iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
// string s;
// int size,count=0;
// size= s.size();
// cin >>size;
// cin>>s;
// transform (s.begin(),s.end(),s.begin(),::toupper);
// sort(s.begin(),s.end());
// for (int i = 0; i < size; i++)
// {
// if (s[i]!=s[i+1])
// {
// count++;
// }
// }
// if (count==26)
// {
//   cout<<"YES"<<endl;
// }
// else
// cout<<"NO"<<endl;
// return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main()
// {
// int n,p,q,count=0;
// cin>>n;
// cin>>p;
// int a[p]; 
// int b[q];
// for ( int i = 0; i <p ; i++)
// {
//    cin>>a[i];
// }
// cin>>q;
// for ( int i = 0; i <q ; i++)
// {
//    cin>>b[i];
// }
// for ( int i = 1; i <=n; i++)
// {
//     for (int  j = 0; j<p; j++)
//     {
//        if (i==a[j])
//        {
//         count+=1;
//         break;
//        }
//     }

//     for (int k = 0; k<q; k++)
//     {
//    if (i==a[k])
//    {
//     count+=1;
//    }
//     }
// }
// cout<<count;
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, count = 0;
  cin >> n;
  int a[n][2];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][0] == a[j][1])
      {
        count += 1;
      }
    }
  }
  cout << count;
  return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, d, p;
  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    if ((m == 1) || (m == 2))
    {
      cout << "0";
    }
    d = m % 2;
    p = m / 2;
    if (d == 0)
    {
      p = p - 1;
      cout << p;
    }
    else
      cout << p;
  }
  return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,count = 0;
  int a[3];
  cin >> n;
  if ((n >= 1987) && (n <= 2013))
  {
    cout << "2013";
  }
  if ((n >= 1000) && (n <= 9000))
  {
    for (int i = n + 1; i < 9000; i++)
    {
      a[4] = i;
      for (int j = 0; j < 3; j++)
      {
        for (int k = j + 1; k < 4; k++)
        {
          if (a[j] != a[k])
          {
            count += 1;
          }
        }
      }
      if (count == 6)
      {
        cout << i;
      }
    }
  }
  return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q, r;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a <= 9 && a >= 1 || a % 10 == 0)
    {
      cout << a;
    }
    if (a%10!=0)
    {
      for (int i = 0; i < 1000; i++)
      {
        q = a / 10;
        cout << q << " ";
        r = a % 10;
        r = a;
        if (r >= 1 && r <= 9)
        {
          cout << r;
          break;
        }
      }
    }
  }
  return 0;
}


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int r,c;
cin>>r>>c;
for (int  i = 1; i <=r; i++)
{
  for (int j = 1; j <=c; j++)
  {
    if (i%2!=0)
    {
      cout<<"#";
    }
  for ( i = 0; i < count; i++)
  {
    /* code */
  }
  
    
  }
  
}

  return 0;
}
