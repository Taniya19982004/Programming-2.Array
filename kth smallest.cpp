#include<bits/stdc++.h>
using namespace std;
   
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[k-1];
         
    }

    int main(){
        vector<int> arr= {1, 4, 2, 3, 5};
        int k = kthSmallest(arr, 3);
        cout<<k;
        return 0;
    }
