class Solution {
//     private:
//        void solve(vector<int>& nums,vector<int> output,int indx,vector<vector<int>>& ans)
//        { //base case
//          if(indx>=nums.size())
//           {  ans.push_back(output);
//             return;
//           }
//             //exclude case
//             solve(nums,output,indx+1,ans);

//             //include case
//             int element=nums[indx];
//             output.push_back(element);
//             solve(nums,output,indx+1,ans);
//        }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> output;
//         solve(nums,output,0,ans);
//         return ans;

  //BIT MANUPULATION TECHNIQUE
     public: 
         vector<vector<int>> subsets(vector<int>& nums)
         {
            int n=nums.size(), p=1<<n;
            vector<vector<int>> subs(p);
            for(int i=0;i<p;i++)
              for(int j=0;j<n;j++)
                 if((i>>j)&1)
                    subs[i].push_back(nums[j]);
                return subs;
         }
    
};