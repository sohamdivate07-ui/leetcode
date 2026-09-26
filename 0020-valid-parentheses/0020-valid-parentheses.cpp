class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        
        if (n % 2 != 0) {
            return false;
        }
        
        for (int i = 0; i < n; i++) {
            // If it's an opening bracket, push it
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]); // Fixed a[i] to s[i]
            } 
            else {
                // If stack is empty, we have a closing bracket without a matching opening bracket
                if (st.empty()) {
                    return false;
                }
                
                char topChar = st.top();
                
                // Check if the current closing bracket matches the top of the stack
                if ((s[i] == ')' && topChar == '(') ||
                    (s[i] == ']' && topChar == '[') ||
                    (s[i] == '}' && topChar == '{')) {
                    st.pop();          
                } else {
                    return false; // Mismatch
                }
            }
        }
        
        if (st.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};