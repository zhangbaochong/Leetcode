class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> result{ -1, -1 };
		int low = 0;
		int high = nums.size() - 1;
		bool isFindLow = false;
		bool isFindHigh = false;
		while (low <= high)
		{
			if (nums[low] != target)
				++low;
			else
			{
				result[0] = low;
				isFindLow = true;
			}
			if (nums[high] != target)
				--high;
			else
			{
				result[1] = high;
				isFindHigh = true;
			}
			if (isFindLow && isFindHigh)
				break;
		}
		return result;
	}
};