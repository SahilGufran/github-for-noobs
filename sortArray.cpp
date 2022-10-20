
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i=100;
   int a[i];

    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Array is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   sort(a,a+n);
   cout<<"\nThe sorted array is:";
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

   cout<<"The size of array is "<<n;


    return 0;

}
