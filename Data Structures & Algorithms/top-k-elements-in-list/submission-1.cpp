class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto cur : mp) {
            pq.push({cur.second, cur.first});
        }
        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
