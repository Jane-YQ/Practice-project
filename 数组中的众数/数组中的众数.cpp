#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 0;// 计数器，记录当前候选元素的数量
		int a = 0; // 记录候选元素的值
		int i = 0;
		for (int num : nums) {

			// 如果计数器为0，表示当前没有候选元素
		    // 将当前元素设为新的候选元素
			if (count == 0) {
				a = num;
				count++;
			}

			// 如果计数器不为0且当前元素等于候选元素
			// 说明又遇到一个相同的元素，增加计数
			else if (count != 0 && a == num) {
				count++;
			}

			// 如果计数器不为0且当前元素不等于候选元素
			// 说明遇到不同元素，减少计数（抵消）
			else {
				count--;
			}
		}
		return a;// 返回最终的候选元素
	}
};

int main() {
	Solution sol;
	vector<int> nums = { 1,2,2,3,0,3,2,4 };
	cout << "数组中最多的元素：" << sol.majorityElement(nums) << endl;
	return 0;
}