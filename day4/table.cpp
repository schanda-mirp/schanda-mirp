#include<iostream>
using namespace std;
int main()
{
 int n, i, j;
 cout<<"Enter the number lines of the table- ";
 cin>>n;
 for(i=1; i<=n; i++)
 { 
  for(j=1; j<=n; j++)
     cout<<i*j<<" ";
  cout<<endl;
 }
 return 0;
}
