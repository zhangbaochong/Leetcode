class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		set<int> setCount;
		for (auto num : nums)
		{
			auto result = setCount.insert(num);
			if (!result.second)
				return num;
		}
		return 0;
	}
};