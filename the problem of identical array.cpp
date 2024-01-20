/*Two arrays of size N are called identical arrays if they contain the same elements.
 The order of elements in both arrays could be different; however, both the arrays must contain same elements. 
 You are given two arrays of size N.int check(int *a, int *b, int n)*/
#include<bits/stdc++.h>
using namespace std;

  int  identical_array(int a[],int b[],int n){
     sort(a, a + n);
    sort(b, b + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
  }
  int main()
  {
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int a[n],b[n];
    cout<<"enter the first array elemnt ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the second  array elemnt ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    int ans= identical_array( a, b, n);
    if(ans==1)
    {
        cout<<"arrays are  identical";
    }
    else if(ans==0)
    {
        cout<<"arrays are  not  identical";
    }
    return 0;
  }