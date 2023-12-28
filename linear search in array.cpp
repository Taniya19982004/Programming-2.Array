#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[],int size, int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            return 1;
            
        }
    }

    return 0;
     

}

int main(){
    int number;
    int   arr[10]={46,3,4,8,7,99,89,99,30,8};
    cout<<"enter a number which you want to search in array "<<endl;
    cin>>number;

    bool found=linear_search(arr,10,number);

    if(found)
    {
        cout<<"number is present "<<endl;
    }
    else{
        cout<<"number is not present "<<endl;
    }
return 0;
}