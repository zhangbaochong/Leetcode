class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		vector<string> vecStr;
		if (nums.size() == 1)
		{
			vecStr.push_back(to_string(nums[0]));
			return vecStr;
		}
		for (int i = 0; i < nums.size(); ++i)
		{
			int a = nums[i];
			while (i + 1 < nums.size() && (nums[i + 1] - nums[i]) == 1)
			{
				++i;
			}
			if (a != nums[i])
			{
				vecStr.push_back(to_string(a) + "->" + to_string(nums[i]));
			}
			else if (a == nums[i])
				vecStr.push_back(to_string(a));
		}
		return vecStr;
	}
};