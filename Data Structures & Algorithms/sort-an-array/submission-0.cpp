class Solution {
public:
    void heaptify(vector<int>& nums, int n, int i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int large = i;
        if (left < n && nums[large] < nums[left]) {
            large = left; 
        }
        if (right < n && nums[large] < nums[right]) {
            large = right;
        }
        if (large != i) {
            swap(nums[large], nums[i]);
            heaptify(nums, n, large);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; --i) {
            heaptify(nums, n, i);
        }
        for (int i = n - 1; i > 0; --i) {
            swap(nums[0], nums[i]);
            heaptify(nums, i, 0);
        }
        return nums; 
    }
    
};