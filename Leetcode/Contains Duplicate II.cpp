class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (map.count(nums[i]) == 0)
				map[nums[i]] = i;
			else if (i - map[nums[i]] <= k)
				return true;
			else
				map[nums[i]] = i;
		}
		return false;
	}
};