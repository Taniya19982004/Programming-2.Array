#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
    int s=0 , e=n-1;
    int mid= s+(e-s)/2;
    int first_ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
           first_ans=mid;
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
    return first_ans;

    
}
int lastOcc(int arr[],int n,int key)
{
    int s=0 , e=n-1;
    int mid= s+(e-s)/2;
    int last_ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            last_ans=mid;
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
    return last_ans;

    
}

int main(){
    int key = 5;
    int arr[7] = {1,2,3,3,5,5,6};

    int FIRST_INDEX =firstOcc(arr,7,key);
    int LAST_INDEX =lastOcc(arr,7,key);

     cout<<"The total no. of occurence is "<< (LAST_INDEX - FIRST_INDEX)+1 <<endl;
return 0;
}