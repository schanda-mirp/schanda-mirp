#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int a, b, c, d, real1, real2, img;
 cout<<"a(x^2) + bx + c"<<endl<<"a= ";
 cin>>a;
 cout<<"b= ";
 cin>>b;
 cout<<"c= ";
 cin>>c;
 cout<<"Your equation is- \n"<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
 d= b*b - 4*a*c;
 if(d<0)
 {
  img= sqrt(-1*d)/(2*a);
  real1= -1*b/(2*a);
  cout<<"Roots are- \n"<<real1<<" + "<<img<<"i\n"<<real1<<" - "<<img<<"i\n";
 }
 else if(d>0)
 {
  real1= (-1*b + sqrt(d))/(2*a);
  real2= (-1*b - sqrt(d))/(2*a);
  cout<<"Roots are- \n"<<real1<<" & "<<real2<<endl;
 }
 else
 {
  real1= -1*b/(2*a);
  cout<<"Root is- \n"<<real1<<endl;
 }
 return 0;
}
