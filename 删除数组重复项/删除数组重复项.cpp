#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int length = nums.size();
		if (length == 0) {
			return 0;
		}

		int a = 1;
		for (int i = 1; i < length; i++) {
			if (nums[i] != nums[i - 1]) {
				nums[a] = nums[i];
				a++;
			}
		}
		return a;
	}
};

int main() {
	vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
	Solution sol;
	int newLength = sol.removeDuplicates(nums);
	cout << "新数组长度: " << newLength << endl;
	cout << "修改后的数组: ";
	for (int i = 0; i < newLength; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;

	return 0;
}