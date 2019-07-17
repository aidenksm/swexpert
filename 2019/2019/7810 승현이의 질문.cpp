#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;
const int size_a = 1000001;
int T, N, temp;
int arr[size_a] = {};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	cin >> T;
	//for (int testcase = 1; testcase <= T; testcase++)
	//{
	//	int N, ans, max, min;
	//	cin >> N;
	//	vector<int> v;
	//	for (int i = 0; i < N; i++)
	//	{
	//		int k;
	//		cin >> k;
	//		v.push_back(k);
	//	}
	//	
	//	sort(v.begin(), v.end());
	//	
	//	min = 0;
	//	max = N;
	//	ans = max / 2;
	//	if (ans == 0) ans++;

	//	while (min != max)
	//	{
	//		

	//		if (v[v.size() - ans] >= ans)
	//		{
	//			min = ans;
	//		}

	//		else
	//		{
	//			if (max == ans)
	//				max = min;
	//			else max = ans;
	//		}

	//		if (min + 1 == max && ans + 1 <= max)
	//		{
	//			ans++;
	//		}

	//		else 
	//		{ 
	//			ans = (max + min) / 2; 
	//		}
	//		
	//	}

	//	cout << "#" << testcase << " " << ans << "\n";
	//}

	for (int testcase = 1; testcase <= T; testcase++)
	{
		cin >> N;
		int max = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			arr[temp]++;
			max = (max > temp) ? max : temp;
		}
		for (int i = max - 1; i >= 0; i--) {
			arr[i] += arr[i + 1];
		}
		int ans = 0;
		for (int i = 0; i <= max; i++) {
			if (arr[i] >= i) {
				ans = i;
			}
			arr[i] = 0;
		}
		cout << "#" << testcase << " " << ans << "\n";
	}
}