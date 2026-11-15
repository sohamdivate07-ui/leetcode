class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        
        int n=arr.size();
        int ans=0;
        int even=1;
        int odd=0;
        int prefixsum=0;
        int mod=1000000007;
        for(int i=0;i<n;i++)
        {
            prefixsum+=arr[i];
            if(prefixsum % 2==0)
            {
                ans=(ans+odd)%mod;
                even++;
            }
            else
            {
                ans=(ans+even)%mod;
                odd++;
            }
        }
        return ans;
    }
};