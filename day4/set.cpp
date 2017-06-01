#include<iostream>
using namespace std;
void rec(int n, int count)
{
 for(int i=0; i<=n; i++)
    {count++;
     cout<<i<<", ";
     rec(i, count);
     if (count==n)
         break;
     cout<<endl;
    }
}
int main()
{
 int n;
 cout<<"Enter the value of n - ";
 cin>>n;
 rec(n, 0);
 return 0;
}

