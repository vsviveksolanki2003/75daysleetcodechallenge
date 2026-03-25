class Solution {
    int solvemem(vector<int>& coins, int amount,vector<int>& dp) {
    // base case
    if (amount == 0)
        return 0;

    if (amount < 0)
        return INT_MAX;
    if(dp[amount]!=-1)
        return dp[amount];


    int mini = INT_MAX;

    for (int coin : coins) {
        int ans = solvemem(coins, amount - coin,dp);

        if (ans != INT_MAX) {
            mini = min(mini, 1 + ans);
        }
    }
    dp[amount]=mini;

    return mini;
}
public:
    int coinChange(vector<int>& coins, int amount) {
        //  int ans = solve(coins, amount);
        vector<int> dp(1+amount,-1);
       int ans=solvemem(coins,amount,dp);
    return (ans == INT_MAX) ? -1 : ans;
    }
};