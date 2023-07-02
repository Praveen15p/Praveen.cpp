#include<iostream>
using namespace std;
int main()
{
    int rows,columns,i,j;
    char ch='*';
    cout<<"the no of rows=";
    cin>>rows;
    cout<<"the no of columns=";
    cin>>columns;
    for ( i =1; i <=rows ; i++)
    {
        for ( j = 1; j <=columns ; j++)
        {
         if (i==1 ||i==rows)
         {
           cout<<"*"; 
         }
      else if (j==1 || j==columns)
      {
        cout<<"*"; 
      }
      else 
      {
      cout<<" ";
      }
     cout<<"\n";
    }
}
}
#include<iostream>
using namespace std;
int main()
{
 int i,j;
 char ch='*';
 for ( i = 1; i <=5 ; i++)
 {
    for ( j =1; j <= i; j++)
    {
       cout<<"*";
       cout<<" ";
    }
  cout<<endl;  
 }
}
   

*   
* *
* * *
* * * *
* * * * *
#include<iostream>
using namespace std;
int main()
{
int i,j;
for ( i = 1; i <=5 ; i++)
{
 for ( j = 1; j <=i ; j++)
 {
cout<<j;   
cout<<" "; 
 }
 cout<<endl;   
}
return 0;
}

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

#include<iostream>
using namespace std;
int main()
{
int i,j,k;
for ( i = 1; i <=5 ; i++)
{
 for ( j = 1; j <=i ; j++)
 {
  i+j==k;
  if (k%2==0)
  {
    cout<<"1";
  }
  else
  {
   cout<<"0"; 
  }

 }
 cout<<endl;   
}
return 0;
}

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
  
#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cin>>n;
char ch='*';
for ( i = 1; i <=n ; i++)
{
 for ( j = 1; j <= n-j; j++){
cout<<" ";
 }
 for ( j= 0; j <=i ; j++)
 {
  cout<<*;
 }
 cout<<endl;
}
return 0;
}


  



#include<iostream>
using namespace std;
int main()
{
int i,n,j;
cin>>n;
char ch='*';
for ( i = 1; i <=n ; i++)
{
    for ( j =1; j <=n-i ; j++)
    {
      cout<<" ";  
    }
    for ( j =1; j <=2*i-1 ; j++)
    {
       cout<<"*";
    }
    cout<<endl;
}

for ( i =n; i >=1 ; i--)
{
    for ( j =1; j <=n-i ; j++)
    {
      cout<<" ";  
    }
    for ( j =1; j <=2*i-1 ; j++)
    {
       cout<<"*";
    }
    cout<<endl;
}
}

//output

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
  
  #include<iostream>
using namespace std;
int main()
{
int i,j;
char ch='*';
for ( i = 1; i <=3 ; i++)
{
    for ( j =1; j <=9; j++)
    {
if (((i+j)%4==0) || i==2 && j%4==0)
{
  cout<<"*";  
}
else
cout<<" ";
    }
cout<<endl;
}
return 0;
}
  
  // outout
    *   *  
 * * * *
*   *   *