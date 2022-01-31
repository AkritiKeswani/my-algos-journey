
/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input 
string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.*/


class Solution {
public:
    
    // ")]))))))))))"
    bool isValid(string s) {
        stack<char> st;
        for (char c: s) {
            if (c == '{' || c == '(' || c == '[') {
                st.push(c);
            }
            else {
                if (st.empty())
                    return false;
                char topOfStack = st.top();
                st.pop();
                if (c == ')') {
                    if (topOfStack != '(') {
                        return false;
                    }
                }
                else if (c == '}') {
                    if (topOfStack != '{') {
                        return false;
                    }
                }
                else if (c == ']') {
                    if (topOfStack != '[') {
                        return false;
                    }
                }
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};