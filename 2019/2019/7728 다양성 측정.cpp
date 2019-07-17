#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; testcase++)
	{
		string s;
		set<int> arr;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (arr.size() == 10)
				break;
			arr.insert(s[i] - '0');
		}

		cout << "#" << testcase << " " << arr.size() << "\n";
	}
}