#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"the prime no upto n"<<endl;
    cin>>n;
     cout<<"2";
    for (i = 2; i<n; i++)
    {
    if (i%2==0 || i%3==0)
  {
    continue;
  }
  cout<<endl<<i;
}
return 0;
}

