#include<iostream>
using namespace std;
int main()
{
 int arr[4], i, j, temp;
 cout<<"Input four numbers-\n";
 for(i=0; i<4; i++)
    cin>>arr[i];
 for(i=0; i<4; i++)
    for(j=i+1; j<4; j++)
         if(arr[i]<arr[j])
        {
         temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
	}

 cout<<"Largest number is "<<arr[0]<<endl
     <<"Second largest number is "<<arr[1]<<endl;
 return 0;
}
