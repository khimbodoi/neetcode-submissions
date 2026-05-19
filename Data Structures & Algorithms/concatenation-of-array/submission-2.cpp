class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sub;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < nums.size(); j++) {
                sub.push_back(nums[j]);
            }
        }
        return sub;
    }
};