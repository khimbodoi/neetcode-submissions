class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for (int i = 0; i < n; ++i) {
            int comp = target - numbers[i];
            auto it = lower_bound(numbers.begin() + i + 1, numbers.end(), comp);
            if (it != numbers.end() && *it == comp) {
                int j = distance(numbers.begin(), it);
                return {i + 1, j + 1};
            }
        }
        return {};
    }
};
