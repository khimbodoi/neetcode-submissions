class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n != m) return false;
        unordered_map<char, int> check;
        for (int i = 0; i < n; i++) {
            check[s[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (check.find(t[i]) != check.end()) {
                check[t[i]]--;
                if (check[t[i]] < 0) return false;
            }
            else 
                return false;
        }
        return true;
    }
};
