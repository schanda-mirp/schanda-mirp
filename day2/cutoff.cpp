#include<iostream>
using namespace std;
int main()
{
 char grade;
 int marks, A, B, C;
 cout<<"Cutoff for grade A is ";
 cin>>A;
 cout<<"Cutoff for grade B is ";
 cin>>B;
 cout<<"Cutoff for grade C is ";
 cin>>C;
 if(A>B && A>C)
    if(B>C)
      cout<<"Cutoff is valid"<<endl;
 else
     cout<<"Cutoff is invalid";
 cout<<"Input the marks of a student- ";
 cin>>marks;
 if(marks>=A)
   grade='A';
 else if(marks>=B)
   grade='B';
 else if(marks>=C)
   grade='C';
 else
   grade='D';
 cout<<"Grade- "<<grade<<endl;
 return 0;
}
