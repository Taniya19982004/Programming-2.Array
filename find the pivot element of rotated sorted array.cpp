#include<iostream>
using namespace std;

int getPivot(int arr[],int n)
{
    int low=0;
    int high = n-1;

    while (low<=high){
        int mid=low+(high-low)/2;
        int next=(mid+1+n)%n;
        int previous=(mid-1+n)%n;
    if(arr[mid]<=arr[next]&& arr[mid]<arr[previous])
    {
        return mid;
    }
    else if(arr[low]<=arr[high])
    {
        return low;
    }
    else if(arr[mid]>=arr[low]){
        low=mid+1;
    }
    else if(arr[mid]<=arr[low]){
        high=mid-1;
    }
}
return -1;
}


int main(){
int arr[5]={11,12,14,1,2};
cout<<"pivot element is :"<<getPivot(arr,5);
return 0;
}
