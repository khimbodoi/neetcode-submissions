class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        
        for (int i = 0; i < nums.size(); ++i) {
            // Bước 1: Ngó vào rổ xem có số này chưa? Hàm count tốn đúng O(1) thời gian
            if (window.count(nums[i])) {
                return true;
            }
            
            // Bước 2: Chưa có thì nhét nó vào rổ
            window.insert(nums[i]);
            
            // Bước 3: Rổ bị quá tải (> k phần tử) -> Ném thằng xa nhất ra ngoài
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        
        return false;
    }
};