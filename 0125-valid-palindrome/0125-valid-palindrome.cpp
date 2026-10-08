class Solution {
public:
    bool isPalindrome(string s) {
       string str="";
       for(auto c:s)
       {
        if (isalnum(c))
        {
            str+=tolower(c);
        }
       }
       string rev=str;
       reverse(rev.begin(),rev.end());
       return rev==str;
    }   
};