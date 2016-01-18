/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/


#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int index = 0;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] != 0)
			{
				nums[index] = nums[i];
				index++;
			}
		}
		for (int j = index; j < nums.size(); ++j)
		{
			nums[j] = 0;
		}
	}
};
 //int main()
 //{
 //	vector<int> nums = { 0, 1, 0, 3, 12 };
 //	Solution s;
 //	s.moveZeroes(nums);
 //	for (auto item : nums)
 //		cout << item << " ";
 //	system("pause");
 //}