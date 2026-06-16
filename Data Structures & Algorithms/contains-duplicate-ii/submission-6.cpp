class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return false;
        if (n == 2) return nums[0] == nums[1];
        for (int i = 0; i < n - min(k, n - 1); ++i) {
            int j = i + 1;
            while (abs(i - j) <= k) {
                if (nums[i] == nums[j]) return true;
                j++;
            }
        }
        return false;
    }
};