#include<iostream>
using namespace std;
int main()
{
 int n, i, j=0;
 cout<<"Enter the number- ";
 cin>>n;
 for(i=1; i<=n/2; i++)
 { 
  if(n%i==0)
    cout<<i<<"\t";
 }
 
 return 0;
}
