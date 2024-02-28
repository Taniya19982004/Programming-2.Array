#include<bits/stdc++.h>
using namespace std;

bool  uniqueOccurrences(vector<int> &arr)
 {
    vector <int> v;
    int n=arr.size();
   sort(arr.begin(),arr.end());
int count;
for(int i=0;i<n;i=i+count )
    {
       count=1;
        for(int  j=i+1;j<n;j++)
        {
             
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
     v.push_back(count);
    
 }
 
  sort(v.begin(),v.end());
 int i=0;
 while(i<v.size()-1)
 {
    if(v[i]==v[i+1])
    {
        return false;
    }
   i++;
 }
 return true;
 }

int main()
{
    vector<int> v={1,1,2,2};
   bool r= uniqueOccurrences(v);
   cout << (r ? "true" : "false");
return 0;
}