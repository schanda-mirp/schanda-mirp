#include<iostream>
using namespace std;
int main()
{
 int pts[50][2], i, j, n, area[50], total_area=0;
 cout<<"Enter the number of points you want- ";
 cin>>n;
 for(i=0; i<n; i++)
    {
     cout<<"Enter the co ordinates of point "<<i+1<<endl;
     for(j=0; j<2; j++)
       cin>>pts[i][j];
    }
 for(i=0; i<n-2; i++)
    {
     area[i]= (pts[0][0] * (pts[i+1][1] - pts[i+2][1])+ pts[i+1][0] * (pts[i+2][1] - pts[0][1])+ pts[i+2][0] * (pts[0][1] - pts[i+1][1]))/2;
     if(area[i]<0)
       area[i] *= -1;
     total_area+= area[i];
    }
 cout<<"Area of the polygon = "<<total_area<<endl;
 return 0;
}
