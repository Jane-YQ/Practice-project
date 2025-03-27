#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool jumpgame(vector<int>& nums) {
		int mx = 0;
		int length = nums.size();
		for (int i = 0; i < length; i++) {
			if (i > mx) {
				return false;
			}
			mx = max(mx, i + nums[i]);

		}
		return true;
	}
};

int main() {
	vector<int> nums = { 1,3,3,0,2,1,2 };
	Solution sol;
	bool result = sol.jumpgame(nums);
	cout << "能否到达终点: " << (result ? "可以" : "不可以") << endl;
	cout << "数组内容: ";
	for (int num : nums) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}