#include<iostream>
using namespace std;
int main()
{
 int a, i, j=0, b;
 cout<<"Enter two number- "<<endl;
 cin>>a>>b;
 for(i=1; i<=a/2; i++)
 { 
  if(a%i==0 && b%i==0)
    j=i;
 }
 cout<<"HCF of "<<a<<" and "<<b<<" = "<<j<<endl;
 return 0;
}
