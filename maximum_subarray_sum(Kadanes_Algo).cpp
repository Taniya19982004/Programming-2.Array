#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void maximum_sum(int arr[],int n){
            int maxi=INT_MIN;
            int sum=0;
            int ansStart;
            int ansEnd;
            for(int i=0;i<n;i++){
                if (sum == 0){
                    ansStart=i;
                }
                sum=sum+arr[i];                                                                                                                                                                                                                                                                                                                                                                                                                                              
               
                if(sum>maxi){
                    maxi=sum;
                    ansEnd=i;
                }
                if(sum<0){
                    sum=0;
                }
            }

            cout<<maxi;
        }

};

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the number  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solution S1;
    S1.maximum_sum(arr,n);


}