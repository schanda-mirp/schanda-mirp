#include<iostream>
using namespace std;
int main()
{
 int arr[100], i, j, n, temp;
 cout<<"Enter the vale of n- ";
 cin>>n;
 cout<<"Input "<<n<<" numbers-\n";
 for(i=0; i<n; i++)
    cin>>arr[i];
 for(i=0; i<n; i++)
    for(j=i+1; j<n; j++)
        if(arr[i]<arr[j])
        {
         temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
	}
 cout<<"Second Maximum ="<<arr[1]<<endl;
 return 0;
}
