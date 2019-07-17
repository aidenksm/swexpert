#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int testcase = 1; testcase <= T; testcase++)
	{
		string s;
		cin >> s;
		long long res = 1;
		for (int i = 0; i < s.length(); i++)
		{
			int mul = 1;
			if (i == 0)
			{
				if (s[i] != s[i + 1]) {
					mul += 1;
					res *= mul;
				}
			}
			else if (i == s.length() - 1)
			{
				if (s[i] != s[i - 1]) {
					mul += 1;
					res *= mul;
				}
			}
			else
			{
				if (s[i] != s[i - 1])
					mul += 1;
				if (s[i] != s[i + 1] && s[i - 1] != s[i + 1])
					mul += 1;
				res *= mul;
			}
			res %= 1000000007;
		}

		cout << "#" << testcase << " " << res % 1000000007 << "\n";
	}
}