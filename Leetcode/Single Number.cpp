class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int sum = nums[0];
		for (auto itr = nums.begin() + 1; itr != nums.end(); ++itr)
		{
			sum ^= *itr;
		}
		return sum;
	}
};