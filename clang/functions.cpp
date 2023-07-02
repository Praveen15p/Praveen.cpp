#include<iostream>
using namespace std;
void fib(int n);
void fib( int n)
{
int t1=0;
int t2=1;
int nextterm;
for ( int i =1; i <=n ; i++)
{
    cout<<t1;
    cout<<endl;
  nextterm =t1+t2;
  t1=t2;
  t2=nextterm;
}
}
int main()
{
int n;    
cin>>n;
fib(n);
return 0;
}

//output
n=5
0
1
1
2
3

#include<iostream>
using namespace std;
int fac(int n);
int fac(int n)
{
int factorial =1;
for (int i =2 ; i <=n ; i++)
{
   factorial =factorial*i;
}
return factorial;
}
int main()
{
int n,ans;    
cin>>n;
ans = fac(n);
cout<<ans<<endl;

return 0;

}
 //output
 n=3
 24


#include<iostream>
using namespace std;
int fac(int n);
int fac(int n)
{
int factorial =1;
for (int i =2 ; i <=n ; i++)
{
   factorial =factorial*i;
}
return factorial;
}
int main()
{
int n,ans,r;    
cin>>n>>r;
ans = fac(n)/(fac(r)*fac(n-r));
cout<<ans<<endl;

return 0;

}
// ncr formula code function
// output
n=5 c=2
ans=10
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
