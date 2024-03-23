#include<iostream>
using namespace std;

int  sum(int arr[],int size,int s)
{
    if(size==0)
    return s ;
        
    s= s+ arr[0];
   return  sum(arr+1,size-1,s);

   
}
int main(){
int arr[4]={4,5,1,2};
int s=sum(arr,4,0);
cout<<s<<" ";
return 0;
}