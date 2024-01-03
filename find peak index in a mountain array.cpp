#include<bits/stdc++.h>
using namespace std;

int Peak_Index_Mountain_Array(int arr[],int n)  
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s+(e-s)/2;

    }
    return s;

}      
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=Peak_Index_Mountain_Array(arr,n);;
    cout<<"The peak index of mountain array is "<< s;
return 0;
}