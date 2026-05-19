int speedUp = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> uMap;
        uMap.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];
            if (uMap.find(comp) != uMap.end())
                return { uMap[comp], i };
            else uMap[nums[i]] = i;
        }
        return {};
    }
};