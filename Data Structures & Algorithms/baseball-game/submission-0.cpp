
class Solution {
public:
	int calPoints(vector<string>& operations) {
		vector<int> playing;
		for (const string& op : operations) {
			if (op == "+") {
				int n = playing.size();
				playing.push_back(playing[n - 1] + playing[n - 2]);
			}
			else if (op == "C") {
				playing.pop_back();
			}
			else if (op == "D") {
				playing.push_back(2 * playing.back());
			}
			else {
				playing.push_back(stoi(op));
			}
		}

		int res = 0;
		for (int score : playing) {
			res += score;
		}
		return res;
	}
};