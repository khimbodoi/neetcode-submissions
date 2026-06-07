class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (auto& str : strs) {
            res += to_string(str.size()) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') ++j;
            int size = stoi(s.substr(i, j - i));
            string w = s.substr(j + 1, size);
            res.push_back(w);
            i = j + 1 + size;
        }
        return res;
    }
};
