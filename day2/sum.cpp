#include<iostream>
using namespace std;
int main()
{
 int arr[100], i, sum=0;
 cout<<"Enter the vale of n- ";
 cin>>n;
 cout<<"Input "<<n<<" numbers-\n";
 for(i=0; i<n; i++)
    cin>>arr[i];
 for(i=0; i<n; i++)
   sum+= arr[i];
 cout<<"Sum of "<<n<<" = "<<sum<<endl;
 return 0;
}
