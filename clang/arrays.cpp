// max and min in arrays
#include <iostream>
#include <climits>
using namespace std;
int main()
{
int n;
cin>>n;
int praveen[n];
for (int i =0; i <n ; i++)
{
  cin>>praveen[i];
}
int maxno=INT_MIN;
int minno=INT_MAX;
for (int i =0; i <n ; i++)
{
 if (praveen[i]>maxno)
 {
  maxno=praveen[i];
 }
}
for (int i =0; i <n ; i++)
{
if (praveen[i]<minno)
{
minno=praveen[i]; 
}
}
}
// output
1 2 3
max=3 min =1


#include <iostream>
using namespace std;
int binarysearch(int praveen[],int n,int key);
binarysearch(int praveen[],int n,int key)
{
int s=0;
int e=n;
int mid =s+e/2;
while (s<=e)
{
  if (praveen[mid]==key)
  {
  return mid;
  }
  else if (praveen[mid]>>key)
  {
    e=mid-1;
  }
  else
  s=mid+1;
}
return -1;

}



int main()
{
int n,key;
cin>>n;
int praveen[n];
for (int i =0; i <n ; i++)
{
  cin>>praveen[i];
}
cin>>key;
 cout<< binarysearch( praveen,n, key);
return 0;
}
 
// output 
3
1 2 3

2
1

// sorting of an is_array
#include<iostream>
using namespace std;
int main()
{
int n;
int arr[n];
for ( int  i = 0; i <n ; i++)
{
cin>>arr[i];
}
for (int i = 0; i <n-1 ; i++)
{
 for ( int j=i+1; j <n ; j++)
 {
  int temp=arr[j];
  arr[j]=arr[i];
  arr[i=arr[j]];
 }
 
}
for ( int  i = 0; i <n ; i++)
{
cout<<arr[i];
}
return 0;
}

// output
27690
20679