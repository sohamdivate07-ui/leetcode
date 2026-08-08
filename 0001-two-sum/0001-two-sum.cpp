class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       unordered_map<int,int>numMap;
    //    created hash table with first int as key and second as value
    for(int i=0;i<n;i++)
    {
        int complement = target-nums[i];
        if(numMap.count(complement))
        {
            return{numMap[complement],i};
        }
        numMap[nums[i]]=i;
    }
return {};
    }
    
};