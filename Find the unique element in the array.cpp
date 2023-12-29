/*You have been given an integer array/list(ARR) of size N. Where N is equal to (2M+ 1)
Now, in the given array/list, 'M' numbers are present twice and one number is present only once
You need to find and return that number which is unique in the arraylist*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 void unique_element(int a[],int n)
 {
    for(int i=0;i<n;i++)
    {
       int count=0;
        for(int  j=0;j<n;j++)
        {
             
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            cout<<"Unique element in array "<<a[i] <<endl;

        }
    }
  
 }

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the array element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   

    unique_element( arr, n);

}
    