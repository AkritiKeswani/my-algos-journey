/* Given two strings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //make a hashmap that counts the occurences of each char in the magazine 
        unordered_map<char, int> magazineCharCount; 
        for (int i = 0; i < magazine.size(); i++) {
            //if you encounter a char in the magazine string, add to hashmap 
            magazineCharCount[magazine[i]]++; 
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            //cases in which we can't create the ransomNote because we don't have the particular character, or don't have enough of that 
            if (!magazineCharCount[ransomNote[i]] || magazineCharCount[ransomNote[i]] == 0) {
                return false;
            }
            magazineCharCount[ransomNote[i]]--; 
        }
        return true; 
    }
};







//APPROACH: 

//<Character, Integer> HASHMAP

// "aa" ransomnote should be resembling 2 chars of a available in "aab" magazine 