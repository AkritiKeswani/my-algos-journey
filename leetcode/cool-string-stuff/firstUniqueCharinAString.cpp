/* Given a string s, find the first non-repeating character in it 
and return its index. If it does not exist, return -1. */


#include <iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        //first for-loop for starting the hashmap and adding key-value pairs
        map<char, int> characterCount;
        for (int i = 0; i < s.size(); i++) {
            characterCount[s[i]]++;
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (characterCount[s[i]] == 1) return i;
        }
        
        return -1; 
    }
};


// for-loop to increment the value in the hashmap based on character count


//second for-loop is checking the string to cross-check and see if any keys correspond to greater than 1 values 