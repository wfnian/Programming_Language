// 709to_lower_case.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	string toLowerCase(string str) {
		//cout << 'H' - 'h';//-32
		for (size_t i = 0; i < str.size(); i++)
			if (str[i] <= 'Z'&&str[i] >= 'A')
				str[i] += 32;

		return str;
	}
};

int main()
{
	Solution s;
	cout << s.toLowerCase("Hello");
    return 0;
}

