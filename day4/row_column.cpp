#include<iostream>
using namespace std;
int main()
{
 int r, c, i, j, count=1;
 cout<<"Enter the number of rows and columns- "<<endl;
 cin>>r>>c;
 for(i=1; i<=r; i++)
    {
     for(j=1; j<=c; j++)
        {
         if(count%2!=0)
          cout<<"*";
         else
          cout<<" ";
         count++;
        }
     cout<<endl;
    }
 return 0;
}
