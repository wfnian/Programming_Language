// 728self_dividing_numbers.cpp: 定义控制台应用程序的入口点。
//

// 728_.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> dived;
		string num;
		int ans = 0, number, ans1 = 0;
		for (int i = left; i <= right; i++) {
			ans = 0;
			ans1 = 0;
			number = i;
			if (to_string(i).find("0") == std::string::npos) {
				int b = 1;
				while (true)
				{
					b = number % 10;

					if (b == 0) {
						break;
					}
					number /= 10;
					if (i%b != 0)
						ans++;
				}

				if (ans == 0) {
					//cout << ans1 << endl;
					dived.push_back(i);
				}
			}
		}
		return dived;
	}
};

int main()
{
	Solution solution;
	vector<int> divid;
	divid = solution.selfDividingNumbers(66, 708);
	for each (int var in divid)
	{
		cout << var << " ";
	}

	return 0;
}

