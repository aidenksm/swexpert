#include <iostream>
#include <string>
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
		string start;
		string end;
		string res;
		cin >> start >> end;
		int start_h, start_m, start_s, end_h, end_m, end_s;
		int res_h, res_m, res_s;

		start_h = (start[0] - '0') * 10 + start[1] - '0';
		start_m = (start[3] - '0') * 10 + start[4] - '0';
		start_s = (start[6] - '0') * 10 + start[7] - '0';
		end_h = (end[0] - '0') * 10 + end[1] - '0';
		end_m = (end[3] - '0') * 10 + end[4] - '0';
		end_s = (end[6] - '0') * 10 + end[7] - '0';

		if (end_s < start_s) {
			end_s += 60;
			end_m -= 1;
		}
		res_s = end_s - start_s;
		if (end_m < start_m) {
			end_m += 60;
			end_h -= 1;
		}
		res_m = end_m - start_m;
		if (end_h < start_h) {
			end_h += 24;
		}
		res_h = end_h - start_h;

		res = (res_h / 10) + '0';
		res += (res_h % 10) + '0';
		res += ":";
		res += (res_m / 10) + '0';
		res += (res_m % 10) + '0';
		res += ":";
		res += (res_s / 10) + '0';
		res += (res_s % 10) + '0';

		cout << "#" << testcase << " " << res << "\n";
	}
}