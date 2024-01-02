#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
    int s=0 , e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e = mid - 1;
        }
        mid= s+(e-s)/2;

    }
    return ans;

    
}
int lastOcc(int arr[],int n,int key)
{
    int s=0 , e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e = mid - 1;
        }
        mid= s+(e-s)/2;

    }
    return ans;

    
}

int main(){
    int key = 5;
    int arr[7] = {1,2,3,3,5,5,6};

    cout<<"First occurence of 5 is at index "<<firstOcc(arr,7,key)<<endl;
    cout<<"Last occurence  of 5 is at index "<<lastOcc(arr,7,key)<<endl;
return 0;
}