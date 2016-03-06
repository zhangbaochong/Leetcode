class Solution {
public:
	string getHint(string secret, string guess) {
		int aCount = 0;
		int bCount = 0;
		vector<int> secretVec(10, 0);
		vector<int> guessVec(10, 0);
		if (secret.empty())
			return "0A0B";
		for (int i = 0; i < secret.size(); ++i)
		{
			char c1 = secret[i];
			char c2 = guess[i];
			if (c1 == c2)
			{
				++aCount;
			}
			else
			{
				++secretVec[c1 - '0'];
				++guessVec[c2 - '0'];
			}
		}
		for (int i = 0; i < secretVec.size(); ++i)
		{
			bCount += min(secretVec[i], guessVec[i]);
		}
		return to_string(aCount) + "A" + to_string(bCount) + "B";
	}
};