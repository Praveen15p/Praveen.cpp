#include<iostream>
using namespace std;
int main()
{
int reverse,n,lastdigit;
cin>>n;
reverse =0;
while (n>0)
{
 lastdigit =n%10;
 reverse =reverse*10+lastdigit;
 n=n/10;
}
cout<<reverse<<endl;
}
 
//output
1234
4321

#include<iostream>
using namespace std;
int main()
{
int i,n;
int fac;
fac=1;
cin>>n;
for ( i =1; i <=n; i++)
{
    fac =fac*i;
}
cout<<fac;

return 0;
}

//outut
 4 factorial 
 24

    

