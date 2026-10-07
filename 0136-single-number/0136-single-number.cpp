class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int m=mp.size();
       for(const auto& pair:mp)
       {
        if (pair.second==1)
        {
            return pair.first;
        }
       }
       return 0;
    }
};