#include<bits/stdc++.h>
using namespace std;
vector<int> findIndex(int a[], int n, int key)
    {
        
        int i=0,ans1=-1,ans2=-1;
        for(i=0;i<n;i++)
        {
            if(key==a[i])
            {
                ans1=i;
                break;
            }
           
        }
        
        for(i=n-1;i>=0;i--)
        {
            if(key==a[i])
            {
                ans2=i;
                break;
            }
          
        }
        vector<int> vec1;
        
        vec1.push_back(ans1);
        vec1.push_back(ans2);

        
            return vec1;
        
        //code here.
    }
  int main()
{
int arr[4] = {1, 2, 3, 4};
vector<int>v;
v=findIndex(arr, 4, 4);
for(i=0;i<v.size();i++)
{
cout<<v[i]<<" ";
}
return 0;
}

