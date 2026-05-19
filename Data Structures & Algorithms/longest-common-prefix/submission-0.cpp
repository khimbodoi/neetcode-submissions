class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string res = "";
		int n = strs.size();
		int minS = 1e9;
		for (int i = 0; i < n; i++) {
			int size = strs[i].length();
			minS = min(minS, size);
		}
		for (int j = 0; j < minS; j++) {
			for (int i = 1; i < n; i++) {
				if (strs[0][j] != strs[i][j]) return res;
			}
			res += strs[0][j];
		}
		return res;
	}
};