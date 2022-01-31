// Given an integer array nums, find the contiguous subarray (containing at least one number) 
//which has the largest sum and return its sum.


//utilizing pre-fix sum strategy - making an array of the prefix sums based on given array nums

class Solution {
    public: 
    int maxSubArray(vector<int>& nums) {
        //initialize a prefixSum array 
        vector<int> prefixSums(nums.size());
        //initially set to 0 
        prefixSums[0] = nums[0]; 
        for (int i = 1; i < nums.size(); i++) {
            prefixSums[i] = prefixSums[i - 1] + nums[i];
        }
        //iterating through the prefixSums array
        int minValueFoundSoFar = 0;
        int maxSubarraySumSoFar = prefixSums[0];
        for (int i = 0; i < prefixSums.size(); i++) {
            //here we have to figure out how to get the maximize the difference between A & B - consider A the maximum bound and B the minimum bound 
            int currentValue = prefixSums[i]; 
            maxSubarraySumSoFar = max(maxSubarraySumSoFar,
                                      currentValue - minValueFoundSoFar); 
            minValueFoundSoFar = min(minValueFoundSoFar,
                                    currentValue);
        }
        return maxSubarraySumSoFar;      
    }
};



// nums =      [-2, 1, -3, 4, -1, 2, 1, -5, 4]
//prefixSums = [-2,-1, -4, 0, -1, 1, 2, -3, 1]   




