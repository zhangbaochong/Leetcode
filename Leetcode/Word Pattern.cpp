class Solution {
public:
	bool wordPattern(string pattern, string str) {
		stringstream ss(str);
		string s;
		vector<string> strVec;
		while (ss >> s)
		{
			strVec.push_back(s);
		}

		if (strVec.size() != pattern.size())
			return false;
		map<char, string> hash;
		int i = 0;
		for (auto c : pattern)
		{
			if (hash.count(c))
			{
				if (hash[c] != strVec[i])
					return false;
			}
			else
			{
				for (auto p : hash)
				{
					if (p.second == strVec[i])
						return false;
				}
				hash[c] = strVec[i];
			}
			++i;
		}
		return true;
	}
};