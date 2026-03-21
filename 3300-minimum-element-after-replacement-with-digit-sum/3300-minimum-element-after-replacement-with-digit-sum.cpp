class Solution {
    int sum(int num)
    { int ans=0;
        while(num)
        {
           ans=ans+num%10;
           num=num/10;
        }
        return ans;
    }
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {   int j=sum(nums[i]);
            ans.push_back(j);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};