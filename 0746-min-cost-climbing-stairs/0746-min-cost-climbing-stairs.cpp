class Solution {
    // int solve(vector<int>& cost, int n, vector<int>& dp) {
    //     if (n <= 1)
    //         return cost[n];

    //     if (dp[n] != -1)
    //         return dp[n];

    //     dp[n] = cost[n] + min(solve(cost, n - 1, dp),solve(cost, n - 2, dp));
    //     return dp[n];
    // }

//TABULATION
int solve(vector<int>& cost, int n) {
         vector<int> dp(n+1);
         dp[0]=cost[0];
         dp[1]=cost[1];

         for(int i=2;i<n;i++)
           {
            dp[i]=cost[i] + min(dp[i-1],dp[i-2]);
           }
           return min(dp[n-1],dp[n-2]);
    }
    int solve2(vector<int>& cost, int n) {
         int prev1=cost[1];
          int prev2=cost[0];

        
         for(int i=2;i<n;i++)
           { 
            int curr=cost[i] + min(prev1,prev2);
              prev2=prev1;
              prev1=curr;
           }
           return min(prev1,prev2);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
         
        int ans=solve2(cost,n);
        return ans;
    }
};