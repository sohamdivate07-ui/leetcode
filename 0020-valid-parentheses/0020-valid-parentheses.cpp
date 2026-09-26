class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false; // Quick check for odd lengths
        
        stack<char> st;
        
        for (char c : s) {
            // If it's an opening bracket, push its expected counterpart
            if (c == '(') st.push(')');
            else if (c == '{') st.push('}');
            else if (c == '[') st.push(']');
            else {
                // If it's a closing bracket, check if stack is empty or doesn't match
                if (st.empty() || st.top() != c) {
                    return false;
                }
                st.pop(); // It matches, so remove it
            }
        }
        
        // If stack is empty, all brackets matched correctly
        return st.empty();
    }
};