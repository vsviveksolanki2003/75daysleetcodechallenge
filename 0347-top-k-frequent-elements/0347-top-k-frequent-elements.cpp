class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> ans;
        map<int, int> mp;
        for (auto x : nums)
            mp[x]++;

        vector<pair<int, int>> pq;
        for (auto it : mp)
            pq.push_back(make_pair(it.second,it.first));

      sort(pq.rbegin(),pq.rend());
        for (int i = 0; i<pq.size() && k!=0; i++) {
             ans.push_back(pq[i].second);
             k--;
        }
        return ans;
    }
    };