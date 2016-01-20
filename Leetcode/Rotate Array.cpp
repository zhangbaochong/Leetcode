#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int size = nums.size();
		vector<int> temp(size);
		for (int i = 0; i < k; ++i)
		{
			temp[i] = nums[size - k + i];
		}
		for (int i = k, j = 0; i < size; i++,j++)
		{
			temp[i] = nums[j];
		}
		nums = temp;
	}
};

int main()
{
	vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
	Solution s;
	s.rotate(nums,3);
	for (auto num : nums)
	{
		cout << num << ' ';
	}
	system("pause");
	return 0;
}