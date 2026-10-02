class Solution {
public:
    int climbStairs(int n) {
        int sum1=1;
        int sum2=2;
        int sum=0;
        if(n==1) return 1;
        if( n==2) return 2;
        for(int i=3;i<=n;i++)
            {
                sum=sum1+sum2;
                sum1=sum2;
                sum2=sum;
            }
        
            return sum;
    }

};