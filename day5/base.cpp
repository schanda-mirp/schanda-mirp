#include<iostream>
using namespace std;
#include<math.h>
int main()
{
 int ch, a, b=0, n;
 cout<<"Enter your choice\n"
     <<"Decimal to binary => 1"
     <<"Binary to decimal => 2";
 cin>>ch;
 switch(ch)
 {
  case 1:
   cout<<"Enter the number in decimal: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
        n=a;
        a/=2;
        b+=(n%2)*pow(10, i);
      }
   cout<<"Answer in binary = "<<b;
 }
 return 0;
}
