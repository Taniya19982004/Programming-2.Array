#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid = (start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid =(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,7,9,11,13};

    int index = binarySearch(even,6,11);

    cout<< "index of 11 is "<<index<<endl;


return 0;
}