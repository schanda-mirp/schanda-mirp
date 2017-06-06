#include<iostream>
using namespace std;
#include<math.h>
int main()
{
 int ch, a, b=0, n, m, c;
 char B;
 cout<<"Enter your choice\n"
     <<"Decimal to binary        => 1\n"
     <<"Binary to decimal        => 2\n"
     <<"Decimal to octal         => 3\n"
     <<"Decimal to hexadecimal   => 4\n"
     <<"Binary to octal          => 5\n"
     <<"Binary to hexadecimal    => 6\n"
     <<"Octal to decimal         => 7\n"
     <<"Octal to binary          => 8\n"
     <<"Octal to hexadecimal     => 9\n"
     <<"Hexadecimal to decimal   => 10\n"
     <<"Hexadecimal to binary    => 11\n"
     <<"Hexadecimal to octal     => 12\n";
 cin>>ch;
 switch(ch)
 {
  case 1:					//Decimal to binary
   cout<<"Enter the number in decimal: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
        n=a;
        a/=2;
        b+=(n%2)*pow(10, i);
      }
   cout<<"Answer in binary = "<<b<<endl;
   break;
 
  case 2:					//Binary to decimal
   cout<<"Enter the number in binary: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
       n=a;
       a/=10;
       b+=(n%10)*pow(2, i);
      }
   cout<<"Answer in decimal = "<<b<<endl;
   break;

  case 3:					//Decimal to octal
   cout<<"Enter the number in decimal: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
        n=a;
        a/=8;
        b+=(n%8)*pow(10, i);
      }
   cout<<"Answer in octal = "<<b<<endl;
   break;

  case 4:					//Decimal to hexadecimal
   cout<<"Enter the number in decimal: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
        n=a;
        a/=16;
        b+=(n%16)*pow(10, i);
      }
   cout<<"Answer in hexadecimal = "<<b<<endl;
   break;

  case 5:					//Binary to octal
   cout<<"Enter the number in binary: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
       b*=10;
       n=a;
       a/=1000;
       n%=1000;
       for(int j=0; n!=0; j++)
          {
           m=n;
           n/=10;
           b+=(m%10)*pow(2, j);
          }
       
      }
   cout<<"Answer in octal = "<<b<<endl<<endl;
   break;

  case 6:					//Binary to hexadecimal
   break;

  case 7:					//Octal to decimal
   cout<<"Enter the number in octal: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
       n=a;
       a/=10;
       
       b+=(n%10)*pow(8, i);
      }
   cout<<"Answer in decimal = "<<b<<endl;
   break;

  case 8:					//Octal to binary
   cout<<"Enter the number in octal: ";
   cin>>a;
   for(int i=0; a!=0; i++)
      {
       b*=1000;
       n=a;
       a/=1000;
       n%=1000;
       for(int j=0; n!=0; j++)
          {
           m=n;
           n/=2;
           c+=(m%2)*pow(10, j);
          }
       b+=c;
      }
   cout<<"Answer in binary = "<<b<<endl;
   break;

  case 9:					//Octal to hexadecimal
   break;
 
  case 10:					//Hexadecimal to decimal
   break;

  case 11:					//Hexadecimal to binary
   break;

  case 12:					//Hexadecimal to octal
   break;
  
  default:
   cout<<"Wrong choice!!!!!"<<endl;
 }
 return 0;
}
