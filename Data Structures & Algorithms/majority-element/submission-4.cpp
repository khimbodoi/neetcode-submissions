class Solution {
public:
 /*   int majorityElement(vector<int>& nums) {
        unordered_map<int, int> quantity;
        for (int i = 0; i < nums.size(); i++) {
            quantity[nums[i]]++;
        }
        int mx = 0;
        int mxV = 0;
        for (auto it : quantity) {
            if (mx < it.second) {
                mxV = it.first;
                mx = it.second;
            }
        }
        return mxV;
    } */

    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int orc = 0;
        for (int i = 0; i < n; i++) {
            if (cnt == 0) orc = nums[i];
            if (orc == nums[i]) cnt++;
            else cnt--; 
        }
        return orc;
    }

};