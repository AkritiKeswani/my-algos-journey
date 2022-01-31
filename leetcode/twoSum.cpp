class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> resultingElements;
            map<int, int> hashSums;
            for (int i = 0; i < nums.size(); i++) {
                hashSums[nums[i]] = i; 
            }
            for (int i = 0; i < nums.size(); i++) {
                int otherElement = target - nums[i]; 
                if (hashSums.count(otherElement) > 0) {
                    if (i != hashSums[otherElement]) {
                        resultingElements.push_back(i); 
                        resultingElements.push_back(hashSums[otherElement]); 
                        return resultingElements; 
                    }
                }
            }
            return resultingElements;
        }
    }; 



// [5, 6, 9, 11, 2] 
//target = 11 
//output = [0,1]

//hashmap is being intialized for the key being element in array, and value being corresponding index
// {5:0, 6:1, 9:2, 11:3, 2:4} 
// for loop over the nums array itself and intialize the index of the array as value in the hashmap

//another for loop over nums to find the other element if we just have one random nums[i] 
//if condition to see if that particular otherElement exists (is present in the hashtable) 
// if it is, we further check if index i is NOT EQUAL to the otherElement meaning we generate two unique resultingElements 
// then we simply add these to the array 
// return these within the for loop, and outside to reflect the actual two elements that could be summed up (unique) 