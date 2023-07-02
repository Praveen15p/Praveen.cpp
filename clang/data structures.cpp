// max no of zeros
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
for (int j= 0; j<n; j++)
{
  if (a[j]==1)
  {
   count++;
  }
  else {
  count=0;
  }
maxi=max(count,maxi);
}
cout<<maxi;
return 0;
}

// sending zeros to end;
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main()
{
int n;
cin>>n;
int a[n];
for (int i = 0; i <n; i++)
{
  cin>>a[i];
}
int temp[];
for (int i =1; i <n; i++)
{
  temp[i-1]=a[i];
}
temp[n-1]=a[0];
for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }

  return 0;
}
sw
// sending any number to end
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main()
{
int n,d,ans;
cin>>n;
cin>>d;
ans=n-d;
int a[n];
for (int i = 0; i <n; i++)
{
  cin>>a[i];
}
int temp[n];
for (int i =d; i <n; i++)
{
  temp[i-d]=a[i];
}
for (int i = 0; i <d; i++)
{
  temp[ans+i]=a[i];
} 
for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
  return 0;
}


// missing no
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int s,ans,mini=975556588;
cin>>s;
int a[s];
for ( int i = 0; i <s; i++)
{
  cin>>a[i];
}
int n=sizeof(a)/sizeof(a[0]);
sort(a,a+n);
for (int j = 0; j<s; j++)
{
 ans=a[j+1]-a[j];
mini=min(mini,ans);
}
for (int p= 0; p < s; p++)
{
  if (a[p+1]-a[p]!=mini)
  {
    cout<<a[p]+1;
    break;
  }
}
  return 0;
}




#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Search in a sorted 2D Matrix
int main()
{
int n,m,target,count=0;
cin>>n>>m;
cin>>target;
int a[n][m];
for (int i = 0; i <n; i++)
{
  for (int j = 0; j<m; j++)
  {
   cin>>a[i][j];
  }
}
for (int k = 0; k <n; k++)
{
  for (int p= 0; p<m; p++)
  {
   if (a[k][p]==target)
   {
    count++;
   }
   
  }
}
if (count>=1)
{
  cout<<"TRUE"<<endl;
}
else
cout<<"NO"<<endl;
return 0;
}

// ALTERNATE   + AND -
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int n, ans;
  cin >> n;
  if (n%2==0)
  {
    ans=n/2;
  }
  else
  ans=n/2+1;
  int a[n];
  int temp[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j <ans; j++)
  {
temp[2*j]=a[j];
  }
for (int k =0; k<n; k++)
{
  temp[1+(2*k)]=a[ans+k];
}
for (int i = 0; i < n; i++)
  {
    cout<<temp[i];
  }
  return 0;
}

// MAXIMIZE PROFIT
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int n, ans, maxi = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j < n; j++)
  {
    for (int k = j + 1; k < n; k++)
    {
      ans = a[k] - a[j];
      maxi = max(maxi, ans);
    }
  }
cout<<maxi;
  return 0;
}


// remove duplicate
#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      return arr[i];
    }
  }
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,2};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}


//  max sub array
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int n,maxi=0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
        
            int sum = 0;

            
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    
 
  }
  return 0;
}

// sorting without using sort function
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i <n; i++)
  {
  cin>>a[i];
  }
  for (int j= 0; j<n; j++)
  {
   for (int l =j+1; l<=n-1; l++)
   {
   if (a[j]>a[l])
   {
   int temp=a[j];
   a[j]=a[l];
   a[l]=temp;

   }
   }
  }
   for (int k = 0; k<n; k++)
   {
   cout<<a[k];
   }

    return 0;
  }



// rotate the array by 90 degrees
  #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int n,m,b;
cin>>n>>m;
int a[n][m];
int temp[n][m];
b=n-1;
for (int i = 0; i <n; i++)
{
  for (int j= 0; j<m; j++)
  {
    cin>>a[i][j];
  }
}
 for (int k= 0; k< m; k++)
 {
  for (int l =b; l>=0 ; l--)
  {
    temp[k][b-l]=a[l][k];
  }
 }
 
 for (int i = 0; i <n; i++)
{
  for (int j= 0; j<m; j++)
  {
    cout<<temp[i][j]<<" ";
  }
  cout<<endl;
}

  return 0;
}