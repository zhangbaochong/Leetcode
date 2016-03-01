class Solution {
public:
	bool isAnagram(string s, string t) {
		map<char, size_t> countMap1, countMap2;
		for (auto c : s)
			++countMap1[c];
		for (auto c : t)
			++countMap2[c];
		if (countMap1 == countMap2)
			return true;
		else
			return false;
	}
};