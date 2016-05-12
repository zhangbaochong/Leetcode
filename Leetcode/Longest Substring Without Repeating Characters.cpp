class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		map<char, int> hash;
		int start = -1;
		int maxLength = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (hash.count(s[i]) != 0)
			{
				start = max(start, hash[s[i]]);
			}
			hash[s[i]] = i;
			maxLength = max(maxLength, i - start);
		}
		return maxLength;
	}
};