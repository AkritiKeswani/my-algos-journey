class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for (int i = 0; i < s.size(); i++) {
            //first check if the character in string is alphanumeric and if it is you           are essentially converting to lowercase 
            if (isalnum(s[i])) {
                temp.push_back(tolower(s[i]));
            }                                        
        }
        for (int i = 0; i < temp.size()/2; i++) {
            if (temp[i] != temp[temp.size()-1 - i]) {
                return false; 
            }
        }    
        return true; 
    }
};


//General Approach: 
/* For loop through the string firstly, and have two if-conditions 
within that check for uppercase(and thereby convert to lowercase), and 
following that also remove non-alphaumeric characters from the string
given (think commas, spaces, semicolons etc)

save the string that you have for looped through and applied the conditions to - 
in a temp variable maybe 

now take that temp and just have another for loop that reverses that - reversedString 
if the temp == reversedString, then you have a valid palindrome - hence - true 
 if you don't then just return false. - hence, not a valid palidrome */
