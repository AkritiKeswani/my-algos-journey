/* Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here. */class Solution {
public:
    int longestPalindrome(string s) {
        //initialize hash-map 
        unordered_map<char, int> countChars; 
        // for loop over the string itself and add to char map 
        for (int i = 0; i < s.size(); i++) {
            //every time you see a char, you increase the count 
            countChars[s[i]]++;
        }
        int longestPalindromeContainer = 0; 
        //creating boolean flag - see logic below 
        bool didWeSeeOdd = false; 
        //loop over the hash-map since now you have to get the even counts and add them to the temp you just created ^ 
        for ( auto v : countChars) {
            if (v.second % 2 == 0) {
                //longestPalindromeContainer += v.second; 
                longestPalindromeContainer = longestPalindromeContainer + v.second;
            }
            else {
                didWeSeeOdd = true; 
                longestPalindromeContainer += v.second - 1; 
            }
        }
        if (didWeSeeOdd) {
            longestPalindromeContainer++; 
        }
        return longestPalindromeContainer; 
    }
}; 

/* The main idea here is that in order for us to even locate a palindrome within the given string, 
there must be an even number of suppose d's or c's in this ex but exactly one a or b which we can then place 
onto the middle 

All palindromes follow this pattern where - racecar -- we see r r on both ends, then a a, then c c , 
then we only have ONE e! 

We could make an unordered map <char, int> where we map the number of characters to the amount of occurences 
in the string 

v.second % 2 ==0 is checking for evens, if there are we simply add to the result we are returning, if we see 
odds, then we subtract 1 and still add 
even number of chars - all can be used to generate palindrome 
odd - nearest even can be used aaa then 2 

LOGIC FOR BOOLEAN FLAG 
creating a flag ish boolean to detect if we saw an odd at all, and when we do, 
we would set this to true to actually indicate yes we do have an odd that could potentially be 
used as the middle placeholder of the palindrome (the odd man out essentially) */ 