//Given a string s, return the longest palindromic substring in s.

class Solution {
public:
    string longestPalindrome(string s) {
        // int stringLength = s.size(); 
        if (s.size() < 2) {
            return s; 
        }
        string overallPalindrome = "";
        for (int currentMid = 0; currentMid < s.size(); currentMid++) {
            // s = "babad"
            // eg., currentMid = 1, 'a'
            int leftPointer = currentMid - 1; // 0, 'b'
            int rightPointer = currentMid + 1; // 2, 'b'
            string currentPalindrome = string(1, s[currentMid]);
            while (leftPointer >= 0 && rightPointer < s.size() && s[leftPointer] == s[rightPointer]) {
                leftPointer--;
                rightPointer++;
            }
            leftPointer++;rightPointer--;
            currentPalindrome = s.substr(leftPointer, rightPointer -  leftPointer + 1);
            if (overallPalindrome.size() < currentPalindrome.size()) {
                overallPalindrome = currentPalindrome;
            }
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s[i + 1]) {
                int leftPointer = i - 1; // 0, 'b'
                int rightPointer = i + 2; // 2, 'b'
                string currentPalindrome = s.substr(i, 2);
                while (leftPointer >= 0 && rightPointer < s.size() && s[leftPointer] == s[rightPointer]) {
                    leftPointer--;
                    rightPointer++;
                }
                leftPointer++;rightPointer--;
                currentPalindrome = s.substr(leftPointer, rightPointer -  leftPointer + 1);
                if (overallPalindrome.size() < currentPalindrome.size()) {
                    overallPalindrome = currentPalindrome;
                }
            }
        }
        
        return overallPalindrome;
    }
};
