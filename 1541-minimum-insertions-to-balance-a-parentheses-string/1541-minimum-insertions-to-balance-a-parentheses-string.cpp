class Solution {
public:
    int minInsertions(string s) {
        int insert=0;
        int cnt_open=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cnt_open+=1;
            }
            else if(i+1<s.size() && s[i]==')'&& s[i+1]==')')
            {
              if(cnt_open>0)
              {
                cnt_open--;
              }
              else
              {
                insert++;
              }
              i++;
            }
            else
            {
                insert++;
                if(cnt_open>0)
                {
                    cnt_open--;
                }
                else
                {
                    insert++;
                }

            }
        }
        return (insert+(2*cnt_open));
        
    }
};