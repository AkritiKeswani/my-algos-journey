class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //hashmap
        map<int, int> mapChecker;
        for (int i = 0; i < nums.size(); i++) {
            if (mapChecker[nums[i]]) {
                //if there's somethinng in our hashmap and we are encountering it AGAIN that
                // means we are tryna literally add that same shit back which ain't good cuz hashmaps only include unique key values, and therefore it would be a duplicate 
                return true;
            }
            //and if we do see the element for the first time (As in its not already stored 
            //in the hashmap), we would just add it to the counting thing or mapChecker (hashmap)
            mapChecker[nums[i]]++;
        }
        return false; 
    }
};

/* Approach I thought of first would just be to somehow store the count of what we are seeing by putting the array elements in a hashmap as that way we could track the unique elements and immediately catch duplicates (hashmaps don't allow duplicates) 
-- this way whenever we DO SEE a duplicate, we return TRUE and otherwise FALSE  */