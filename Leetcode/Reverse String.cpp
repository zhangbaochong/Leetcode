class Solution {
public:
	string reverseString(string s) {
		int low = 0;
		int high = s.size() - 1;
		while (low < high)
		{
			swap(s[low++], s[high--]);
		}
		return s;
	}
};