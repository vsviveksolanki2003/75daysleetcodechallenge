class Solution {
    private:
       void solve(vector<int>& nums,vector<int> output,int indx,vector<vector<int>>& ans)
       { //base case
         if(indx>=nums.size())
          {  ans.push_back(output);
            return;
          }
            //exclude case
            solve(nums,output,indx+1,ans);

            //include case
            int element=nums[indx];
            output.push_back(element);
            solve(nums,output,indx+1,ans);
       }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums,output,0,ans);
        return ans;
    }
};