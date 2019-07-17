#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int testcase = 1; testcase <= T; testcase++)
	{
		int time, num, min, max;
		cin >> time >> num;
		min = num;
		max = num;
		for (int i = 1; i < time; i++)
		{
			cin >> num;
			if (min > num) min = num;
			if (max < num) max = num;
		}
		int res = min * max;

		cout << "#" << testcase << " " << res << "\n";
	}
}