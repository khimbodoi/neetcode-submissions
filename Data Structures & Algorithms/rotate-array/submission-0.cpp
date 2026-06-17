class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int actual = k % n;
        for (int i = 0; i < actual; ++i) {
            int key = nums[n - 1];
            for (int i = n - 2; i >= 0; --i) {
                nums[i + 1] = nums[i];
            }
            nums[0] = key;
        }
    }
};