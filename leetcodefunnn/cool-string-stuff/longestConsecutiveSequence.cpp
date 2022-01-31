/* Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time. */

#include <unordered_set>

class Solution {
public:
    //O(nlog((n)))
    // 0 1 1 2
    int longestConsecutive(vector<int>& nums) {
        //this var basically stores the length of a sequence seen so far - by default it would be 1 because a element can be a sequence 
        int currentWinner = 1; 
        int longestSequenceLength = 1; 
        //sort the array first 
        sort(nums.begin(), nums.end());
        if (nums.size() == 0) {
            return 0; 
        }
        for (int i = 1; i < nums.size(); i++) {
            //if they are not equal now, we have to see if the current nums[i] lines up with the next which is checking if difference is 1 between the two elements, if it is we increment the winning sequence variable 
            if (nums[i] == nums[i - 1]) continue;
            else if (nums[i] == nums[i - 1] + 1) {
                currentWinner++;
            }
            //otherwise
            else {
                longestSequenceLength = max(longestSequenceLength, currentWinner); 
                currentWinner = 1;
            }
        }
        return max(longestSequenceLength, currentWinner); 
    }
};



//instead of sorting the array, we can use a hash-set to optimize this further -- 
