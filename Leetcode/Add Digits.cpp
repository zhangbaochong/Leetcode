class Solution {
public:
	int addDigits(int num) {
		if (num < 10)
			return num;
		int sum = 0;
		while (num)
		{
			sum += num % 10;
			num /= 10;
		}
		addDigits(sum);
	}
};

/*O(1)的算法 经证明可以得到结论
class Solution {
public:
int addDigits(int num) {
if(num == 0)    return 0;
else if(num % 9)      return num % 9;
else    return 9;
}
};
*/