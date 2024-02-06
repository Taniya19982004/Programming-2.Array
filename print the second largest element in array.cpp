#include<bits/stdc++.h>
using namespace std;
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n,greater<int>());
	    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {

            return arr[i];

        }

    }
      return -1;
	}

int main(){
int arr[7]={4,5,8,1,0,9,8};
int ans=print2largest( arr,7);
cout<<"the second largest element of an array is "<<ans<<endl;
return 0;
}