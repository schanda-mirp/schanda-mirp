#include<iostream>
using namespace std;
int main()
{
 int n, i, j=0;
 cout<<"Enter the number- ";
 cin>>n;
 for(i=2; i<=n/2; i++)
 { 
  if(n%i==0)
    j=1;
 }
 if(j==0)
  cout<<n<<" is a prime number"<<endl;
 else
  cout<<n<<" is not a prime number"<<endl;
 return 0;
}
