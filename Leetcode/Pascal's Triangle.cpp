class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> vec1;
		for (int i = 0; i < numRows; ++i)
		{
			vector<int> vec2;
			vec2.push_back(1);
			for (int j = 1; j < i; ++j)
			{
				int tmp = vec1[i - 1][j - 1] + vec1[i - 1][j];
				vec2.push_back(tmp);
			}
			if (i != 0)
				vec2.push_back(1);
			vec1.push_back(vec2);
		}
		return vec1;
	}
};