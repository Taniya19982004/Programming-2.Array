#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,n;
    cout<<"enter a number";
    cin>>n;
   int arr[100];
   int i=0;

   while(n>0)
    {
         r=n%2;
         n=n/2;
         arr[i]= r;
         i++;
         
    }
   
   int s=0;
   int e=i-1;
   
   while(s<e)
   {
      swap (arr[s],arr[e]);
      s++;
      e--;

   }
   for(int j=0;j<i;j++)
   {
       //cout<< arr[j];
       if(arr[j]==0)
       {
         cout<<"1";

       }
       else{
         cout<<"0";

       }
   }

return 0;
}