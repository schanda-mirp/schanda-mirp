#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int x1, x2, x3, y1, y2, y3, d1, d2, d3;
 cout<<"Enter the coordinates of the triangle\nx1= ";
 cin>>x1;
 cout<<"y1= ";
 cin>>y1;
 cout<<"x2= ";
 cin>>x2;
 cout<<"y2= ";
 cin>>y2;
 cout<<"x3= ";
 cin>>x3;
 cout<<"y3= ";
 cin>>y3;
 d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
 d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 if(d1==d2==d3)
   cout<<"The triangle is equilateral"<<endl;
 else if(d1==d2||d1==d3||d2==d3)
   cout<<"The triangle is isosceles"<<endl;
 else 
   cout<<"The triangle is scalar"<<endl;
 return 0;
}
