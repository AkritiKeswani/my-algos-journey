/* Given two integer arrays nums1 and nums2, return an array of their intersection. 
Each element in the result must be unique and you may return the result in any order.*/ 

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //sorting arrays for future comparisons between the two, using pointers! 
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        //array pointers are initially at 0th; 
        int pointerAtFirstArray = 0;
        int pointerAtSecondArray = 0;
        //initializing a set will be useful for now as we do not want to return any duplicates - later on this has to be converted to a vector<int> using a while loop 
        set<int> resultingSet; 
        //main operation 
        while (pointerAtFirstArray < nums1.size() && pointerAtSecondArray < nums2.size()) {
            if (nums1[pointerAtFirstArray] > nums2[pointerAtSecondArray]) {
                pointerAtSecondArray++;
            }
            else if(nums1[pointerAtFirstArray] < nums2[pointerAtSecondArray]) {
                pointerAtFirstArray++; 
            }
            // if both elements at both points are equal 
            else {
                resultingSet.insert(nums1[pointerAtFirstArray]); 
                pointerAtFirstArray++;
                pointerAtSecondArray++;
            }
            
        }
        vector<int> resultingVector(resultingSet.begin(), resultingSet.end());
        return resultingVector; 
    }

}; 
                

            
            

// nums1 and nums2 - SORT 
// MAIN comparison conditions - 
// nums1[pointerAtFirstArray ] > nums2[pointerAtSecondArray] , increment pointerAtSecondArray 
// nums1[pointerAtFirstArray ] < nums2[pointerAtSecondArray] - increment pointerAtFirstArray 
//nums1[pointerAtFirstArray ] == nums2[pointerAtSecondArray] - add that particular element to resultingSet +  increment both pointers
// resultingSet - of their intersection, when both elements from both arrays are equal. they intersect or clash 
// the result shouldn't contain any duplicates - SET 
// convert the Set into vector<int> using a while loop 
