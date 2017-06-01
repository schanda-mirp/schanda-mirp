#include<iostream>
using namespace std;
int main()
{
 int n, i, j=0, N;
 cout<<"Enter the number- ";
 cin>>N;
 for(n=1; n<=N; n++){j=0;
 for(i=2; i<=n/2; i++)
 { 
  if(n%i==0)
    j=1;
 }
 if(j==0)
  cout<<n<<" is a prime number"<<endl;
 }
 return 0;
}
