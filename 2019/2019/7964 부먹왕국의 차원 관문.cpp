#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; testcase++)
	{
		int N, D, count = 0, ans = 0;
		cin >> N >> D;
		//vector<int> v;
		for (int i = 0; i < N; i++)
		{
			int k;
			cin >> k;
			//v.push_back(k);
			if (k == 0)
			{
				count++;
				if (count == D)
				{
					ans++;
					count = 0;
				}
			}
			else count = 0;
		}

		cout << "#" << testcase << " " << ans << "\n";
	}
}