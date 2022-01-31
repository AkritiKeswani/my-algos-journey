class Solution {
public:
    bool isAnagram(string s, string t) {
        //checking to see if same char count, if not then not valid anagrams
        if (s.size() != t.size()) {
            return false;
        }
        //sorting each individual string 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) {
            return true;
        }
        else {
            return false; 
        }
        // return s == t;
        // return true; 
    }
};


//can you implement this in a better way? 