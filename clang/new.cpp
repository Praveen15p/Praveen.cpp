// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     int s;
//     int a[s];
//     cin >> s;
//     for (int j = 0; j < s; j++)
//     {
//       cin >> a[i];
//     }
//     if (a[0] != a[1])
//     {
//       if (a[0] == a[2])
//       {
//         cout << "2" << endl;
//       }
//       else
//         cout << "1" << endl;
//     }
//     else
//     {
//       for (int k = 2; k < s; k++)
//       {
//         if (a[0] != a[k])
//         {
//           cout << k + 1 << endl;
//         }
//       }
//     }
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// for (int i = 0; i <n; i++)
// {
//   string s;
//   cin>>s;
//   int size=s.size();
//   if (size==2)
//   {
//    cout<<s<<endl;
//    break;
//   }
// for (int j = 1; j <size-1; j++)
// {
//   if (s[j]==s[j+1])
//   {
//     s.erase(j,1);
//   }
// }
// cout<<s<<endl;
// }
//   return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//  int n;
//  cin>>n;
//  for (int i = 0; i <n; i++)
//  {
//   int ans;
//   string s;
//   int size=s.size();
//   cin>>size;
//   cin>>s;
// ans=size-1;
// for (int j = 0; j <=ans; j++)
// {
//   if  ((s[j]==0||s[ans-j]==1) || (s[ans-j]==0||s[j]==1))
//   {
//   size=size-2;
//   }
// }
// cout<<size<<endl;
//  }
//   return 0;
// }
// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
// for (int i = 0; i<n ; i++)
// {
//   vector<int> v;
//   int temp;
//   for (int j = 0; j < 4; j++)
//   {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }
// for (auto it = v.begin(); it != v.end(); it++)
// {
//   cout << (*it);
// }
// }
// return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i =0; i <N; i++)
    {
        for (int j=0; j<N-i ; j++)
        
        {
           cout<<"*"; 
        }
    for (int k =0; k<i; k++)
    {
        cout<<" ";
    }
    for (int m=0; m <i; m++)
    {
        cout<<" ";
    }
     for (int j=0; j<N-i ; j++)
        
        {
           cout<<"*"; 
        }
cout<<endl;
    }
     for (int i =0; i <N; i++)
    {
        for (int j=0; j<i+1 ; j++)
        
        {
           cout<<"*"; 
        }
    for (int k =1; k<N-i; k++)
    {
        cout<<" ";
    }
     for (int k =1; k<N-i; k++)
    {
        cout<<" ";
    }
     for (int j=0; j<i+1 ; j++)
        
        {
           cout<<"*"; 
        }
cout<<endl;
    }
    return 0;
}



#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int o;
  cin >> o;
  for (int i = 0; i < o; i++)
  {
    int n, x, k, ans, a, l, p, min;
    cin >> n >> k >> x;
    if (x != k)
    {
      ans = n / k;
      a = ans * k;
      l = n - a;
      for (int j = 1; j <= k; j++)
      {
        if (l % j == 0 && l != x)
        {
          p = l / j;
          cout << "YES" << endl;
          for (int g = 0; g < ans; g++)
          {
            cout << k<<" ";
          }
          for (int h = 0; h < p; h++)
          {
            cout << j<<" ";
          }
          break;
        }
        else
        {
          cout << "NO" << endl;
          break;
        }
      }
    }
    else if (x == k)
    {
      min = k - 1;
      for (int z = 1; z < k; z++)
      {
        if (min == z)
        {
          ans = n / z;
          a = ans * z;
          l = n - a;
          for (int j = 1; j < k; j++)
          {
            if (l % j == 0)
            {
              p = l / j;
              cout << "YES" << endl;
              for (int g = 0; g < ans; g++)
              {
                cout << min<<" ";
              }
              for (int h = 0; h < p; h++)
              {
                cout << j<<" ";
              }
              break;
            }
            else
            {
              cout << "NO" << endl;
              break;
            }
          }
        }
      }
    }

    return 0;
  }
}