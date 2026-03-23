class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        // set<vector<int>> uniquetrip;
        int n = nums.size();
        // 1.BRUTE FORCE APPROACH
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         for (int k = j + 1; k < n; k++) {
        //             if (nums[i] + nums[j] + nums[k] == 0) {
        //                 vector<int> trip = {nums[i], nums[j], nums[k]};
        //                 sort(trip.begin(), trip.end());

        //                 if (s.find(trip) == s.end()) {
        //                     s.insert(trip);
        //                     ans.push_back(trip);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return ans;

        // 2.HASHING
        /*  for(int i=0;i<n;i++)
          {
             int tar=-nums[i];
             set<int> s;
             for(int j=i+1;j<n;j++)
             {
                 int third=tar-nums[j];

                 if(s.find(third)!=s.end())
                 {
                     vector<int> trip={nums[i],nums[j],third};
                     sort(trip.begin(),trip.end());
                     uniquetrip.insert(trip);
                 }
                 s.insert(nums[j]);
             }
          }
        ans={uniquetrip.begin(),uniquetrip.end()};
        return ans;
 */

        // 2 POINTER APPROACH
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;

                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                      j++;
                }
            }
        }
        return ans;
    }
};