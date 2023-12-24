#include<bits/stdc++.h>
using namespace std;

int main(){
   int r,n,j;
   cout << "Enter a number: ";
   cin >> n;
   int arr[100];
   int i=0;
   int one[100];
   int two[100];

   while(n!=0)
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
   
   cout << "Binary representation: ";
   for (int k = 0; k < i; k++)
   {
       cout << arr[k];
   }
   cout << "\n";
   
   
   for(j=0; j < i; j++)
   {
        if(arr[j]==0)
        {
        one[j]=1;
        }
       else
       {
         one[j]=0;
       }
   }
   
   int carry = 1;
   for(j = i - 1; j >= 0; j--)
   {
      if(one[j] == 1 && carry == 1)
      {
        two[j] = 0;
      }
      else if(one[j] == 0 && carry == 1)
      {
        two[j] = 1;
        carry = 0;
      }
      else
      {
         two[j] = one[j];
      }
   }
   
   cout << "One's complement: ";
   for (int k = 0; k < i; k++)
   {
       cout << one[k];
   }
   cout << "\n";
   
   cout << "Two's complement: ";
   for (int k = 0; k < i; k++)
   {
       cout << two[k];
   }

   return 0;
}