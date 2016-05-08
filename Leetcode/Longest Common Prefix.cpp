class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		int n = strs.size();
		string prefix = "";
		if (strs.empty())
			return prefix;
		if (n == 1)
			return strs[0];
		int minLen = strs[0].size();
		for (int i = 0; i < n; ++i)
		{
			if (minLen > strs[i].size())
				minLen = strs[i].size();
		}
		int j = 0;
		while (j < minLen)
		{
			bool isAllEqual = true;
			char c = strs[0][j];
			for (auto s : strs)
			{
				if (c != s[j])
					isAllEqual = false;
			}
			if (!isAllEqual)
				break;
			prefix += string(1, c);
			++j;
		}
		return prefix;
	}
};