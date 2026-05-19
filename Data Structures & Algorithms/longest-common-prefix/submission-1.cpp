class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string res = "";
		int n = strs.size();
		for (int j = 0; j < strs[0].length(); j++) {
			for (int i = 1; i < n; i++) {
				if (strs[0][j] != strs[i][j]) return res;
			}
			res += strs[0][j];
		}
		return res;
	}
};