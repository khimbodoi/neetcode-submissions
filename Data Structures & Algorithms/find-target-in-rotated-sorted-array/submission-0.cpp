//33. Search in Rotated Sorted Array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            // 1 trong 2 bên sẽ luôn tồn tại 1 dãy mà ở đó số luôn tăng đàn
            if (nums[mid] >= nums[left]) {
                // kiểm tra xem target có nằm trong dãy trái tăng không 
                if (nums[left] > target || target > nums[mid]) left = mid + 1;
                else right = mid;
            }
            else {
                // kiểm tra xem target có nằm trong dãy phải tăng không
                if (nums[mid] > target || target > nums[right]) right = mid - 1;
                else left = mid;
            }
        }
        return -1;
    }
};