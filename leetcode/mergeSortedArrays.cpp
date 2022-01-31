/* You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored 
inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote 
the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a 
length of n.
*/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstArrayPointer = 0; 
        int secondArrayPointer = 0; 
        vector<int> resultingArray; 
        while (firstArrayPointer < m && secondArrayPointer < n) {
            if (nums1[firstArrayPointer] < nums2[secondArrayPointer]) {
                resultingArray.push_back(nums1[firstArrayPointer]); 
                firstArrayPointer++; 
            }
            else {
                resultingArray.push_back(nums2[secondArrayPointer]); 
                secondArrayPointer++; 
            }
        }
        while (firstArrayPointer < m) {
            resultingArray.push_back(nums1[firstArrayPointer]);
            firstArrayPointer++;
        }
        while (secondArrayPointer < n) {
            resultingArray.push_back(nums2[secondArrayPointer]);
            secondArrayPointer++;
        }
        nums1 = resultingArray;
      
    }
};
 
        
        
        
        
// [1,2,3, 0, 0, 0]
// [2,5,6]


//becomes: 
//[1,2,2,3,5,6]




// [2,4,5]
// [1,0,4]
