class Solution {
public:
	bool isValid(string s) {
		stack<char> vec;
		for (char c : s)
		{
			switch (c)
			{
			case '(':
			case '[':
			case '{':
				vec.push(c);
				break;
			case ')':
				if (vec.empty() || vec.top() != '(')
					return false;
				else
					vec.pop();
				break;
			case ']':
				if (vec.empty() || vec.top() != '[')
					return false;
				else
					vec.pop();
				break;
			case '}':
				if (vec.empty() || vec.top() != '{')
					return false;
				else
					vec.pop();
				break;
			}
		}
		return vec.empty();
	}
};