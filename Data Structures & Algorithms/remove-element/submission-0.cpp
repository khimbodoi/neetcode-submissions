class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int key = val;
        int k = 0;
        int j = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == key) {
               swap(nums[j], nums[i]);
               j--;
               k++;
            }
        }
        return nums.size() - k;
    }
};