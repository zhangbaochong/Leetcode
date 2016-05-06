class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target)
	{
		int n = nums.size();
		int sum = 0;
		if (n <= 3)
		{
			return accumulate(nums.begin(), nums.end(), 0);
		}
		sort(nums.begin(), nums.end());

		int temp = nums[0] + nums[1] + nums[2];
		for (int i = 0; i < n - 2; ++i)
		{
			int j = i + 1;
			int k = n - 1;
			while (j < k)
			{
				sum = nums[i] + nums[j] + nums[k];
				if (abs(target - sum) < abs(target - temp))
				{
					temp = sum;
					if (temp == target)
						return  temp;
				}
				if (sum > target)
				{
					k--;
				}
				else
				{
					j++;
				}
			}
		}
		return  temp;
	}
};