#include <iostream>
#include <vector>
using namespace std;

class Array {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;  // nums1 的最后一个有效元素
        int p2 = n - 1;  // nums2 的最后一个有效元素
        int tail = m + n - 1;  // nums1 的最后一个位置

        // 从后向前合并
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[tail] = nums1[p1];
                p1--;
            }
            else {
                nums1[tail] = nums2[p2];
                p2--;
            }
            tail--;
        }

        // 如果 nums2 还有剩余元素，直接复制到 nums1
        while (p2 >= 0) {
            nums1[tail] = nums2[p2];
            p2--;
            tail--;
        }
    }
};

int main() {
    vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };  // nums1 的初始数据
    int m = 3;  // nums1 的有效元素数量
    vector<int> nums2 = { 2, 5, 6 };  // nums2
    int n = 3;  // nums2 的元素数量

    Array array;
    array.merge(nums1, m, nums2, n);  // 调用合并函数

    // 输出合并后的 nums1
    for (int num : nums1) {
        cout << num << " ";
    }
    return 0;
}