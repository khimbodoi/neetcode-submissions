class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n != m) return false;
        int check[26] = {false};
        for (int i = 0; i < n; i++) {
            check[s[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
                check[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (check[i] != 0) return false;
        }
        return true;
    }
};
