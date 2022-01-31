/* Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once. */


class Solution {
public:
    //you are given a vector of strings, strs, and want to return a vector containing a vector of strings 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupedAnagrams; 
        if (strs.size() == 0) {
            return groupedAnagrams; 
        }
        
        //key is the sorted string and its value is the unsorted strings that correspond to it 
        unordered_map<string, vector<string>> stringMap;
        for (int i = 0; i < strs.size(); i++) {
            //we have to save a copy of the sorted key somewhere since c++ does on the spot sorting
            string keyForStringMap = strs[i]; 
            sort(keyForStringMap.begin(), keyForStringMap.end()); 
            stringMap[keyForStringMap].push_back(strs[i]);
        }
        //auto indicates you donn't need to specify the type vector<string> 
        for ( auto v : stringMap) {
            //v.first would be the key and v.seconnd would indicate the value 
            groupedAnagrams.push_back(v.second); 
        }
        
        return groupedAnagrams;
    }
};





//strs - array of strings 
// group the anagrams together 