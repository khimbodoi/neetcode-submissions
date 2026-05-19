class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sub(2*nums.size());
        int k = 0;
            for (int j = 0; j < nums.size(); j++) {
                sub[k] = nums[j];
                sub[k + nums.size()] = nums[j];
                k++;
            }
        return sub;
    }
};