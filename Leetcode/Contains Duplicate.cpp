#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
	bool containsDuplicate(std::vector<int>& nums) {
		std::set<int> s;
		for (int i = 0; i < nums.size(); ++i)
		{
			s.insert(nums[i]);
		}
		return s.size() != nums.size();
	}
};