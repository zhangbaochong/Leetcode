class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0)
			return 0;
		vector<int> maxProfit;
		maxProfit.push_back(0);
		for (int i = 1; i < prices.size(); ++i)
		{
			if (prices[i] <= prices[i - 1])
				maxProfit.push_back(maxProfit[i - 1]);
			else
			{
				int tmp = prices[i] - prices[i - 1];
				maxProfit.push_back(maxProfit[i - 1] + tmp);
			}
		}
		int max = 0;
		for (auto num : maxProfit)
		{
			if (max < num)
				max = num;
		}
		return max;
	}
};