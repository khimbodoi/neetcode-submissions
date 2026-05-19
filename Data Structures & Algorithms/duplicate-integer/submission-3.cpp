class Solution {
public:
    bool hasDuplicate(vector<int>& nums) { 
        int n = nums.size();
        unordered_map<int, bool> check;
        for (int i = 0; i < n; i++) {
            if (check[nums[i]] == true) return true;
            check[nums[i]] = true;
        }
        return false;
    }
};