class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int cnt_open=0;
        int cnt_close=0;
        if(n==0) return 0;
        for(int i=0;i<n;i++)
        {
          
            if(s[i]=='(')
            {
                cnt_open++;
            }
            else
            {
               if(cnt_open==0)
               {
                cnt_close++;
               }
               else
               {
                cnt_open--;
               }
            }  
        }
         return (cnt_open+cnt_close);
    }
};