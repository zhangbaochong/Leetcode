class Solution {
public:
	int GetProduct(int num)
	{
		int sum = 0;
		while (num)
		{
			sum += (num % 10) * (num % 10);
			num /= 10;;
		}
		return sum;
	}

	bool isHappy(int n) {
		set<int> s;
		while (1)
		{
			if (s.find(n) == s.end())
				s.insert(n);
			else
				return false;
			if (n == 1)
				return true;
			n = GetProduct(n);
		}

	}

};