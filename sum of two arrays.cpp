#include<bits/stdc++.h>
using namespace std;

vector<int> find_array_sum(vector<int>&v1,int m,vector<int>&v2, int n)
{
    int i=m-1;
    int j=n-1;
    int carry=0;
    vector<int>ans;
    while(i>=0 && j>=0)
    {
        int sum=v1[i]+v2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //if first array is greater
     while(i>=0)
    {
        int sum=v1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
     //if second  array is greater
     while(j>=0)
    {
        int sum=v1[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    //if both array are equal then carry is not equal to zero
     while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return ans;
}
int main(){
vector<int>v1={1,2,3,4};
vector<int>v2={6};
vector<int> a=find_array_sum(v1,4,v2,1);
reverse(a.begin(), a.end());
for(int i=0;i<a.size(); i++)
{
    cout<<a[i]<<" ";
}

return 0;
}