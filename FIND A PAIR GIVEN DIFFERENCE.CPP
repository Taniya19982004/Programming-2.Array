#include<iostream>
using namespace std;

int findPair(int arr[], int size, int n){
    //code
    for(int i=0;i<size;i++)
    {
        for(int j=1;j<size;j++)
        {
          
            if(i!=j && arr[i]-arr[j]==n)
            {
                 return 1;
            }
           
        }
    }
    return -1;
}

int main(){
int arr[] = {1,2,6,3,4};
int n=0;
int ans=findPair( arr, 5, n);
cout<<ans;
return 0;
}