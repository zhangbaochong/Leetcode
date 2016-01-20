#include <iostream>
#include <vector>
using namespace std;
/*
Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.
一个整数按位存在一个数组中array[0]为最高位
*/
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int size = digits.size();
		if (digits[size - 1] != 9)
		{
			digits[size - 1]++;
			return digits;
		}
		else
		{
			for (int i = size - 1; i >= 0; --i)
			{
				if (++digits[i] > 9)
				{
					digits[i] = 0;
				}
				else
					break;
			}
			if (digits[0] == 0)
			{
				digits[0] = 1;
				digits.push_back(0);
			}
		}
		return digits;
	}
};

//int main()
//{
//	vector<int> vec = { 9, 9, 9, 9, 9 };
//	Solution s;
//	vector<int> nums = s.plusOne(vec);
//	for (auto num : nums)
//		cout << num << ' ';
//	system("pause");
//	return 0;
//}