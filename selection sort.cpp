#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SelectionSort (int arr[],int n)
{
    int i,minIndex;
    for(i=0;i<n-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
           
        }
        swap(arr[minIndex],arr[i]);
    }
     
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
        
    } 
} 

int main(){
int arr[6]={1,7,9,2,3,0};
SelectionSort ( arr,6);
printArray(arr, 6);
return 0;
}