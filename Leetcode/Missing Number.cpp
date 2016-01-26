class Solution {
public:
	int missingNumber(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
		else
		{
			sort(nums.begin(), nums.end());
			int index = 0;
			for (auto num : nums)
			{
				if (index != num)
					return index;
				else
					index++;
			}
			return index;
		}
	}
};