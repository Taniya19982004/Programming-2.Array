#include<iostream>;
using namespace std;

    int peakElement(int arr[],int s,int e)
 {
    int mid = s+(e-s)/2;
    if(s==e)
    {
        return s;
    }

        if(arr[mid]<arr[mid+1])
        {
            return peakElement(arr,mid+1,e);
        }
        else
        {
           return peakElement(arr,s,mid);
        }

 }

int main(){
    int arr[5]={1,2,4,1,0};
   cout<< peakElement( arr, 0, 4);
return 0;
}