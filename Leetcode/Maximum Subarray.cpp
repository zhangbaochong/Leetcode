class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int n = nums.size();
		vector<int> maxEnd(n);
		maxEnd[0] = nums[0];
		for (int i = 1; i < n; ++i)
		{
			if (maxEnd[i - 1] < 0)
				maxEnd[i] = nums[i];
			else
				maxEnd[i] = maxEnd[i - 1] + nums[i];
		}
		int max = maxEnd[0];
		for (int i = 1; i < n; ++i)
		{
			if (max < maxEnd[i])
				max = maxEnd[i];
		}
		return max;
	}
};