#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=0;
     int max_sum=nums[0];
     for(int i=0;i<nums.size();i++)
     {
        sum = sum+nums[i];
         if(sum>max_sum)
        {
            max_sum=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
       
     }
     return max_sum;
    }
};

int main() {
    Solution solution;

    // Example array
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    // Calling the maxSubArray function and printing the result
    int result = solution.maxSubArray(nums);
    
    cout << "The maximum subarray sum is: " << result << endl;
    
    return 0;
}